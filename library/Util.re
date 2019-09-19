// open Belt;

let hello = () =>
  Pastel.(
    <Pastel>
      <Pastel color=Red> "Hello" </Pastel>
      ", "
      <Pastel color=Green> "World" </Pastel>
      "!"
    </Pastel>
  );

// let blah = Belt.Array.makeUninitialized(10);
let ticks = Belt.Array.makeUninitialized(60);

// type tick = string;
let ticks = Belt.Array.mapWithIndex(ticks, (idx, _tick) => "tick");
let ticks = [|"tick","tick","tick"|];
let helloArr = Belt.Array.makeUninitialized(10);

// let helloArr =()=> Belt.Array.mapWithIndex(helloArr,(idx, _tick) => hello());
let helloArr = () =>
  Belt.Array.mapWithIndex(helloArr, (idx, _) => hello());

// let helloArr = Array.makeUninitialized(10)|> Option.getWithDefault([||]);
// let hellos = Belt.Array.mapWithIndex(helloArr,(idx, _) =>
//     hello()