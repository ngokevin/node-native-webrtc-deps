export MLSDK=${MLSDK:-/mnt/c/Users/avaer/MagicLeap/mlsdk/v0.19.0}

rm -f libwebrtc_obj.a
node ./gen-libwebrtc-ar.js >gen-webrtc-ar.sh
chmod +x gen-webrtc-ar.sh
./gen-webrtc-ar.sh
# mv libwebrtc_obj.a libwebrtc.a

rm -f libwebrtc.a
node ./gen-libwebrtc-mri.js >libwebrtc.mri
"$MLSDK/tools/toolchains/bin/aarch64-linux-android-ar" -M <libwebrtc.mri
