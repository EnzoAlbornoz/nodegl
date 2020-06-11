# NodeGL - OpenGL bindings for Node.JS

This project ports OpenGL C/C++ call to Node.JS using N-API.
All callable functions present on `gl.h` are binded, including
functions that depend on pointers or non-javascript sized variables
as float, short and bytes.
This was possible using the Buffer object of Node, that exports its
data as an pointer, not like an JS normal object nor JS arrays (with getters).

# Installing

Using Npm:
```
npm install nodegl
```
Using Yarn:
```
yarn add nodegl
```

# License
This package is licensed under MIT License. You can see more about it [here](./LICENSE.md)
