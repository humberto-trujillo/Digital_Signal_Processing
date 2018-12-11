reset
set size 1,1
set multiplot
set size 0.5,0.5
set origin 0,0.5
plot 'signals/input_signal.dat' with lines lc rgb 'black'
set origin 0.5,0.5
plot 'signals/impulse_response.dat' with lines lc rgb 'red'
pause -1 "Hit any key to continue"