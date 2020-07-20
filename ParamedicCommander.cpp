#include <stdexcept>
#include "ParamedicCommander.hpp"
#include "Board.hpp"
namespace WarGame 
{

     void ParamedicCommander:: heal(const Board &b)
     {

         this->fix();

         
         //make all the paramedic to heal
          for(int i=0;i<b.get_size();i++)
        {
            for(int j=0;j<b.get_size();j++)
            {
             //  Paramedic * Soldier=b[{i,j}];
                Paramedic *paramedic = dynamic_cast<Paramedic *>(b[{i, j}]);
               if(paramedic)
               {
                     //if the paramedic in his  group and the and the are diffrnet
                   if(paramedic->get_num()==this->get_num() && (*paramedic)!=(*this))
                   {
                       paramedic->fix();
                   }
               }

                
            }
        }

        
       
     }
   
}