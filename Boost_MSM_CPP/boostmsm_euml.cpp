//
//  boostmsm_euml.cpp
//  CPP_Learning
//
//  Created by Shankar Vemula on 8/18/20.
//  Copyright © 2020 Shankar Vemula. All rights reserved.
//

/**
uses the eUML front-end to describe the state machine of a lamp. Boost.MetaStateMachine doesn’t have a master header file. Therefore, the required header files have to be included one by one. boost/msm/front/euml/euml.hpp and boost/msm/front/euml/state_grammar.hpp provide access to eUML macros. boost/msm/back/state_machine.hpp is required to link a state machine from the front-end to a state-machine from the back-end. While front-ends provide various possibilities to define state machines, the actual implementation of a state machine is found in the back-end. Since Boost.MetaStateMachine contains only one back-end, you don’t need to select an implementation.

***/
#include <boost/msm/front/euml/euml.hpp>
#include <boost/msm/front/euml/state_grammar.hpp>
#include <boost/msm/back/state_machine.hpp>
#include <iostream>

namespace msm = boost::msm;
using namespace boost::msm::front::euml;

BOOST_MSM_EUML_STATE((),Off);
BOOST_MSM_EUML_STATE((),On);

BOOST_MSM_EUML_EVENT(press);

BOOST_MSM_EUML_TRANSITION_TABLE((
   Off+press == On,
   On+ press == Off),light_transition_table);

BOOST_MSM_EUML_DECLARE_STATE_MACHINE(
(light_transition_table, init_ << Off),
                                     light_state_machine);

int main(){
    msm::back::state_machine<light_state_machine> light;
    std::cout << *light.current_state() << '\n';
    light.process_event(press);
    std::cout << *light.current_state() << '\n';
    light.process_event(press);
    std::cout << *light.current_state() << '\n';
    return 0;
}



