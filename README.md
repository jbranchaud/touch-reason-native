# touch

> Touch a file -- creating it if necessary and then setting access/modified times

This is a tiny command line program written in [ReasonML](https://reasonml.github.io/) and compiled natively using `bsb-native`.

### Install

```
$ npm install
```

### Build

```
$ npm run build
```

### Run

```
$ lib/bs/bytecode/touch hello.txt
$ stat -x hello.txt
```
