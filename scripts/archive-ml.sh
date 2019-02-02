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

# ar t libwebrtc.a >extract.sh; gawk -i inplace '{print "echo " $s " && ar x libwebrtc.a " $s " && ar d libwebrtc.a " $s " && mv " $s " " NR "-" $s}' extract.sh; chmod +x extract.sh; ./extract.sh;rm libwebrtc.a; /home/ubuntu/android-ndk-r19/toolchains/llvm/prebuilt/linux-x86_64/bin/aarch64-linux-android-ar crs libwebrtc.a *.o; /home/ubuntu/android-ndk-r19/toolchains/llvm/prebuilt/linux-x86_64/bin/aarch64-linux-android-objcopy --redefine-sym isqrt32=webrtc_isqrt32 --redefine-sym silk_insertion_sort_increasing=webrtc_silk_insertion_sort_increasing --redefine-sym silk_insertion_sort_increasing_all_values_int16=webrtc_silk_insertion_sort_increasing_all_values_int16 libwebrtc.a
