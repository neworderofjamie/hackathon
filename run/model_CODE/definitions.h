#pragma once
#define EXPORT_VAR extern
#define EXPORT_FUNC
// Standard C++ includes
#include <chrono>
#include <iostream>
#include <random>

// Standard C includes
#include <cmath>
#include <cstdint>
#include <cstring>
#define DT 1.000000f
typedef float scalar;
#define SCALAR_MIN 1.175494351e-38f
#define SCALAR_MAX 3.402823466e+38f

#define TIME_MIN 1.175494351e-38f
#define TIME_MAX 3.402823466e+38f

// ------------------------------------------------------------------------
// bit tool macros
#define B(x,i) ((x) & (0x80000000 >> (i))) //!< Extract the bit at the specified position i from x
#define setB(x,i) x= ((x) | (0x80000000 >> (i))) //!< Set the bit at the specified position i in x to 1
#define delB(x,i) x= ((x) & (~(0x80000000 >> (i)))) //!< Set the bit at the specified position i in x to 0

extern "C" {
// ------------------------------------------------------------------------
// global variables
// ------------------------------------------------------------------------
EXPORT_VAR unsigned long long iT;
EXPORT_VAR float t;

// ------------------------------------------------------------------------
// timers
// ------------------------------------------------------------------------
EXPORT_VAR double neuronUpdateTime;
EXPORT_VAR double initTime;
EXPORT_VAR double presynapticUpdateTime;
EXPORT_VAR double postsynapticUpdateTime;
EXPORT_VAR double synapseDynamicsTime;
EXPORT_VAR double initSparseTime;
// ------------------------------------------------------------------------
// remote neuron groups
// ------------------------------------------------------------------------

// ------------------------------------------------------------------------
// local neuron groups
// ------------------------------------------------------------------------
#define spikeCount_World glbSpkCntWorld[0]
#define spike_World glbSpkWorld
#define glbSpkShiftWorld 0

EXPORT_VAR unsigned int* glbSpkCntWorld;
EXPORT_VAR unsigned int* glbSpkWorld;
EXPORT_VAR scalar* aWorld;
EXPORT_VAR scalar* inWorld;
#define spikeCount_fast_result_down glbSpkCntfast_result_down[0]
#define spike_fast_result_down glbSpkfast_result_down
#define glbSpkShiftfast_result_down 0

EXPORT_VAR unsigned int* glbSpkCntfast_result_down;
EXPORT_VAR unsigned int* glbSpkfast_result_down;
EXPORT_VAR scalar* outfast_result_down;
#define spikeCount_fast_result_left glbSpkCntfast_result_left[0]
#define spike_fast_result_left glbSpkfast_result_left
#define glbSpkShiftfast_result_left 0

EXPORT_VAR unsigned int* glbSpkCntfast_result_left;
EXPORT_VAR unsigned int* glbSpkfast_result_left;
EXPORT_VAR scalar* outfast_result_left;
#define spikeCount_fast_result_right glbSpkCntfast_result_right[0]
#define spike_fast_result_right glbSpkfast_result_right
#define glbSpkShiftfast_result_right 0

EXPORT_VAR unsigned int* glbSpkCntfast_result_right;
EXPORT_VAR unsigned int* glbSpkfast_result_right;
EXPORT_VAR scalar* outfast_result_right;
#define spikeCount_fast_result_up glbSpkCntfast_result_up[0]
#define spike_fast_result_up glbSpkfast_result_up
#define glbSpkShiftfast_result_up 0

EXPORT_VAR unsigned int* glbSpkCntfast_result_up;
EXPORT_VAR unsigned int* glbSpkfast_result_up;
EXPORT_VAR scalar* outfast_result_up;
#define spikeCount_forward glbSpkCntforward[0]
#define spike_forward glbSpkforward
#define glbSpkShiftforward 0

EXPORT_VAR unsigned int* glbSpkCntforward;
EXPORT_VAR unsigned int* glbSpkforward;
EXPORT_VAR scalar* valforward;
#define spikeCount_left glbSpkCntleft[0]
#define spike_left glbSpkleft
#define glbSpkShiftleft 0

EXPORT_VAR unsigned int* glbSpkCntleft;
EXPORT_VAR unsigned int* glbSpkleft;
EXPORT_VAR scalar* outleft;
#define spikeCount_lr_fast_delay glbSpkCntlr_fast_delay[0]
#define spike_lr_fast_delay glbSpklr_fast_delay
#define glbSpkShiftlr_fast_delay 0

EXPORT_VAR unsigned int* glbSpkCntlr_fast_delay;
EXPORT_VAR unsigned int* glbSpklr_fast_delay;
EXPORT_VAR scalar* alr_fast_delay;
#define spikeCount_lr_no_delay glbSpkCntlr_no_delay[0]
#define spike_lr_no_delay glbSpklr_no_delay
#define glbSpkShiftlr_no_delay 0

EXPORT_VAR unsigned int* glbSpkCntlr_no_delay;
EXPORT_VAR unsigned int* glbSpklr_no_delay;
EXPORT_VAR scalar* alr_no_delay;
#define spikeCount_lr_slow_delay glbSpkCntlr_slow_delay[0]
#define spike_lr_slow_delay glbSpklr_slow_delay
#define glbSpkShiftlr_slow_delay 0

EXPORT_VAR unsigned int* glbSpkCntlr_slow_delay;
EXPORT_VAR unsigned int* glbSpklr_slow_delay;
EXPORT_VAR scalar* alr_slow_delay;
#define spikeCount_pr_and_lamina_lr glbSpkCntpr_and_lamina_lr[0]
#define spike_pr_and_lamina_lr glbSpkpr_and_lamina_lr
#define glbSpkShiftpr_and_lamina_lr 0

EXPORT_VAR unsigned int* glbSpkCntpr_and_lamina_lr;
EXPORT_VAR unsigned int* glbSpkpr_and_lamina_lr;
EXPORT_VAR scalar* apr_and_lamina_lr;
EXPORT_VAR scalar* a_negpr_and_lamina_lr;
EXPORT_VAR scalar* adappr_and_lamina_lr;
EXPORT_VAR scalar* adap_negpr_and_lamina_lr;
EXPORT_VAR scalar* outpr_and_lamina_lr;
EXPORT_VAR scalar* prev_inpr_and_lamina_lr;
#define spikeCount_pr_and_lamina_ud glbSpkCntpr_and_lamina_ud[0]
#define spike_pr_and_lamina_ud glbSpkpr_and_lamina_ud
#define glbSpkShiftpr_and_lamina_ud 0

EXPORT_VAR unsigned int* glbSpkCntpr_and_lamina_ud;
EXPORT_VAR unsigned int* glbSpkpr_and_lamina_ud;
EXPORT_VAR scalar* apr_and_lamina_ud;
EXPORT_VAR scalar* a_negpr_and_lamina_ud;
EXPORT_VAR scalar* adappr_and_lamina_ud;
EXPORT_VAR scalar* adap_negpr_and_lamina_ud;
EXPORT_VAR scalar* outpr_and_lamina_ud;
EXPORT_VAR scalar* prev_inpr_and_lamina_ud;
#define spikeCount_right glbSpkCntright[0]
#define spike_right glbSpkright
#define glbSpkShiftright 0

EXPORT_VAR unsigned int* glbSpkCntright;
EXPORT_VAR unsigned int* glbSpkright;
EXPORT_VAR scalar* outright;
#define spikeCount_slow_result_down glbSpkCntslow_result_down[0]
#define spike_slow_result_down glbSpkslow_result_down
#define glbSpkShiftslow_result_down 0

EXPORT_VAR unsigned int* glbSpkCntslow_result_down;
EXPORT_VAR unsigned int* glbSpkslow_result_down;
EXPORT_VAR scalar* outslow_result_down;
#define spikeCount_slow_result_left glbSpkCntslow_result_left[0]
#define spike_slow_result_left glbSpkslow_result_left
#define glbSpkShiftslow_result_left 0

EXPORT_VAR unsigned int* glbSpkCntslow_result_left;
EXPORT_VAR unsigned int* glbSpkslow_result_left;
EXPORT_VAR scalar* outslow_result_left;
#define spikeCount_slow_result_right glbSpkCntslow_result_right[0]
#define spike_slow_result_right glbSpkslow_result_right
#define glbSpkShiftslow_result_right 0

EXPORT_VAR unsigned int* glbSpkCntslow_result_right;
EXPORT_VAR unsigned int* glbSpkslow_result_right;
EXPORT_VAR scalar* outslow_result_right;
#define spikeCount_slow_result_up glbSpkCntslow_result_up[0]
#define spike_slow_result_up glbSpkslow_result_up
#define glbSpkShiftslow_result_up 0

EXPORT_VAR unsigned int* glbSpkCntslow_result_up;
EXPORT_VAR unsigned int* glbSpkslow_result_up;
EXPORT_VAR scalar* outslow_result_up;
#define spikeCount_sum_h glbSpkCntsum_h[0]
#define spike_sum_h glbSpksum_h
#define glbSpkShiftsum_h 0

EXPORT_VAR unsigned int* glbSpkCntsum_h;
EXPORT_VAR unsigned int* glbSpksum_h;
EXPORT_VAR scalar* asum_h;
EXPORT_VAR scalar* a_revsum_h;
EXPORT_VAR scalar* a_slowsum_h;
EXPORT_VAR scalar* a_slow_revsum_h;
EXPORT_VAR scalar* diffsum_h;
EXPORT_VAR scalar* rhd_progsum_h;
EXPORT_VAR scalar* with_rhd_prog_smoothsum_h;
EXPORT_VAR scalar* with_rhd_reg_smoothsum_h;
#define spikeCount_sum_v glbSpkCntsum_v[0]
#define spike_sum_v glbSpksum_v
#define glbSpkShiftsum_v 0

EXPORT_VAR unsigned int* glbSpkCntsum_v;
EXPORT_VAR unsigned int* glbSpksum_v;
EXPORT_VAR scalar* asum_v;
EXPORT_VAR scalar* a_revsum_v;
EXPORT_VAR scalar* a_slowsum_v;
EXPORT_VAR scalar* a_slow_revsum_v;
EXPORT_VAR scalar* diffsum_v;
EXPORT_VAR scalar* rhd_progsum_v;
EXPORT_VAR scalar* with_rhd_prog_smoothsum_v;
EXPORT_VAR scalar* with_rhd_reg_smoothsum_v;
#define spikeCount_ud_fast_delay glbSpkCntud_fast_delay[0]
#define spike_ud_fast_delay glbSpkud_fast_delay
#define glbSpkShiftud_fast_delay 0

EXPORT_VAR unsigned int* glbSpkCntud_fast_delay;
EXPORT_VAR unsigned int* glbSpkud_fast_delay;
EXPORT_VAR scalar* aud_fast_delay;
#define spikeCount_ud_no_delay glbSpkCntud_no_delay[0]
#define spike_ud_no_delay glbSpkud_no_delay
#define glbSpkShiftud_no_delay 0

EXPORT_VAR unsigned int* glbSpkCntud_no_delay;
EXPORT_VAR unsigned int* glbSpkud_no_delay;
EXPORT_VAR scalar* aud_no_delay;
#define spikeCount_ud_slow_delay glbSpkCntud_slow_delay[0]
#define spike_ud_slow_delay glbSpkud_slow_delay
#define glbSpkShiftud_slow_delay 0

EXPORT_VAR unsigned int* glbSpkCntud_slow_delay;
EXPORT_VAR unsigned int* glbSpkud_slow_delay;
EXPORT_VAR scalar* aud_slow_delay;

// ------------------------------------------------------------------------
// postsynaptic variables
// ------------------------------------------------------------------------
EXPORT_VAR float* inSynud_no_delay_a_fast_result_down_in_2;
EXPORT_VAR float* inSynud_fast_delay_a_fast_result_down_in_1;
EXPORT_VAR float* inSynlr_no_delay_a_fast_result_left_in_2;
EXPORT_VAR float* inSynlr_fast_delay_a_fast_result_left_in_1;
EXPORT_VAR float* inSynlr_no_delay_a_fast_result_right_in_2;
EXPORT_VAR float* inSynlr_fast_delay_a_fast_result_right_in_1;
EXPORT_VAR float* inSynud_no_delay_a_fast_result_up_in_2;
EXPORT_VAR float* inSynud_fast_delay_a_fast_result_up_in_1;
EXPORT_VAR float* inSynsum_h_diff_left_in;
EXPORT_VAR float* inSynpr_and_lamina_lr_out_lr_fast_delay_in;
EXPORT_VAR float* inSynpr_and_lamina_lr_out_lr_no_delay_in;
EXPORT_VAR float* inSynpr_and_lamina_lr_out_lr_slow_delay_in;
EXPORT_VAR float* inSynWorld_to_pr_and_lamina_lr_Synapse_0_weight_update;
EXPORT_VAR float* inSynWorld_to_pr_and_lamina_ud_Synapse_0_weight_update;
EXPORT_VAR float* inSynsum_h_diff_right_in;
EXPORT_VAR float* inSynud_slow_delay_a_slow_result_down_in_2;
EXPORT_VAR float* inSynud_no_delay_a_slow_result_down_in_1;
EXPORT_VAR float* inSynlr_no_delay_a_slow_result_left_in_1;
EXPORT_VAR float* inSynlr_slow_delay_a_slow_result_left_in_2;
EXPORT_VAR float* inSynlr_no_delay_a_slow_result_right_in_1;
EXPORT_VAR float* inSynlr_slow_delay_a_slow_result_right_in_2;
EXPORT_VAR float* inSynud_no_delay_a_slow_result_up_in_1;
EXPORT_VAR float* inSynud_slow_delay_a_slow_result_up_in_2;
EXPORT_VAR float* inSynslow_result_right_out_sum_h_in_slow;
EXPORT_VAR float* inSynslow_result_left_out_sum_h_in_slow_rev;
EXPORT_VAR float* inSynfast_result_right_out_sum_h_in;
EXPORT_VAR float* inSynfast_result_left_out_sum_h_in_rev;
EXPORT_VAR float* inSynslow_result_up_out_sum_v_in_slow_rev;
EXPORT_VAR float* inSynslow_result_down_out_sum_v_in_slow;
EXPORT_VAR float* inSynfast_result_up_out_sum_v_in_rev;
EXPORT_VAR float* inSynfast_result_down_out_sum_v_in;
EXPORT_VAR float* inSynpr_and_lamina_ud_out_ud_fast_delay_in;
EXPORT_VAR float* inSynpr_and_lamina_ud_out_ud_no_delay_in;
EXPORT_VAR float* inSynpr_and_lamina_ud_out_ud_slow_delay_in;

// ------------------------------------------------------------------------
// synapse connectivity
// ------------------------------------------------------------------------
EXPORT_VAR const unsigned int maxRowLengthWorld_to_pr_and_lamina_lr_Synapse_0_weight_update;
EXPORT_VAR unsigned int* rowLengthWorld_to_pr_and_lamina_lr_Synapse_0_weight_update;
EXPORT_VAR unsigned int* indWorld_to_pr_and_lamina_lr_Synapse_0_weight_update;
EXPORT_VAR const unsigned int maxRowLengthWorld_to_pr_and_lamina_ud_Synapse_0_weight_update;
EXPORT_VAR unsigned int* rowLengthWorld_to_pr_and_lamina_ud_Synapse_0_weight_update;
EXPORT_VAR unsigned int* indWorld_to_pr_and_lamina_ud_Synapse_0_weight_update;
EXPORT_VAR const unsigned int maxRowLengthfast_result_left_out_sum_h_in_rev;
EXPORT_VAR unsigned int* rowLengthfast_result_left_out_sum_h_in_rev;
EXPORT_VAR unsigned int* indfast_result_left_out_sum_h_in_rev;
EXPORT_VAR const unsigned int maxRowLengthfast_result_right_out_sum_h_in;
EXPORT_VAR unsigned int* rowLengthfast_result_right_out_sum_h_in;
EXPORT_VAR unsigned int* indfast_result_right_out_sum_h_in;
EXPORT_VAR const unsigned int maxRowLengthlr_fast_delay_a_fast_result_left_in_1;
EXPORT_VAR unsigned int* rowLengthlr_fast_delay_a_fast_result_left_in_1;
EXPORT_VAR unsigned int* indlr_fast_delay_a_fast_result_left_in_1;
EXPORT_VAR const unsigned int maxRowLengthlr_fast_delay_a_fast_result_right_in_1;
EXPORT_VAR unsigned int* rowLengthlr_fast_delay_a_fast_result_right_in_1;
EXPORT_VAR unsigned int* indlr_fast_delay_a_fast_result_right_in_1;
EXPORT_VAR const unsigned int maxRowLengthlr_no_delay_a_fast_result_left_in_2;
EXPORT_VAR unsigned int* rowLengthlr_no_delay_a_fast_result_left_in_2;
EXPORT_VAR unsigned int* indlr_no_delay_a_fast_result_left_in_2;
EXPORT_VAR const unsigned int maxRowLengthlr_no_delay_a_fast_result_right_in_2;
EXPORT_VAR unsigned int* rowLengthlr_no_delay_a_fast_result_right_in_2;
EXPORT_VAR unsigned int* indlr_no_delay_a_fast_result_right_in_2;
EXPORT_VAR const unsigned int maxRowLengthlr_no_delay_a_slow_result_left_in_1;
EXPORT_VAR unsigned int* rowLengthlr_no_delay_a_slow_result_left_in_1;
EXPORT_VAR unsigned int* indlr_no_delay_a_slow_result_left_in_1;
EXPORT_VAR const unsigned int maxRowLengthlr_no_delay_a_slow_result_right_in_1;
EXPORT_VAR unsigned int* rowLengthlr_no_delay_a_slow_result_right_in_1;
EXPORT_VAR unsigned int* indlr_no_delay_a_slow_result_right_in_1;
EXPORT_VAR const unsigned int maxRowLengthlr_slow_delay_a_slow_result_left_in_2;
EXPORT_VAR unsigned int* rowLengthlr_slow_delay_a_slow_result_left_in_2;
EXPORT_VAR unsigned int* indlr_slow_delay_a_slow_result_left_in_2;
EXPORT_VAR const unsigned int maxRowLengthlr_slow_delay_a_slow_result_right_in_2;
EXPORT_VAR unsigned int* rowLengthlr_slow_delay_a_slow_result_right_in_2;
EXPORT_VAR unsigned int* indlr_slow_delay_a_slow_result_right_in_2;
EXPORT_VAR const unsigned int maxRowLengthpr_and_lamina_lr_out_lr_fast_delay_in;
EXPORT_VAR unsigned int* rowLengthpr_and_lamina_lr_out_lr_fast_delay_in;
EXPORT_VAR unsigned int* indpr_and_lamina_lr_out_lr_fast_delay_in;
EXPORT_VAR const unsigned int maxRowLengthpr_and_lamina_lr_out_lr_no_delay_in;
EXPORT_VAR unsigned int* rowLengthpr_and_lamina_lr_out_lr_no_delay_in;
EXPORT_VAR unsigned int* indpr_and_lamina_lr_out_lr_no_delay_in;
EXPORT_VAR const unsigned int maxRowLengthpr_and_lamina_lr_out_lr_slow_delay_in;
EXPORT_VAR unsigned int* rowLengthpr_and_lamina_lr_out_lr_slow_delay_in;
EXPORT_VAR unsigned int* indpr_and_lamina_lr_out_lr_slow_delay_in;
EXPORT_VAR const unsigned int maxRowLengthpr_and_lamina_ud_out_ud_fast_delay_in;
EXPORT_VAR unsigned int* rowLengthpr_and_lamina_ud_out_ud_fast_delay_in;
EXPORT_VAR unsigned int* indpr_and_lamina_ud_out_ud_fast_delay_in;
EXPORT_VAR const unsigned int maxRowLengthpr_and_lamina_ud_out_ud_no_delay_in;
EXPORT_VAR unsigned int* rowLengthpr_and_lamina_ud_out_ud_no_delay_in;
EXPORT_VAR unsigned int* indpr_and_lamina_ud_out_ud_no_delay_in;
EXPORT_VAR const unsigned int maxRowLengthpr_and_lamina_ud_out_ud_slow_delay_in;
EXPORT_VAR unsigned int* rowLengthpr_and_lamina_ud_out_ud_slow_delay_in;
EXPORT_VAR unsigned int* indpr_and_lamina_ud_out_ud_slow_delay_in;
EXPORT_VAR const unsigned int maxRowLengthslow_result_left_out_sum_h_in_slow_rev;
EXPORT_VAR unsigned int* rowLengthslow_result_left_out_sum_h_in_slow_rev;
EXPORT_VAR unsigned int* indslow_result_left_out_sum_h_in_slow_rev;
EXPORT_VAR const unsigned int maxRowLengthslow_result_right_out_sum_h_in_slow;
EXPORT_VAR unsigned int* rowLengthslow_result_right_out_sum_h_in_slow;
EXPORT_VAR unsigned int* indslow_result_right_out_sum_h_in_slow;
EXPORT_VAR const unsigned int maxRowLengthsum_h_diff_left_in;
EXPORT_VAR unsigned int* rowLengthsum_h_diff_left_in;
EXPORT_VAR unsigned int* indsum_h_diff_left_in;
EXPORT_VAR const unsigned int maxRowLengthsum_h_diff_right_in;
EXPORT_VAR unsigned int* rowLengthsum_h_diff_right_in;
EXPORT_VAR unsigned int* indsum_h_diff_right_in;
EXPORT_VAR const unsigned int maxRowLengthud_fast_delay_a_fast_result_down_in_1;
EXPORT_VAR unsigned int* rowLengthud_fast_delay_a_fast_result_down_in_1;
EXPORT_VAR unsigned int* indud_fast_delay_a_fast_result_down_in_1;
EXPORT_VAR const unsigned int maxRowLengthud_fast_delay_a_fast_result_up_in_1;
EXPORT_VAR unsigned int* rowLengthud_fast_delay_a_fast_result_up_in_1;
EXPORT_VAR unsigned int* indud_fast_delay_a_fast_result_up_in_1;
EXPORT_VAR const unsigned int maxRowLengthud_no_delay_a_fast_result_down_in_2;
EXPORT_VAR unsigned int* rowLengthud_no_delay_a_fast_result_down_in_2;
EXPORT_VAR unsigned int* indud_no_delay_a_fast_result_down_in_2;
EXPORT_VAR const unsigned int maxRowLengthud_no_delay_a_fast_result_up_in_2;
EXPORT_VAR unsigned int* rowLengthud_no_delay_a_fast_result_up_in_2;
EXPORT_VAR unsigned int* indud_no_delay_a_fast_result_up_in_2;
EXPORT_VAR const unsigned int maxRowLengthud_no_delay_a_slow_result_down_in_1;
EXPORT_VAR unsigned int* rowLengthud_no_delay_a_slow_result_down_in_1;
EXPORT_VAR unsigned int* indud_no_delay_a_slow_result_down_in_1;
EXPORT_VAR const unsigned int maxRowLengthud_no_delay_a_slow_result_up_in_1;
EXPORT_VAR unsigned int* rowLengthud_no_delay_a_slow_result_up_in_1;
EXPORT_VAR unsigned int* indud_no_delay_a_slow_result_up_in_1;
EXPORT_VAR const unsigned int maxRowLengthud_slow_delay_a_slow_result_down_in_2;
EXPORT_VAR unsigned int* rowLengthud_slow_delay_a_slow_result_down_in_2;
EXPORT_VAR unsigned int* indud_slow_delay_a_slow_result_down_in_2;
EXPORT_VAR const unsigned int maxRowLengthud_slow_delay_a_slow_result_up_in_2;
EXPORT_VAR unsigned int* rowLengthud_slow_delay_a_slow_result_up_in_2;
EXPORT_VAR unsigned int* indud_slow_delay_a_slow_result_up_in_2;

// ------------------------------------------------------------------------
// synapse variables
// ------------------------------------------------------------------------
EXPORT_VAR scalar* wWorld_to_pr_and_lamina_lr_Synapse_0_weight_update;
EXPORT_VAR scalar* wWorld_to_pr_and_lamina_ud_Synapse_0_weight_update;

EXPORT_FUNC void pushWorldSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullWorldSpikesFromDevice();
EXPORT_FUNC void pushWorldCurrentSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullWorldCurrentSpikesFromDevice();
EXPORT_FUNC void pushaWorldToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullaWorldFromDevice();
EXPORT_FUNC void pushinWorldToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinWorldFromDevice();
EXPORT_FUNC void pushWorldStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullWorldStateFromDevice();
EXPORT_FUNC void pushfast_result_downSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullfast_result_downSpikesFromDevice();
EXPORT_FUNC void pushfast_result_downCurrentSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullfast_result_downCurrentSpikesFromDevice();
EXPORT_FUNC void pushoutfast_result_downToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulloutfast_result_downFromDevice();
EXPORT_FUNC void pushfast_result_downStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullfast_result_downStateFromDevice();
EXPORT_FUNC void pushfast_result_leftSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullfast_result_leftSpikesFromDevice();
EXPORT_FUNC void pushfast_result_leftCurrentSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullfast_result_leftCurrentSpikesFromDevice();
EXPORT_FUNC void pushoutfast_result_leftToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulloutfast_result_leftFromDevice();
EXPORT_FUNC void pushfast_result_leftStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullfast_result_leftStateFromDevice();
EXPORT_FUNC void pushfast_result_rightSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullfast_result_rightSpikesFromDevice();
EXPORT_FUNC void pushfast_result_rightCurrentSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullfast_result_rightCurrentSpikesFromDevice();
EXPORT_FUNC void pushoutfast_result_rightToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulloutfast_result_rightFromDevice();
EXPORT_FUNC void pushfast_result_rightStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullfast_result_rightStateFromDevice();
EXPORT_FUNC void pushfast_result_upSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullfast_result_upSpikesFromDevice();
EXPORT_FUNC void pushfast_result_upCurrentSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullfast_result_upCurrentSpikesFromDevice();
EXPORT_FUNC void pushoutfast_result_upToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulloutfast_result_upFromDevice();
EXPORT_FUNC void pushfast_result_upStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullfast_result_upStateFromDevice();
EXPORT_FUNC void pushforwardSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullforwardSpikesFromDevice();
EXPORT_FUNC void pushforwardCurrentSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullforwardCurrentSpikesFromDevice();
EXPORT_FUNC void pushvalforwardToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullvalforwardFromDevice();
EXPORT_FUNC void pushforwardStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullforwardStateFromDevice();
EXPORT_FUNC void pushleftSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullleftSpikesFromDevice();
EXPORT_FUNC void pushleftCurrentSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullleftCurrentSpikesFromDevice();
EXPORT_FUNC void pushoutleftToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulloutleftFromDevice();
EXPORT_FUNC void pushleftStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullleftStateFromDevice();
EXPORT_FUNC void pushlr_fast_delaySpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulllr_fast_delaySpikesFromDevice();
EXPORT_FUNC void pushlr_fast_delayCurrentSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulllr_fast_delayCurrentSpikesFromDevice();
EXPORT_FUNC void pushalr_fast_delayToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullalr_fast_delayFromDevice();
EXPORT_FUNC void pushlr_fast_delayStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulllr_fast_delayStateFromDevice();
EXPORT_FUNC void pushlr_no_delaySpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulllr_no_delaySpikesFromDevice();
EXPORT_FUNC void pushlr_no_delayCurrentSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulllr_no_delayCurrentSpikesFromDevice();
EXPORT_FUNC void pushalr_no_delayToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullalr_no_delayFromDevice();
EXPORT_FUNC void pushlr_no_delayStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulllr_no_delayStateFromDevice();
EXPORT_FUNC void pushlr_slow_delaySpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulllr_slow_delaySpikesFromDevice();
EXPORT_FUNC void pushlr_slow_delayCurrentSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulllr_slow_delayCurrentSpikesFromDevice();
EXPORT_FUNC void pushalr_slow_delayToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullalr_slow_delayFromDevice();
EXPORT_FUNC void pushlr_slow_delayStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulllr_slow_delayStateFromDevice();
EXPORT_FUNC void pushpr_and_lamina_lrSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullpr_and_lamina_lrSpikesFromDevice();
EXPORT_FUNC void pushpr_and_lamina_lrCurrentSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullpr_and_lamina_lrCurrentSpikesFromDevice();
EXPORT_FUNC void pushapr_and_lamina_lrToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullapr_and_lamina_lrFromDevice();
EXPORT_FUNC void pusha_negpr_and_lamina_lrToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulla_negpr_and_lamina_lrFromDevice();
EXPORT_FUNC void pushadappr_and_lamina_lrToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulladappr_and_lamina_lrFromDevice();
EXPORT_FUNC void pushadap_negpr_and_lamina_lrToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulladap_negpr_and_lamina_lrFromDevice();
EXPORT_FUNC void pushoutpr_and_lamina_lrToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulloutpr_and_lamina_lrFromDevice();
EXPORT_FUNC void pushprev_inpr_and_lamina_lrToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullprev_inpr_and_lamina_lrFromDevice();
EXPORT_FUNC void pushpr_and_lamina_lrStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullpr_and_lamina_lrStateFromDevice();
EXPORT_FUNC void pushpr_and_lamina_udSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullpr_and_lamina_udSpikesFromDevice();
EXPORT_FUNC void pushpr_and_lamina_udCurrentSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullpr_and_lamina_udCurrentSpikesFromDevice();
EXPORT_FUNC void pushapr_and_lamina_udToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullapr_and_lamina_udFromDevice();
EXPORT_FUNC void pusha_negpr_and_lamina_udToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulla_negpr_and_lamina_udFromDevice();
EXPORT_FUNC void pushadappr_and_lamina_udToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulladappr_and_lamina_udFromDevice();
EXPORT_FUNC void pushadap_negpr_and_lamina_udToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulladap_negpr_and_lamina_udFromDevice();
EXPORT_FUNC void pushoutpr_and_lamina_udToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulloutpr_and_lamina_udFromDevice();
EXPORT_FUNC void pushprev_inpr_and_lamina_udToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullprev_inpr_and_lamina_udFromDevice();
EXPORT_FUNC void pushpr_and_lamina_udStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullpr_and_lamina_udStateFromDevice();
EXPORT_FUNC void pushrightSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullrightSpikesFromDevice();
EXPORT_FUNC void pushrightCurrentSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullrightCurrentSpikesFromDevice();
EXPORT_FUNC void pushoutrightToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulloutrightFromDevice();
EXPORT_FUNC void pushrightStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullrightStateFromDevice();
EXPORT_FUNC void pushslow_result_downSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullslow_result_downSpikesFromDevice();
EXPORT_FUNC void pushslow_result_downCurrentSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullslow_result_downCurrentSpikesFromDevice();
EXPORT_FUNC void pushoutslow_result_downToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulloutslow_result_downFromDevice();
EXPORT_FUNC void pushslow_result_downStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullslow_result_downStateFromDevice();
EXPORT_FUNC void pushslow_result_leftSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullslow_result_leftSpikesFromDevice();
EXPORT_FUNC void pushslow_result_leftCurrentSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullslow_result_leftCurrentSpikesFromDevice();
EXPORT_FUNC void pushoutslow_result_leftToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulloutslow_result_leftFromDevice();
EXPORT_FUNC void pushslow_result_leftStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullslow_result_leftStateFromDevice();
EXPORT_FUNC void pushslow_result_rightSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullslow_result_rightSpikesFromDevice();
EXPORT_FUNC void pushslow_result_rightCurrentSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullslow_result_rightCurrentSpikesFromDevice();
EXPORT_FUNC void pushoutslow_result_rightToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulloutslow_result_rightFromDevice();
EXPORT_FUNC void pushslow_result_rightStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullslow_result_rightStateFromDevice();
EXPORT_FUNC void pushslow_result_upSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullslow_result_upSpikesFromDevice();
EXPORT_FUNC void pushslow_result_upCurrentSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullslow_result_upCurrentSpikesFromDevice();
EXPORT_FUNC void pushoutslow_result_upToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulloutslow_result_upFromDevice();
EXPORT_FUNC void pushslow_result_upStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullslow_result_upStateFromDevice();
EXPORT_FUNC void pushsum_hSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullsum_hSpikesFromDevice();
EXPORT_FUNC void pushsum_hCurrentSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullsum_hCurrentSpikesFromDevice();
EXPORT_FUNC void pushasum_hToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullasum_hFromDevice();
EXPORT_FUNC void pusha_revsum_hToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulla_revsum_hFromDevice();
EXPORT_FUNC void pusha_slowsum_hToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulla_slowsum_hFromDevice();
EXPORT_FUNC void pusha_slow_revsum_hToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulla_slow_revsum_hFromDevice();
EXPORT_FUNC void pushdiffsum_hToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulldiffsum_hFromDevice();
EXPORT_FUNC void pushrhd_progsum_hToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullrhd_progsum_hFromDevice();
EXPORT_FUNC void pushwith_rhd_prog_smoothsum_hToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullwith_rhd_prog_smoothsum_hFromDevice();
EXPORT_FUNC void pushwith_rhd_reg_smoothsum_hToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullwith_rhd_reg_smoothsum_hFromDevice();
EXPORT_FUNC void pushsum_hStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullsum_hStateFromDevice();
EXPORT_FUNC void pushsum_vSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullsum_vSpikesFromDevice();
EXPORT_FUNC void pushsum_vCurrentSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullsum_vCurrentSpikesFromDevice();
EXPORT_FUNC void pushasum_vToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullasum_vFromDevice();
EXPORT_FUNC void pusha_revsum_vToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulla_revsum_vFromDevice();
EXPORT_FUNC void pusha_slowsum_vToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulla_slowsum_vFromDevice();
EXPORT_FUNC void pusha_slow_revsum_vToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulla_slow_revsum_vFromDevice();
EXPORT_FUNC void pushdiffsum_vToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulldiffsum_vFromDevice();
EXPORT_FUNC void pushrhd_progsum_vToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullrhd_progsum_vFromDevice();
EXPORT_FUNC void pushwith_rhd_prog_smoothsum_vToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullwith_rhd_prog_smoothsum_vFromDevice();
EXPORT_FUNC void pushwith_rhd_reg_smoothsum_vToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullwith_rhd_reg_smoothsum_vFromDevice();
EXPORT_FUNC void pushsum_vStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullsum_vStateFromDevice();
EXPORT_FUNC void pushud_fast_delaySpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullud_fast_delaySpikesFromDevice();
EXPORT_FUNC void pushud_fast_delayCurrentSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullud_fast_delayCurrentSpikesFromDevice();
EXPORT_FUNC void pushaud_fast_delayToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullaud_fast_delayFromDevice();
EXPORT_FUNC void pushud_fast_delayStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullud_fast_delayStateFromDevice();
EXPORT_FUNC void pushud_no_delaySpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullud_no_delaySpikesFromDevice();
EXPORT_FUNC void pushud_no_delayCurrentSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullud_no_delayCurrentSpikesFromDevice();
EXPORT_FUNC void pushaud_no_delayToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullaud_no_delayFromDevice();
EXPORT_FUNC void pushud_no_delayStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullud_no_delayStateFromDevice();
EXPORT_FUNC void pushud_slow_delaySpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullud_slow_delaySpikesFromDevice();
EXPORT_FUNC void pushud_slow_delayCurrentSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullud_slow_delayCurrentSpikesFromDevice();
EXPORT_FUNC void pushaud_slow_delayToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullaud_slow_delayFromDevice();
EXPORT_FUNC void pushud_slow_delayStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullud_slow_delayStateFromDevice();
EXPORT_FUNC void pushWorld_to_pr_and_lamina_lr_Synapse_0_weight_updateConnectivityToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullWorld_to_pr_and_lamina_lr_Synapse_0_weight_updateConnectivityFromDevice();
EXPORT_FUNC void pushWorld_to_pr_and_lamina_ud_Synapse_0_weight_updateConnectivityToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullWorld_to_pr_and_lamina_ud_Synapse_0_weight_updateConnectivityFromDevice();
EXPORT_FUNC void pushfast_result_left_out_sum_h_in_revConnectivityToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullfast_result_left_out_sum_h_in_revConnectivityFromDevice();
EXPORT_FUNC void pushfast_result_right_out_sum_h_inConnectivityToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullfast_result_right_out_sum_h_inConnectivityFromDevice();
EXPORT_FUNC void pushlr_fast_delay_a_fast_result_left_in_1ConnectivityToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulllr_fast_delay_a_fast_result_left_in_1ConnectivityFromDevice();
EXPORT_FUNC void pushlr_fast_delay_a_fast_result_right_in_1ConnectivityToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulllr_fast_delay_a_fast_result_right_in_1ConnectivityFromDevice();
EXPORT_FUNC void pushlr_no_delay_a_fast_result_left_in_2ConnectivityToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulllr_no_delay_a_fast_result_left_in_2ConnectivityFromDevice();
EXPORT_FUNC void pushlr_no_delay_a_fast_result_right_in_2ConnectivityToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulllr_no_delay_a_fast_result_right_in_2ConnectivityFromDevice();
EXPORT_FUNC void pushlr_no_delay_a_slow_result_left_in_1ConnectivityToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulllr_no_delay_a_slow_result_left_in_1ConnectivityFromDevice();
EXPORT_FUNC void pushlr_no_delay_a_slow_result_right_in_1ConnectivityToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulllr_no_delay_a_slow_result_right_in_1ConnectivityFromDevice();
EXPORT_FUNC void pushlr_slow_delay_a_slow_result_left_in_2ConnectivityToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulllr_slow_delay_a_slow_result_left_in_2ConnectivityFromDevice();
EXPORT_FUNC void pushlr_slow_delay_a_slow_result_right_in_2ConnectivityToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulllr_slow_delay_a_slow_result_right_in_2ConnectivityFromDevice();
EXPORT_FUNC void pushpr_and_lamina_lr_out_lr_fast_delay_inConnectivityToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullpr_and_lamina_lr_out_lr_fast_delay_inConnectivityFromDevice();
EXPORT_FUNC void pushpr_and_lamina_lr_out_lr_no_delay_inConnectivityToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullpr_and_lamina_lr_out_lr_no_delay_inConnectivityFromDevice();
EXPORT_FUNC void pushpr_and_lamina_lr_out_lr_slow_delay_inConnectivityToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullpr_and_lamina_lr_out_lr_slow_delay_inConnectivityFromDevice();
EXPORT_FUNC void pushpr_and_lamina_ud_out_ud_fast_delay_inConnectivityToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullpr_and_lamina_ud_out_ud_fast_delay_inConnectivityFromDevice();
EXPORT_FUNC void pushpr_and_lamina_ud_out_ud_no_delay_inConnectivityToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullpr_and_lamina_ud_out_ud_no_delay_inConnectivityFromDevice();
EXPORT_FUNC void pushpr_and_lamina_ud_out_ud_slow_delay_inConnectivityToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullpr_and_lamina_ud_out_ud_slow_delay_inConnectivityFromDevice();
EXPORT_FUNC void pushslow_result_left_out_sum_h_in_slow_revConnectivityToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullslow_result_left_out_sum_h_in_slow_revConnectivityFromDevice();
EXPORT_FUNC void pushslow_result_right_out_sum_h_in_slowConnectivityToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullslow_result_right_out_sum_h_in_slowConnectivityFromDevice();
EXPORT_FUNC void pushsum_h_diff_left_inConnectivityToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullsum_h_diff_left_inConnectivityFromDevice();
EXPORT_FUNC void pushsum_h_diff_right_inConnectivityToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullsum_h_diff_right_inConnectivityFromDevice();
EXPORT_FUNC void pushud_fast_delay_a_fast_result_down_in_1ConnectivityToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullud_fast_delay_a_fast_result_down_in_1ConnectivityFromDevice();
EXPORT_FUNC void pushud_fast_delay_a_fast_result_up_in_1ConnectivityToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullud_fast_delay_a_fast_result_up_in_1ConnectivityFromDevice();
EXPORT_FUNC void pushud_no_delay_a_fast_result_down_in_2ConnectivityToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullud_no_delay_a_fast_result_down_in_2ConnectivityFromDevice();
EXPORT_FUNC void pushud_no_delay_a_fast_result_up_in_2ConnectivityToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullud_no_delay_a_fast_result_up_in_2ConnectivityFromDevice();
EXPORT_FUNC void pushud_no_delay_a_slow_result_down_in_1ConnectivityToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullud_no_delay_a_slow_result_down_in_1ConnectivityFromDevice();
EXPORT_FUNC void pushud_no_delay_a_slow_result_up_in_1ConnectivityToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullud_no_delay_a_slow_result_up_in_1ConnectivityFromDevice();
EXPORT_FUNC void pushud_slow_delay_a_slow_result_down_in_2ConnectivityToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullud_slow_delay_a_slow_result_down_in_2ConnectivityFromDevice();
EXPORT_FUNC void pushud_slow_delay_a_slow_result_up_in_2ConnectivityToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullud_slow_delay_a_slow_result_up_in_2ConnectivityFromDevice();
EXPORT_FUNC void pushwWorld_to_pr_and_lamina_lr_Synapse_0_weight_updateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullwWorld_to_pr_and_lamina_lr_Synapse_0_weight_updateFromDevice();
EXPORT_FUNC void pushinSynWorld_to_pr_and_lamina_lr_Synapse_0_weight_updateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynWorld_to_pr_and_lamina_lr_Synapse_0_weight_updateFromDevice();
EXPORT_FUNC void pushWorld_to_pr_and_lamina_lr_Synapse_0_weight_updateStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullWorld_to_pr_and_lamina_lr_Synapse_0_weight_updateStateFromDevice();
EXPORT_FUNC void pushwWorld_to_pr_and_lamina_ud_Synapse_0_weight_updateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullwWorld_to_pr_and_lamina_ud_Synapse_0_weight_updateFromDevice();
EXPORT_FUNC void pushinSynWorld_to_pr_and_lamina_ud_Synapse_0_weight_updateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynWorld_to_pr_and_lamina_ud_Synapse_0_weight_updateFromDevice();
EXPORT_FUNC void pushWorld_to_pr_and_lamina_ud_Synapse_0_weight_updateStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullWorld_to_pr_and_lamina_ud_Synapse_0_weight_updateStateFromDevice();
EXPORT_FUNC void pushinSynfast_result_down_out_sum_v_inToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynfast_result_down_out_sum_v_inFromDevice();
EXPORT_FUNC void pushfast_result_down_out_sum_v_inStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullfast_result_down_out_sum_v_inStateFromDevice();
EXPORT_FUNC void pushinSynfast_result_left_out_sum_h_in_revToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynfast_result_left_out_sum_h_in_revFromDevice();
EXPORT_FUNC void pushfast_result_left_out_sum_h_in_revStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullfast_result_left_out_sum_h_in_revStateFromDevice();
EXPORT_FUNC void pushinSynfast_result_right_out_sum_h_inToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynfast_result_right_out_sum_h_inFromDevice();
EXPORT_FUNC void pushfast_result_right_out_sum_h_inStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullfast_result_right_out_sum_h_inStateFromDevice();
EXPORT_FUNC void pushinSynfast_result_up_out_sum_v_in_revToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynfast_result_up_out_sum_v_in_revFromDevice();
EXPORT_FUNC void pushfast_result_up_out_sum_v_in_revStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullfast_result_up_out_sum_v_in_revStateFromDevice();
EXPORT_FUNC void pushinSynlr_fast_delay_a_fast_result_left_in_1ToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynlr_fast_delay_a_fast_result_left_in_1FromDevice();
EXPORT_FUNC void pushlr_fast_delay_a_fast_result_left_in_1StateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulllr_fast_delay_a_fast_result_left_in_1StateFromDevice();
EXPORT_FUNC void pushinSynlr_fast_delay_a_fast_result_right_in_1ToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynlr_fast_delay_a_fast_result_right_in_1FromDevice();
EXPORT_FUNC void pushlr_fast_delay_a_fast_result_right_in_1StateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulllr_fast_delay_a_fast_result_right_in_1StateFromDevice();
EXPORT_FUNC void pushinSynlr_no_delay_a_fast_result_left_in_2ToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynlr_no_delay_a_fast_result_left_in_2FromDevice();
EXPORT_FUNC void pushlr_no_delay_a_fast_result_left_in_2StateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulllr_no_delay_a_fast_result_left_in_2StateFromDevice();
EXPORT_FUNC void pushinSynlr_no_delay_a_fast_result_right_in_2ToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynlr_no_delay_a_fast_result_right_in_2FromDevice();
EXPORT_FUNC void pushlr_no_delay_a_fast_result_right_in_2StateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulllr_no_delay_a_fast_result_right_in_2StateFromDevice();
EXPORT_FUNC void pushinSynlr_no_delay_a_slow_result_left_in_1ToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynlr_no_delay_a_slow_result_left_in_1FromDevice();
EXPORT_FUNC void pushlr_no_delay_a_slow_result_left_in_1StateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulllr_no_delay_a_slow_result_left_in_1StateFromDevice();
EXPORT_FUNC void pushinSynlr_no_delay_a_slow_result_right_in_1ToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynlr_no_delay_a_slow_result_right_in_1FromDevice();
EXPORT_FUNC void pushlr_no_delay_a_slow_result_right_in_1StateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulllr_no_delay_a_slow_result_right_in_1StateFromDevice();
EXPORT_FUNC void pushinSynlr_slow_delay_a_slow_result_left_in_2ToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynlr_slow_delay_a_slow_result_left_in_2FromDevice();
EXPORT_FUNC void pushlr_slow_delay_a_slow_result_left_in_2StateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulllr_slow_delay_a_slow_result_left_in_2StateFromDevice();
EXPORT_FUNC void pushinSynlr_slow_delay_a_slow_result_right_in_2ToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynlr_slow_delay_a_slow_result_right_in_2FromDevice();
EXPORT_FUNC void pushlr_slow_delay_a_slow_result_right_in_2StateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pulllr_slow_delay_a_slow_result_right_in_2StateFromDevice();
EXPORT_FUNC void pushinSynpr_and_lamina_lr_out_lr_fast_delay_inToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynpr_and_lamina_lr_out_lr_fast_delay_inFromDevice();
EXPORT_FUNC void pushpr_and_lamina_lr_out_lr_fast_delay_inStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullpr_and_lamina_lr_out_lr_fast_delay_inStateFromDevice();
EXPORT_FUNC void pushinSynpr_and_lamina_lr_out_lr_no_delay_inToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynpr_and_lamina_lr_out_lr_no_delay_inFromDevice();
EXPORT_FUNC void pushpr_and_lamina_lr_out_lr_no_delay_inStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullpr_and_lamina_lr_out_lr_no_delay_inStateFromDevice();
EXPORT_FUNC void pushinSynpr_and_lamina_lr_out_lr_slow_delay_inToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynpr_and_lamina_lr_out_lr_slow_delay_inFromDevice();
EXPORT_FUNC void pushpr_and_lamina_lr_out_lr_slow_delay_inStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullpr_and_lamina_lr_out_lr_slow_delay_inStateFromDevice();
EXPORT_FUNC void pushinSynpr_and_lamina_ud_out_ud_fast_delay_inToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynpr_and_lamina_ud_out_ud_fast_delay_inFromDevice();
EXPORT_FUNC void pushpr_and_lamina_ud_out_ud_fast_delay_inStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullpr_and_lamina_ud_out_ud_fast_delay_inStateFromDevice();
EXPORT_FUNC void pushinSynpr_and_lamina_ud_out_ud_no_delay_inToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynpr_and_lamina_ud_out_ud_no_delay_inFromDevice();
EXPORT_FUNC void pushpr_and_lamina_ud_out_ud_no_delay_inStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullpr_and_lamina_ud_out_ud_no_delay_inStateFromDevice();
EXPORT_FUNC void pushinSynpr_and_lamina_ud_out_ud_slow_delay_inToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynpr_and_lamina_ud_out_ud_slow_delay_inFromDevice();
EXPORT_FUNC void pushpr_and_lamina_ud_out_ud_slow_delay_inStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullpr_and_lamina_ud_out_ud_slow_delay_inStateFromDevice();
EXPORT_FUNC void pushinSynslow_result_down_out_sum_v_in_slowToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynslow_result_down_out_sum_v_in_slowFromDevice();
EXPORT_FUNC void pushslow_result_down_out_sum_v_in_slowStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullslow_result_down_out_sum_v_in_slowStateFromDevice();
EXPORT_FUNC void pushinSynslow_result_left_out_sum_h_in_slow_revToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynslow_result_left_out_sum_h_in_slow_revFromDevice();
EXPORT_FUNC void pushslow_result_left_out_sum_h_in_slow_revStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullslow_result_left_out_sum_h_in_slow_revStateFromDevice();
EXPORT_FUNC void pushinSynslow_result_right_out_sum_h_in_slowToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynslow_result_right_out_sum_h_in_slowFromDevice();
EXPORT_FUNC void pushslow_result_right_out_sum_h_in_slowStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullslow_result_right_out_sum_h_in_slowStateFromDevice();
EXPORT_FUNC void pushinSynslow_result_up_out_sum_v_in_slow_revToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynslow_result_up_out_sum_v_in_slow_revFromDevice();
EXPORT_FUNC void pushslow_result_up_out_sum_v_in_slow_revStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullslow_result_up_out_sum_v_in_slow_revStateFromDevice();
EXPORT_FUNC void pushinSynsum_h_diff_left_inToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynsum_h_diff_left_inFromDevice();
EXPORT_FUNC void pushsum_h_diff_left_inStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullsum_h_diff_left_inStateFromDevice();
EXPORT_FUNC void pushinSynsum_h_diff_right_inToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynsum_h_diff_right_inFromDevice();
EXPORT_FUNC void pushsum_h_diff_right_inStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullsum_h_diff_right_inStateFromDevice();
EXPORT_FUNC void pushinSynud_fast_delay_a_fast_result_down_in_1ToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynud_fast_delay_a_fast_result_down_in_1FromDevice();
EXPORT_FUNC void pushud_fast_delay_a_fast_result_down_in_1StateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullud_fast_delay_a_fast_result_down_in_1StateFromDevice();
EXPORT_FUNC void pushinSynud_fast_delay_a_fast_result_up_in_1ToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynud_fast_delay_a_fast_result_up_in_1FromDevice();
EXPORT_FUNC void pushud_fast_delay_a_fast_result_up_in_1StateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullud_fast_delay_a_fast_result_up_in_1StateFromDevice();
EXPORT_FUNC void pushinSynud_no_delay_a_fast_result_down_in_2ToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynud_no_delay_a_fast_result_down_in_2FromDevice();
EXPORT_FUNC void pushud_no_delay_a_fast_result_down_in_2StateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullud_no_delay_a_fast_result_down_in_2StateFromDevice();
EXPORT_FUNC void pushinSynud_no_delay_a_fast_result_up_in_2ToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynud_no_delay_a_fast_result_up_in_2FromDevice();
EXPORT_FUNC void pushud_no_delay_a_fast_result_up_in_2StateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullud_no_delay_a_fast_result_up_in_2StateFromDevice();
EXPORT_FUNC void pushinSynud_no_delay_a_slow_result_down_in_1ToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynud_no_delay_a_slow_result_down_in_1FromDevice();
EXPORT_FUNC void pushud_no_delay_a_slow_result_down_in_1StateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullud_no_delay_a_slow_result_down_in_1StateFromDevice();
EXPORT_FUNC void pushinSynud_no_delay_a_slow_result_up_in_1ToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynud_no_delay_a_slow_result_up_in_1FromDevice();
EXPORT_FUNC void pushud_no_delay_a_slow_result_up_in_1StateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullud_no_delay_a_slow_result_up_in_1StateFromDevice();
EXPORT_FUNC void pushinSynud_slow_delay_a_slow_result_down_in_2ToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynud_slow_delay_a_slow_result_down_in_2FromDevice();
EXPORT_FUNC void pushud_slow_delay_a_slow_result_down_in_2StateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullud_slow_delay_a_slow_result_down_in_2StateFromDevice();
EXPORT_FUNC void pushinSynud_slow_delay_a_slow_result_up_in_2ToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynud_slow_delay_a_slow_result_up_in_2FromDevice();
EXPORT_FUNC void pushud_slow_delay_a_slow_result_up_in_2StateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullud_slow_delay_a_slow_result_up_in_2StateFromDevice();
// Runner functions
EXPORT_FUNC void copyStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void copyConnectivityToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void copyStateFromDevice();
EXPORT_FUNC void copyCurrentSpikesFromDevice();
EXPORT_FUNC void copyCurrentSpikeEventsFromDevice();
EXPORT_FUNC void allocateMem();
EXPORT_FUNC void freeMem();
EXPORT_FUNC void stepTime();

// Functions generated by backend
EXPORT_FUNC void updateNeurons(float t);
EXPORT_FUNC void updateSynapses(float t);
EXPORT_FUNC void initialize();
EXPORT_FUNC void initializeSparse();
}  // extern "C"
