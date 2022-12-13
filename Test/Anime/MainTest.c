/*********************************************************************
	Rhapsody in C	: 9.0.1 
	Login		: AJOU
	Component	: Test 
	Configuration 	: Anime
	Model Element	: Anime
//!	Generated Date	: Sun, 11, Dec 2022  
	File Path	: Test\Anime\MainTest.c
*********************************************************************/

/*## auto_generated */
#include "MainTest.h"
/*## auto_generated */
#include "Vertex_Calculator.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(RiCOXFInit(argc, argv, 6423, "", 0, 0, RiCTRUE))
        {
            Vertex_Calculator * p_Vertex_Calculator;
            p_Vertex_Calculator = Vertex_Calculator_Create(RiCMainTask());
            Vertex_Calculator_startBehavior(p_Vertex_Calculator);
            /*#[ configuration Test::Anime */
            /*#]*/
            RiCOXFStart(FALSE);
            Vertex_Calculator_Destroy(p_Vertex_Calculator);
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: Test\Anime\MainTest.c
*********************************************************************/
