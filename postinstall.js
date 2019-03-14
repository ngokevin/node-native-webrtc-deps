const path = require('path');
const fs = require('fs');
const unzip = require('unzip');

const rs = fs.createReadStream(path.join(__dirname, 'lib.zip'));

rs.on('open', () => {
  rs.pipe(unzip.Extract({path: __dirname}));
});
