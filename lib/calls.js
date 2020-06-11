// Import Bindings
const bindings = require("../build/Release/nodegl.node");
// Export Calls
module.exports = {
	// Define Calls
	...bindings,
};
