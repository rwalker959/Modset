//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Zavarak
//delete itself
_Zavarakstart = createTrigger ["EmptyDetector", getMarkerPos "Zavarak"];
_Zavarakstart setTriggerArea [400, 400, 0, false];
_Zavarakstart setTriggerActivation ["West", "PRESENT", False];
_Zavarakstart setTriggerStatements ["this","['Zavarak',12,150,5,[300,800]] call twc_townSetup"
	,""
];
