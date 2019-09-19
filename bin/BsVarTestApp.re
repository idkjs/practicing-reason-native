Console.log("Running Test Program:");
let () = print_endline(Library.Util.hello());
Console.log("Running Hello Array Program:");
let () = Console.log(Library.Util.ticks);
let _ = Belt.Array.map(Library.Util.ticks,tick => Console.log(tick));
Console.log("Running Ticks2 Array Program:");
let _ = Belt.Array.map(Library.Util.ticks2,tick => Console.log(tick));
Console.log("Running Ticks3 Array Program:");
let _ = Belt.Array.map(Library.Util.ticks3,tick => Console.log(tick));

let () = Library.Filtering.main();