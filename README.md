# arjo_modules

This plugin consists of 3 modules: `seq`, `count` and `switch`, each 3HP wide. 
The modules are simple on their own, but can be combined into a powerful sequencer. 

All modules have a `CLK` (clock) and a `RST` (reset) input, which both take a pulse as input. 


<img src="https://i.imgur.com/xLtNqpK.png" height="400"> <img src="https://i.imgur.com/Ln6EuhC.png" height="400"> <img src="https://i.imgur.com/FZLgVO9.png" height="400">

- `seq` cycles through the 8 values of the knobs and outputs the current value. 
- `count` consists of 4 counters. Each output a pulse every x clock steps, where x can be controlled by the knob with a range of 1-16 steps. 
- `switch` cycles through the 8 values of the inputs and outputs the current value, just like `seq`. With the difference being that it has inputs instead of knobs. 

## Releases
https://github.com/ArjoNagelhout/arjo_modules/releases
