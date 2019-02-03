#!/usr/bin/env node

const fs = require('fs');
const s = fs.readFileSync('lol.txt', 'utf8');
const ls = s.split('\n');
process.stdout.write('gawk \'{if (');
const index = {};
let first = true;
for (let i = 0; i < ls.length; i++) {
  const l = ls[i];
  const match = l.match(/\(([0-9]+).+?\.o\): In function/);
  if (match && !index[match[1]]) {
    if (first) {
      first = false;
    } else {
      process.stdout.write(' || ');
    }
    process.stdout.write(`NR == ${match[1]}`);
    index[match[1]] = true;
  }
}
process.stdout.write(') {print "skip"}}\'');
