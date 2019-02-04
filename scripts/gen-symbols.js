#!/usr/bin/env node

const fs = require('fs');
const s = fs.readFileSync('error.txt', 'utf8');
const ls = s.split('\n');
// process.stdout.write('gawk \'{if (');
const index = {};

for (let i = 0; i < ls.length; i++) {
  const l = ls[i];
  // const match = l.match(/multiple definition of `(.+?)'/);
  const match = l.match(/undefined reference to `(.+?)'/);
  if (match && !index[match[1]]) {
    console.log(`${match[1]} webrtc_${match[1]}`);
    index[match[1]] = true;
  }
}
// process.stdout.write(') {print "skip"}}\'');
