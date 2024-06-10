// Run this to test, the output should be 'hello'
// If the module is not built correctly, it will fail with MODULE_NOT_FOUND

const { myapp } = require('./index');

console.log(myapp.hello());
