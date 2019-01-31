const path = require('path');
const fs = require('fs');
const unzip = require('unzip');
fs.createReadStream(path.join(__dirname, 'lib.zip'))
  .pipe(unzip.Extract({
    path: __dirname,
  }));
