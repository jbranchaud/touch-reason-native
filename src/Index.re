let touch = filename => {
  /* create the file if it doesn't already exist */
  let file = Unix.openfile(filename, [Unix.O_CREAT], 0o666);

  /* set access and modified times to the current time (0.0) */
  Unix.utimes(filename, 0.0, 0.0);

  /* close the opened file */
  Unix.close(file);
};

switch (Sys.argv) {
| [|_cmd_name, filename|] => touch(filename)
| [|_cmd_name|] => print_endline("No file argument given")
| _ => print_endline("Too many arguments given")
};