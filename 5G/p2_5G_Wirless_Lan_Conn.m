%Simulation duration of 10ms frames
rng('default');
numFramesSimulation=100;

% Create simulation
networkSimulator = wirelessnetworkSimulator.init();

%Craete the gNB
gNB = nrGNB(TransmitPower=34, CarrierFrequency= 2.6e9,ChannelBandwidth=5e6);  
% Create the UEs 
uePositions = [300 -400 0; 700 700 0; -1000 500 0; -1000 -500 0];  
UEs = nrUE(Position=uePositions, TransmitPower=23); 

%Form the NR cell by connecting UEs to gNB 
connectUE(gNB, UEs, FullBufferTraffic="on");

% Add nodes to the simulator and run the simulation 
addNodes(networkSimulator, gNB);  
addNodes(networkSimulator, UEs);  
run(networkSimulator, numFrameSimulation*1e-2);

%Read performance metrics 
gNBStats = statistics(gNB)  
ueStats = statistics(UEs);  
