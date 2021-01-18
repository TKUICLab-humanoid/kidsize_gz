#include "strategy/strategy_main.h"

int main(int argc, char** argv)
{
	ros::init(argc, argv, "kidsize");
	ros::NodeHandle nh;
	KidsizeStrategy KidsizeStrategy;

	ros::Rate loop_rate(30);

    KidsizeStrategy.initparameterpath();
    
	while (nh.ok()) 
	{   
		KidsizeStrategy.strategymain();
		ros::spinOnce();
		loop_rate.sleep();
	}
	return 0;
}
          
void KidsizeStrategy::strategymain()
{
	if(strategy_info->getStrategyStart())
	{

	}
	else
	{

	}
}

/****************************************************************************************************/
void KidsizeStrategy::initparameterpath()
{
	while(parameter_path == "N")
	{
		parameter_path = tool->getPackagePath("strategy");
	}
	printf("parameter_path is %s\n", parameter_path.c_str());
}

