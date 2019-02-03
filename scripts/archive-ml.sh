export MLSDK=${MLSDK:-/mnt/c/Users/avaer/MagicLeap/mlsdk/v0.19.0}

rm -f libwebrtc_obj.a
node ./gen-libwebrtc-ar.js >gen-webrtc-ar.sh
chmod +x gen-webrtc-ar.sh
./gen-webrtc-ar.sh
# mv libwebrtc_obj.a libwebrtc.a

rm -f libwebrtc.a
node ./gen-libwebrtc-mri.js >libwebrtc.mri
"$MLSDK/tools/toolchains/bin/aarch64-linux-android-ar" -M <libwebrtc.mri

"$MLSDK/tools/toolchains/bin/aarch64-linux-android-objcopy" --redefine-sym isqrt32=webrtc_isqrt32 --redefine-sym silk_insertion_sort_increasing=webrtc_silk_insertion_sort_increasing --redefine-sym silk_insertion_sort_increasing_all_values_int16=webrtc_silk_insertion_sort_increasing_all_values_int16 libwebrtc.a

# ar t libwebrtc.a >extract.sh; gawk -i inplace '{if (NR == 213 || NR == 214 || NR == 266 || NR == 281 || NR == 285 || NR == 313 || NR == 400 || NR == 420 || NR == 423 || NR == 425 || NR == 428 || NR == 429 || NR == 431 || NR == 224 || NR == 225 || NR == 251 || NR == 259 || NR == 260 || NR == 263 || NR == 264 || NR == 347 || NR == 349 || NR == 366 || NR == 402 || NR == 417 || NR == 419 || NR == 424 || NR == 430 || NR == 217 || NR == 265 || NR == 267 || NR == 339) {print "echo " $s " skipped"} else {print "echo " $s " && ar x libwebrtc.a " $s " && ar d libwebrtc.a " $s " && mv " $s " " NR "-" $s}}' extract.sh; chmod +x extract.sh; ./extract.sh; rm libwebrtc.a; /home/ubuntu/android-ndk-r19/toolchains/llvm/prebuilt/linux-x86_64/bin/aarch64-linux-android-ar crs libwebrtc.a *.o; /home/ubuntu/android-ndk-r19/toolchains/llvm/prebuilt/linux-x86_64/bin/aarch64-linux-android-objcopy --redefine-sym isqrt32=webrtc_isqrt32 --redefine-sym silk_insertion_sort_increasing=webrtc_silk_insertion_sort_increasing --redefine-sym silk_insertion_sort_increasing_all_values_int16=webrtc_silk_insertion_sort_increasing_all_values_int16 libwebrtc.a
