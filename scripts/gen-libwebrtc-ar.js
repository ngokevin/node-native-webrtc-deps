#!/usr/bin/env node

const path = require('path');
const fs = require('fs');
const ninjaSrc = fs.readFileSync(path.join(__dirname, 'obj', 'webrtc.ninja'), 'utf8');
const files = ninjaSrc.match(/^build obj\/libwebrtc\.a: alink ([^\n]*)$/m)[1].split(' ');
const oFiles = files.filter(file => /\.o$/.test(file));

const chunkSize = 200;
for (let i = 0; i < oFiles.length; i += chunkSize) {
  console.log(`/mnt/c/Users/avaer/MagicLeap/mlsdk/v0.19.0/tools/toolchains/bin/aarch64-linux-android-ar crs libwebrtc_obj.a \\\n${oFiles.slice(i, i + chunkSize).map(file => `${file}`).join(' \\\n')}`);
}