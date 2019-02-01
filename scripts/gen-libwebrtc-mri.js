#!/usr/bin/env node

const path = require('path');
const fs = require('fs');
const ninjaSrc = fs.readFileSync(path.join(__dirname, 'obj', 'webrtc.ninja'), 'utf8');
const files = ninjaSrc.match(/^build obj\/libwebrtc\.a: alink ([^\n]*)$/m)[1].split(' ');
const aFiles = ['libwebrtc_obj.a'].concat(files.filter(file => /\.a$/.test(file)));

console.log(`create libwebrtc.a
${aFiles.map(file => 'addlib ' + file).join('\n')}
save
end
`);