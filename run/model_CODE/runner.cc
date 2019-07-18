#include "definitionsInternal.h"

extern "C" {
// ------------------------------------------------------------------------
// global variables
// ------------------------------------------------------------------------
unsigned long long iT;
float t;

// ------------------------------------------------------------------------
// timers
// ------------------------------------------------------------------------
double neuronUpdateTime;
double initTime;
double presynapticUpdateTime;
double postsynapticUpdateTime;
double synapseDynamicsTime;
double initSparseTime;
// ------------------------------------------------------------------------
// remote neuron groups
// ------------------------------------------------------------------------

// ------------------------------------------------------------------------
// local neuron groups
// ------------------------------------------------------------------------
unsigned int* glbSpkCntWorld;
unsigned int* glbSpkWorld;
scalar* aWorld;
scalar* inWorld;
unsigned int* glbSpkCntfast_result_down;
unsigned int* glbSpkfast_result_down;
scalar* outfast_result_down;
unsigned int* glbSpkCntfast_result_left;
unsigned int* glbSpkfast_result_left;
scalar* outfast_result_left;
unsigned int* glbSpkCntfast_result_right;
unsigned int* glbSpkfast_result_right;
scalar* outfast_result_right;
unsigned int* glbSpkCntfast_result_up;
unsigned int* glbSpkfast_result_up;
scalar* outfast_result_up;
unsigned int* glbSpkCntforward;
unsigned int* glbSpkforward;
scalar* valforward;
unsigned int* glbSpkCntleft;
unsigned int* glbSpkleft;
scalar* outleft;
unsigned int* glbSpkCntlr_fast_delay;
unsigned int* glbSpklr_fast_delay;
scalar* alr_fast_delay;
unsigned int* glbSpkCntlr_no_delay;
unsigned int* glbSpklr_no_delay;
scalar* alr_no_delay;
unsigned int* glbSpkCntlr_slow_delay;
unsigned int* glbSpklr_slow_delay;
scalar* alr_slow_delay;
unsigned int* glbSpkCntpr_and_lamina_lr;
unsigned int* glbSpkpr_and_lamina_lr;
scalar* apr_and_lamina_lr;
scalar* a_negpr_and_lamina_lr;
scalar* adappr_and_lamina_lr;
scalar* adap_negpr_and_lamina_lr;
scalar* outpr_and_lamina_lr;
scalar* prev_inpr_and_lamina_lr;
unsigned int* glbSpkCntpr_and_lamina_ud;
unsigned int* glbSpkpr_and_lamina_ud;
scalar* apr_and_lamina_ud;
scalar* a_negpr_and_lamina_ud;
scalar* adappr_and_lamina_ud;
scalar* adap_negpr_and_lamina_ud;
scalar* outpr_and_lamina_ud;
scalar* prev_inpr_and_lamina_ud;
unsigned int* glbSpkCntright;
unsigned int* glbSpkright;
scalar* outright;
unsigned int* glbSpkCntslow_result_down;
unsigned int* glbSpkslow_result_down;
scalar* outslow_result_down;
unsigned int* glbSpkCntslow_result_left;
unsigned int* glbSpkslow_result_left;
scalar* outslow_result_left;
unsigned int* glbSpkCntslow_result_right;
unsigned int* glbSpkslow_result_right;
scalar* outslow_result_right;
unsigned int* glbSpkCntslow_result_up;
unsigned int* glbSpkslow_result_up;
scalar* outslow_result_up;
unsigned int* glbSpkCntsum_h;
unsigned int* glbSpksum_h;
scalar* asum_h;
scalar* a_revsum_h;
scalar* a_slowsum_h;
scalar* a_slow_revsum_h;
scalar* diffsum_h;
scalar* rhd_progsum_h;
scalar* with_rhd_prog_smoothsum_h;
scalar* with_rhd_reg_smoothsum_h;
unsigned int* glbSpkCntsum_v;
unsigned int* glbSpksum_v;
scalar* asum_v;
scalar* a_revsum_v;
scalar* a_slowsum_v;
scalar* a_slow_revsum_v;
scalar* diffsum_v;
scalar* rhd_progsum_v;
scalar* with_rhd_prog_smoothsum_v;
scalar* with_rhd_reg_smoothsum_v;
unsigned int* glbSpkCntud_fast_delay;
unsigned int* glbSpkud_fast_delay;
scalar* aud_fast_delay;
unsigned int* glbSpkCntud_no_delay;
unsigned int* glbSpkud_no_delay;
scalar* aud_no_delay;
unsigned int* glbSpkCntud_slow_delay;
unsigned int* glbSpkud_slow_delay;
scalar* aud_slow_delay;

// ------------------------------------------------------------------------
// postsynaptic variables
// ------------------------------------------------------------------------
float* inSynud_no_delay_a_fast_result_down_in_2;
float* inSynud_fast_delay_a_fast_result_down_in_1;
float* inSynlr_no_delay_a_fast_result_left_in_2;
float* inSynlr_fast_delay_a_fast_result_left_in_1;
float* inSynlr_no_delay_a_fast_result_right_in_2;
float* inSynlr_fast_delay_a_fast_result_right_in_1;
float* inSynud_no_delay_a_fast_result_up_in_2;
float* inSynud_fast_delay_a_fast_result_up_in_1;
float* inSynsum_h_diff_left_in;
float* inSynpr_and_lamina_lr_out_lr_fast_delay_in;
float* inSynpr_and_lamina_lr_out_lr_no_delay_in;
float* inSynpr_and_lamina_lr_out_lr_slow_delay_in;
float* inSynWorld_to_pr_and_lamina_lr_Synapse_0_weight_update;
float* inSynWorld_to_pr_and_lamina_ud_Synapse_0_weight_update;
float* inSynsum_h_diff_right_in;
float* inSynud_slow_delay_a_slow_result_down_in_2;
float* inSynud_no_delay_a_slow_result_down_in_1;
float* inSynlr_no_delay_a_slow_result_left_in_1;
float* inSynlr_slow_delay_a_slow_result_left_in_2;
float* inSynlr_no_delay_a_slow_result_right_in_1;
float* inSynlr_slow_delay_a_slow_result_right_in_2;
float* inSynud_no_delay_a_slow_result_up_in_1;
float* inSynud_slow_delay_a_slow_result_up_in_2;
float* inSynslow_result_right_out_sum_h_in_slow;
float* inSynslow_result_left_out_sum_h_in_slow_rev;
float* inSynfast_result_right_out_sum_h_in;
float* inSynfast_result_left_out_sum_h_in_rev;
float* inSynslow_result_up_out_sum_v_in_slow_rev;
float* inSynslow_result_down_out_sum_v_in_slow;
float* inSynfast_result_up_out_sum_v_in_rev;
float* inSynfast_result_down_out_sum_v_in;
float* inSynpr_and_lamina_ud_out_ud_fast_delay_in;
float* inSynpr_and_lamina_ud_out_ud_no_delay_in;
float* inSynpr_and_lamina_ud_out_ud_slow_delay_in;

// ------------------------------------------------------------------------
// synapse connectivity
// ------------------------------------------------------------------------
const unsigned int maxRowLengthWorld_to_pr_and_lamina_lr_Synapse_0_weight_update = 6;
unsigned int* rowLengthWorld_to_pr_and_lamina_lr_Synapse_0_weight_update;
unsigned int* indWorld_to_pr_and_lamina_lr_Synapse_0_weight_update;
const unsigned int maxRowLengthWorld_to_pr_and_lamina_ud_Synapse_0_weight_update = 6;
unsigned int* rowLengthWorld_to_pr_and_lamina_ud_Synapse_0_weight_update;
unsigned int* indWorld_to_pr_and_lamina_ud_Synapse_0_weight_update;
const unsigned int maxRowLengthfast_result_left_out_sum_h_in_rev = 1;
unsigned int* rowLengthfast_result_left_out_sum_h_in_rev;
unsigned int* indfast_result_left_out_sum_h_in_rev;
const unsigned int maxRowLengthfast_result_right_out_sum_h_in = 1;
unsigned int* rowLengthfast_result_right_out_sum_h_in;
unsigned int* indfast_result_right_out_sum_h_in;
const unsigned int maxRowLengthlr_fast_delay_a_fast_result_left_in_1 = 1;
unsigned int* rowLengthlr_fast_delay_a_fast_result_left_in_1;
unsigned int* indlr_fast_delay_a_fast_result_left_in_1;
const unsigned int maxRowLengthlr_fast_delay_a_fast_result_right_in_1 = 1;
unsigned int* rowLengthlr_fast_delay_a_fast_result_right_in_1;
unsigned int* indlr_fast_delay_a_fast_result_right_in_1;
const unsigned int maxRowLengthlr_no_delay_a_fast_result_left_in_2 = 1;
unsigned int* rowLengthlr_no_delay_a_fast_result_left_in_2;
unsigned int* indlr_no_delay_a_fast_result_left_in_2;
const unsigned int maxRowLengthlr_no_delay_a_fast_result_right_in_2 = 1;
unsigned int* rowLengthlr_no_delay_a_fast_result_right_in_2;
unsigned int* indlr_no_delay_a_fast_result_right_in_2;
const unsigned int maxRowLengthlr_no_delay_a_slow_result_left_in_1 = 1;
unsigned int* rowLengthlr_no_delay_a_slow_result_left_in_1;
unsigned int* indlr_no_delay_a_slow_result_left_in_1;
const unsigned int maxRowLengthlr_no_delay_a_slow_result_right_in_1 = 1;
unsigned int* rowLengthlr_no_delay_a_slow_result_right_in_1;
unsigned int* indlr_no_delay_a_slow_result_right_in_1;
const unsigned int maxRowLengthlr_slow_delay_a_slow_result_left_in_2 = 1;
unsigned int* rowLengthlr_slow_delay_a_slow_result_left_in_2;
unsigned int* indlr_slow_delay_a_slow_result_left_in_2;
const unsigned int maxRowLengthlr_slow_delay_a_slow_result_right_in_2 = 1;
unsigned int* rowLengthlr_slow_delay_a_slow_result_right_in_2;
unsigned int* indlr_slow_delay_a_slow_result_right_in_2;
const unsigned int maxRowLengthpr_and_lamina_lr_out_lr_fast_delay_in = 1;
unsigned int* rowLengthpr_and_lamina_lr_out_lr_fast_delay_in;
unsigned int* indpr_and_lamina_lr_out_lr_fast_delay_in;
const unsigned int maxRowLengthpr_and_lamina_lr_out_lr_no_delay_in = 1;
unsigned int* rowLengthpr_and_lamina_lr_out_lr_no_delay_in;
unsigned int* indpr_and_lamina_lr_out_lr_no_delay_in;
const unsigned int maxRowLengthpr_and_lamina_lr_out_lr_slow_delay_in = 1;
unsigned int* rowLengthpr_and_lamina_lr_out_lr_slow_delay_in;
unsigned int* indpr_and_lamina_lr_out_lr_slow_delay_in;
const unsigned int maxRowLengthpr_and_lamina_ud_out_ud_fast_delay_in = 1;
unsigned int* rowLengthpr_and_lamina_ud_out_ud_fast_delay_in;
unsigned int* indpr_and_lamina_ud_out_ud_fast_delay_in;
const unsigned int maxRowLengthpr_and_lamina_ud_out_ud_no_delay_in = 1;
unsigned int* rowLengthpr_and_lamina_ud_out_ud_no_delay_in;
unsigned int* indpr_and_lamina_ud_out_ud_no_delay_in;
const unsigned int maxRowLengthpr_and_lamina_ud_out_ud_slow_delay_in = 1;
unsigned int* rowLengthpr_and_lamina_ud_out_ud_slow_delay_in;
unsigned int* indpr_and_lamina_ud_out_ud_slow_delay_in;
const unsigned int maxRowLengthslow_result_left_out_sum_h_in_slow_rev = 1;
unsigned int* rowLengthslow_result_left_out_sum_h_in_slow_rev;
unsigned int* indslow_result_left_out_sum_h_in_slow_rev;
const unsigned int maxRowLengthslow_result_right_out_sum_h_in_slow = 1;
unsigned int* rowLengthslow_result_right_out_sum_h_in_slow;
unsigned int* indslow_result_right_out_sum_h_in_slow;
const unsigned int maxRowLengthsum_h_diff_left_in = 1;
unsigned int* rowLengthsum_h_diff_left_in;
unsigned int* indsum_h_diff_left_in;
const unsigned int maxRowLengthsum_h_diff_right_in = 1;
unsigned int* rowLengthsum_h_diff_right_in;
unsigned int* indsum_h_diff_right_in;
const unsigned int maxRowLengthud_fast_delay_a_fast_result_down_in_1 = 1;
unsigned int* rowLengthud_fast_delay_a_fast_result_down_in_1;
unsigned int* indud_fast_delay_a_fast_result_down_in_1;
const unsigned int maxRowLengthud_fast_delay_a_fast_result_up_in_1 = 1;
unsigned int* rowLengthud_fast_delay_a_fast_result_up_in_1;
unsigned int* indud_fast_delay_a_fast_result_up_in_1;
const unsigned int maxRowLengthud_no_delay_a_fast_result_down_in_2 = 1;
unsigned int* rowLengthud_no_delay_a_fast_result_down_in_2;
unsigned int* indud_no_delay_a_fast_result_down_in_2;
const unsigned int maxRowLengthud_no_delay_a_fast_result_up_in_2 = 1;
unsigned int* rowLengthud_no_delay_a_fast_result_up_in_2;
unsigned int* indud_no_delay_a_fast_result_up_in_2;
const unsigned int maxRowLengthud_no_delay_a_slow_result_down_in_1 = 1;
unsigned int* rowLengthud_no_delay_a_slow_result_down_in_1;
unsigned int* indud_no_delay_a_slow_result_down_in_1;
const unsigned int maxRowLengthud_no_delay_a_slow_result_up_in_1 = 1;
unsigned int* rowLengthud_no_delay_a_slow_result_up_in_1;
unsigned int* indud_no_delay_a_slow_result_up_in_1;
const unsigned int maxRowLengthud_slow_delay_a_slow_result_down_in_2 = 1;
unsigned int* rowLengthud_slow_delay_a_slow_result_down_in_2;
unsigned int* indud_slow_delay_a_slow_result_down_in_2;
const unsigned int maxRowLengthud_slow_delay_a_slow_result_up_in_2 = 1;
unsigned int* rowLengthud_slow_delay_a_slow_result_up_in_2;
unsigned int* indud_slow_delay_a_slow_result_up_in_2;

// ------------------------------------------------------------------------
// synapse variables
// ------------------------------------------------------------------------
scalar* wWorld_to_pr_and_lamina_lr_Synapse_0_weight_update;
scalar* wWorld_to_pr_and_lamina_ud_Synapse_0_weight_update;

}  // extern "C"
// ------------------------------------------------------------------------
// extra global params
// ------------------------------------------------------------------------

// ------------------------------------------------------------------------
// copying things to device
// ------------------------------------------------------------------------
void pushWorldSpikesToDevice(bool uninitialisedOnly) {
}

void pushWorldCurrentSpikesToDevice(bool uninitialisedOnly) {
}

void pushaWorldToDevice(bool uninitialisedOnly) {
}

void pushinWorldToDevice(bool uninitialisedOnly) {
}

void pushWorldStateToDevice(bool uninitialisedOnly) {
    pushaWorldToDevice(uninitialisedOnly);
    pushinWorldToDevice(uninitialisedOnly);
}

void pushfast_result_downSpikesToDevice(bool uninitialisedOnly) {
}

void pushfast_result_downCurrentSpikesToDevice(bool uninitialisedOnly) {
}

void pushoutfast_result_downToDevice(bool uninitialisedOnly) {
}

void pushfast_result_downStateToDevice(bool uninitialisedOnly) {
    pushoutfast_result_downToDevice(uninitialisedOnly);
}

void pushfast_result_leftSpikesToDevice(bool uninitialisedOnly) {
}

void pushfast_result_leftCurrentSpikesToDevice(bool uninitialisedOnly) {
}

void pushoutfast_result_leftToDevice(bool uninitialisedOnly) {
}

void pushfast_result_leftStateToDevice(bool uninitialisedOnly) {
    pushoutfast_result_leftToDevice(uninitialisedOnly);
}

void pushfast_result_rightSpikesToDevice(bool uninitialisedOnly) {
}

void pushfast_result_rightCurrentSpikesToDevice(bool uninitialisedOnly) {
}

void pushoutfast_result_rightToDevice(bool uninitialisedOnly) {
}

void pushfast_result_rightStateToDevice(bool uninitialisedOnly) {
    pushoutfast_result_rightToDevice(uninitialisedOnly);
}

void pushfast_result_upSpikesToDevice(bool uninitialisedOnly) {
}

void pushfast_result_upCurrentSpikesToDevice(bool uninitialisedOnly) {
}

void pushoutfast_result_upToDevice(bool uninitialisedOnly) {
}

void pushfast_result_upStateToDevice(bool uninitialisedOnly) {
    pushoutfast_result_upToDevice(uninitialisedOnly);
}

void pushforwardSpikesToDevice(bool uninitialisedOnly) {
}

void pushforwardCurrentSpikesToDevice(bool uninitialisedOnly) {
}

void pushvalforwardToDevice(bool uninitialisedOnly) {
}

void pushforwardStateToDevice(bool uninitialisedOnly) {
    pushvalforwardToDevice(uninitialisedOnly);
}

void pushleftSpikesToDevice(bool uninitialisedOnly) {
}

void pushleftCurrentSpikesToDevice(bool uninitialisedOnly) {
}

void pushoutleftToDevice(bool uninitialisedOnly) {
}

void pushleftStateToDevice(bool uninitialisedOnly) {
    pushoutleftToDevice(uninitialisedOnly);
}

void pushlr_fast_delaySpikesToDevice(bool uninitialisedOnly) {
}

void pushlr_fast_delayCurrentSpikesToDevice(bool uninitialisedOnly) {
}

void pushalr_fast_delayToDevice(bool uninitialisedOnly) {
}

void pushlr_fast_delayStateToDevice(bool uninitialisedOnly) {
    pushalr_fast_delayToDevice(uninitialisedOnly);
}

void pushlr_no_delaySpikesToDevice(bool uninitialisedOnly) {
}

void pushlr_no_delayCurrentSpikesToDevice(bool uninitialisedOnly) {
}

void pushalr_no_delayToDevice(bool uninitialisedOnly) {
}

void pushlr_no_delayStateToDevice(bool uninitialisedOnly) {
    pushalr_no_delayToDevice(uninitialisedOnly);
}

void pushlr_slow_delaySpikesToDevice(bool uninitialisedOnly) {
}

void pushlr_slow_delayCurrentSpikesToDevice(bool uninitialisedOnly) {
}

void pushalr_slow_delayToDevice(bool uninitialisedOnly) {
}

void pushlr_slow_delayStateToDevice(bool uninitialisedOnly) {
    pushalr_slow_delayToDevice(uninitialisedOnly);
}

void pushpr_and_lamina_lrSpikesToDevice(bool uninitialisedOnly) {
}

void pushpr_and_lamina_lrCurrentSpikesToDevice(bool uninitialisedOnly) {
}

void pushapr_and_lamina_lrToDevice(bool uninitialisedOnly) {
}

void pusha_negpr_and_lamina_lrToDevice(bool uninitialisedOnly) {
}

void pushadappr_and_lamina_lrToDevice(bool uninitialisedOnly) {
}

void pushadap_negpr_and_lamina_lrToDevice(bool uninitialisedOnly) {
}

void pushoutpr_and_lamina_lrToDevice(bool uninitialisedOnly) {
}

void pushprev_inpr_and_lamina_lrToDevice(bool uninitialisedOnly) {
}

void pushpr_and_lamina_lrStateToDevice(bool uninitialisedOnly) {
    pushapr_and_lamina_lrToDevice(uninitialisedOnly);
    pusha_negpr_and_lamina_lrToDevice(uninitialisedOnly);
    pushadappr_and_lamina_lrToDevice(uninitialisedOnly);
    pushadap_negpr_and_lamina_lrToDevice(uninitialisedOnly);
    pushoutpr_and_lamina_lrToDevice(uninitialisedOnly);
    pushprev_inpr_and_lamina_lrToDevice(uninitialisedOnly);
}

void pushpr_and_lamina_udSpikesToDevice(bool uninitialisedOnly) {
}

void pushpr_and_lamina_udCurrentSpikesToDevice(bool uninitialisedOnly) {
}

void pushapr_and_lamina_udToDevice(bool uninitialisedOnly) {
}

void pusha_negpr_and_lamina_udToDevice(bool uninitialisedOnly) {
}

void pushadappr_and_lamina_udToDevice(bool uninitialisedOnly) {
}

void pushadap_negpr_and_lamina_udToDevice(bool uninitialisedOnly) {
}

void pushoutpr_and_lamina_udToDevice(bool uninitialisedOnly) {
}

void pushprev_inpr_and_lamina_udToDevice(bool uninitialisedOnly) {
}

void pushpr_and_lamina_udStateToDevice(bool uninitialisedOnly) {
    pushapr_and_lamina_udToDevice(uninitialisedOnly);
    pusha_negpr_and_lamina_udToDevice(uninitialisedOnly);
    pushadappr_and_lamina_udToDevice(uninitialisedOnly);
    pushadap_negpr_and_lamina_udToDevice(uninitialisedOnly);
    pushoutpr_and_lamina_udToDevice(uninitialisedOnly);
    pushprev_inpr_and_lamina_udToDevice(uninitialisedOnly);
}

void pushrightSpikesToDevice(bool uninitialisedOnly) {
}

void pushrightCurrentSpikesToDevice(bool uninitialisedOnly) {
}

void pushoutrightToDevice(bool uninitialisedOnly) {
}

void pushrightStateToDevice(bool uninitialisedOnly) {
    pushoutrightToDevice(uninitialisedOnly);
}

void pushslow_result_downSpikesToDevice(bool uninitialisedOnly) {
}

void pushslow_result_downCurrentSpikesToDevice(bool uninitialisedOnly) {
}

void pushoutslow_result_downToDevice(bool uninitialisedOnly) {
}

void pushslow_result_downStateToDevice(bool uninitialisedOnly) {
    pushoutslow_result_downToDevice(uninitialisedOnly);
}

void pushslow_result_leftSpikesToDevice(bool uninitialisedOnly) {
}

void pushslow_result_leftCurrentSpikesToDevice(bool uninitialisedOnly) {
}

void pushoutslow_result_leftToDevice(bool uninitialisedOnly) {
}

void pushslow_result_leftStateToDevice(bool uninitialisedOnly) {
    pushoutslow_result_leftToDevice(uninitialisedOnly);
}

void pushslow_result_rightSpikesToDevice(bool uninitialisedOnly) {
}

void pushslow_result_rightCurrentSpikesToDevice(bool uninitialisedOnly) {
}

void pushoutslow_result_rightToDevice(bool uninitialisedOnly) {
}

void pushslow_result_rightStateToDevice(bool uninitialisedOnly) {
    pushoutslow_result_rightToDevice(uninitialisedOnly);
}

void pushslow_result_upSpikesToDevice(bool uninitialisedOnly) {
}

void pushslow_result_upCurrentSpikesToDevice(bool uninitialisedOnly) {
}

void pushoutslow_result_upToDevice(bool uninitialisedOnly) {
}

void pushslow_result_upStateToDevice(bool uninitialisedOnly) {
    pushoutslow_result_upToDevice(uninitialisedOnly);
}

void pushsum_hSpikesToDevice(bool uninitialisedOnly) {
}

void pushsum_hCurrentSpikesToDevice(bool uninitialisedOnly) {
}

void pushasum_hToDevice(bool uninitialisedOnly) {
}

void pusha_revsum_hToDevice(bool uninitialisedOnly) {
}

void pusha_slowsum_hToDevice(bool uninitialisedOnly) {
}

void pusha_slow_revsum_hToDevice(bool uninitialisedOnly) {
}

void pushdiffsum_hToDevice(bool uninitialisedOnly) {
}

void pushrhd_progsum_hToDevice(bool uninitialisedOnly) {
}

void pushwith_rhd_prog_smoothsum_hToDevice(bool uninitialisedOnly) {
}

void pushwith_rhd_reg_smoothsum_hToDevice(bool uninitialisedOnly) {
}

void pushsum_hStateToDevice(bool uninitialisedOnly) {
    pushasum_hToDevice(uninitialisedOnly);
    pusha_revsum_hToDevice(uninitialisedOnly);
    pusha_slowsum_hToDevice(uninitialisedOnly);
    pusha_slow_revsum_hToDevice(uninitialisedOnly);
    pushdiffsum_hToDevice(uninitialisedOnly);
    pushrhd_progsum_hToDevice(uninitialisedOnly);
    pushwith_rhd_prog_smoothsum_hToDevice(uninitialisedOnly);
    pushwith_rhd_reg_smoothsum_hToDevice(uninitialisedOnly);
}

void pushsum_vSpikesToDevice(bool uninitialisedOnly) {
}

void pushsum_vCurrentSpikesToDevice(bool uninitialisedOnly) {
}

void pushasum_vToDevice(bool uninitialisedOnly) {
}

void pusha_revsum_vToDevice(bool uninitialisedOnly) {
}

void pusha_slowsum_vToDevice(bool uninitialisedOnly) {
}

void pusha_slow_revsum_vToDevice(bool uninitialisedOnly) {
}

void pushdiffsum_vToDevice(bool uninitialisedOnly) {
}

void pushrhd_progsum_vToDevice(bool uninitialisedOnly) {
}

void pushwith_rhd_prog_smoothsum_vToDevice(bool uninitialisedOnly) {
}

void pushwith_rhd_reg_smoothsum_vToDevice(bool uninitialisedOnly) {
}

void pushsum_vStateToDevice(bool uninitialisedOnly) {
    pushasum_vToDevice(uninitialisedOnly);
    pusha_revsum_vToDevice(uninitialisedOnly);
    pusha_slowsum_vToDevice(uninitialisedOnly);
    pusha_slow_revsum_vToDevice(uninitialisedOnly);
    pushdiffsum_vToDevice(uninitialisedOnly);
    pushrhd_progsum_vToDevice(uninitialisedOnly);
    pushwith_rhd_prog_smoothsum_vToDevice(uninitialisedOnly);
    pushwith_rhd_reg_smoothsum_vToDevice(uninitialisedOnly);
}

void pushud_fast_delaySpikesToDevice(bool uninitialisedOnly) {
}

void pushud_fast_delayCurrentSpikesToDevice(bool uninitialisedOnly) {
}

void pushaud_fast_delayToDevice(bool uninitialisedOnly) {
}

void pushud_fast_delayStateToDevice(bool uninitialisedOnly) {
    pushaud_fast_delayToDevice(uninitialisedOnly);
}

void pushud_no_delaySpikesToDevice(bool uninitialisedOnly) {
}

void pushud_no_delayCurrentSpikesToDevice(bool uninitialisedOnly) {
}

void pushaud_no_delayToDevice(bool uninitialisedOnly) {
}

void pushud_no_delayStateToDevice(bool uninitialisedOnly) {
    pushaud_no_delayToDevice(uninitialisedOnly);
}

void pushud_slow_delaySpikesToDevice(bool uninitialisedOnly) {
}

void pushud_slow_delayCurrentSpikesToDevice(bool uninitialisedOnly) {
}

void pushaud_slow_delayToDevice(bool uninitialisedOnly) {
}

void pushud_slow_delayStateToDevice(bool uninitialisedOnly) {
    pushaud_slow_delayToDevice(uninitialisedOnly);
}

void pushWorld_to_pr_and_lamina_lr_Synapse_0_weight_updateConnectivityToDevice(bool uninitialisedOnly) {
}

void pushWorld_to_pr_and_lamina_ud_Synapse_0_weight_updateConnectivityToDevice(bool uninitialisedOnly) {
}

void pushfast_result_left_out_sum_h_in_revConnectivityToDevice(bool uninitialisedOnly) {
}

void pushfast_result_right_out_sum_h_inConnectivityToDevice(bool uninitialisedOnly) {
}

void pushlr_fast_delay_a_fast_result_left_in_1ConnectivityToDevice(bool uninitialisedOnly) {
}

void pushlr_fast_delay_a_fast_result_right_in_1ConnectivityToDevice(bool uninitialisedOnly) {
}

void pushlr_no_delay_a_fast_result_left_in_2ConnectivityToDevice(bool uninitialisedOnly) {
}

void pushlr_no_delay_a_fast_result_right_in_2ConnectivityToDevice(bool uninitialisedOnly) {
}

void pushlr_no_delay_a_slow_result_left_in_1ConnectivityToDevice(bool uninitialisedOnly) {
}

void pushlr_no_delay_a_slow_result_right_in_1ConnectivityToDevice(bool uninitialisedOnly) {
}

void pushlr_slow_delay_a_slow_result_left_in_2ConnectivityToDevice(bool uninitialisedOnly) {
}

void pushlr_slow_delay_a_slow_result_right_in_2ConnectivityToDevice(bool uninitialisedOnly) {
}

void pushpr_and_lamina_lr_out_lr_fast_delay_inConnectivityToDevice(bool uninitialisedOnly) {
}

void pushpr_and_lamina_lr_out_lr_no_delay_inConnectivityToDevice(bool uninitialisedOnly) {
}

void pushpr_and_lamina_lr_out_lr_slow_delay_inConnectivityToDevice(bool uninitialisedOnly) {
}

void pushpr_and_lamina_ud_out_ud_fast_delay_inConnectivityToDevice(bool uninitialisedOnly) {
}

void pushpr_and_lamina_ud_out_ud_no_delay_inConnectivityToDevice(bool uninitialisedOnly) {
}

void pushpr_and_lamina_ud_out_ud_slow_delay_inConnectivityToDevice(bool uninitialisedOnly) {
}

void pushslow_result_left_out_sum_h_in_slow_revConnectivityToDevice(bool uninitialisedOnly) {
}

void pushslow_result_right_out_sum_h_in_slowConnectivityToDevice(bool uninitialisedOnly) {
}

void pushsum_h_diff_left_inConnectivityToDevice(bool uninitialisedOnly) {
}

void pushsum_h_diff_right_inConnectivityToDevice(bool uninitialisedOnly) {
}

void pushud_fast_delay_a_fast_result_down_in_1ConnectivityToDevice(bool uninitialisedOnly) {
}

void pushud_fast_delay_a_fast_result_up_in_1ConnectivityToDevice(bool uninitialisedOnly) {
}

void pushud_no_delay_a_fast_result_down_in_2ConnectivityToDevice(bool uninitialisedOnly) {
}

void pushud_no_delay_a_fast_result_up_in_2ConnectivityToDevice(bool uninitialisedOnly) {
}

void pushud_no_delay_a_slow_result_down_in_1ConnectivityToDevice(bool uninitialisedOnly) {
}

void pushud_no_delay_a_slow_result_up_in_1ConnectivityToDevice(bool uninitialisedOnly) {
}

void pushud_slow_delay_a_slow_result_down_in_2ConnectivityToDevice(bool uninitialisedOnly) {
}

void pushud_slow_delay_a_slow_result_up_in_2ConnectivityToDevice(bool uninitialisedOnly) {
}

void pushwWorld_to_pr_and_lamina_lr_Synapse_0_weight_updateToDevice(bool uninitialisedOnly) {
}

void pushinSynWorld_to_pr_and_lamina_lr_Synapse_0_weight_updateToDevice(bool uninitialisedOnly) {
}

void pushWorld_to_pr_and_lamina_lr_Synapse_0_weight_updateStateToDevice(bool uninitialisedOnly) {
    pushwWorld_to_pr_and_lamina_lr_Synapse_0_weight_updateToDevice(uninitialisedOnly);
    pushinSynWorld_to_pr_and_lamina_lr_Synapse_0_weight_updateToDevice(uninitialisedOnly);
}

void pushwWorld_to_pr_and_lamina_ud_Synapse_0_weight_updateToDevice(bool uninitialisedOnly) {
}

void pushinSynWorld_to_pr_and_lamina_ud_Synapse_0_weight_updateToDevice(bool uninitialisedOnly) {
}

void pushWorld_to_pr_and_lamina_ud_Synapse_0_weight_updateStateToDevice(bool uninitialisedOnly) {
    pushwWorld_to_pr_and_lamina_ud_Synapse_0_weight_updateToDevice(uninitialisedOnly);
    pushinSynWorld_to_pr_and_lamina_ud_Synapse_0_weight_updateToDevice(uninitialisedOnly);
}

void pushinSynfast_result_down_out_sum_v_inToDevice(bool uninitialisedOnly) {
}

void pushfast_result_down_out_sum_v_inStateToDevice(bool uninitialisedOnly) {
    pushinSynfast_result_down_out_sum_v_inToDevice(uninitialisedOnly);
}

void pushinSynfast_result_left_out_sum_h_in_revToDevice(bool uninitialisedOnly) {
}

void pushfast_result_left_out_sum_h_in_revStateToDevice(bool uninitialisedOnly) {
    pushinSynfast_result_left_out_sum_h_in_revToDevice(uninitialisedOnly);
}

void pushinSynfast_result_right_out_sum_h_inToDevice(bool uninitialisedOnly) {
}

void pushfast_result_right_out_sum_h_inStateToDevice(bool uninitialisedOnly) {
    pushinSynfast_result_right_out_sum_h_inToDevice(uninitialisedOnly);
}

void pushinSynfast_result_up_out_sum_v_in_revToDevice(bool uninitialisedOnly) {
}

void pushfast_result_up_out_sum_v_in_revStateToDevice(bool uninitialisedOnly) {
    pushinSynfast_result_up_out_sum_v_in_revToDevice(uninitialisedOnly);
}

void pushinSynlr_fast_delay_a_fast_result_left_in_1ToDevice(bool uninitialisedOnly) {
}

void pushlr_fast_delay_a_fast_result_left_in_1StateToDevice(bool uninitialisedOnly) {
    pushinSynlr_fast_delay_a_fast_result_left_in_1ToDevice(uninitialisedOnly);
}

void pushinSynlr_fast_delay_a_fast_result_right_in_1ToDevice(bool uninitialisedOnly) {
}

void pushlr_fast_delay_a_fast_result_right_in_1StateToDevice(bool uninitialisedOnly) {
    pushinSynlr_fast_delay_a_fast_result_right_in_1ToDevice(uninitialisedOnly);
}

void pushinSynlr_no_delay_a_fast_result_left_in_2ToDevice(bool uninitialisedOnly) {
}

void pushlr_no_delay_a_fast_result_left_in_2StateToDevice(bool uninitialisedOnly) {
    pushinSynlr_no_delay_a_fast_result_left_in_2ToDevice(uninitialisedOnly);
}

void pushinSynlr_no_delay_a_fast_result_right_in_2ToDevice(bool uninitialisedOnly) {
}

void pushlr_no_delay_a_fast_result_right_in_2StateToDevice(bool uninitialisedOnly) {
    pushinSynlr_no_delay_a_fast_result_right_in_2ToDevice(uninitialisedOnly);
}

void pushinSynlr_no_delay_a_slow_result_left_in_1ToDevice(bool uninitialisedOnly) {
}

void pushlr_no_delay_a_slow_result_left_in_1StateToDevice(bool uninitialisedOnly) {
    pushinSynlr_no_delay_a_slow_result_left_in_1ToDevice(uninitialisedOnly);
}

void pushinSynlr_no_delay_a_slow_result_right_in_1ToDevice(bool uninitialisedOnly) {
}

void pushlr_no_delay_a_slow_result_right_in_1StateToDevice(bool uninitialisedOnly) {
    pushinSynlr_no_delay_a_slow_result_right_in_1ToDevice(uninitialisedOnly);
}

void pushinSynlr_slow_delay_a_slow_result_left_in_2ToDevice(bool uninitialisedOnly) {
}

void pushlr_slow_delay_a_slow_result_left_in_2StateToDevice(bool uninitialisedOnly) {
    pushinSynlr_slow_delay_a_slow_result_left_in_2ToDevice(uninitialisedOnly);
}

void pushinSynlr_slow_delay_a_slow_result_right_in_2ToDevice(bool uninitialisedOnly) {
}

void pushlr_slow_delay_a_slow_result_right_in_2StateToDevice(bool uninitialisedOnly) {
    pushinSynlr_slow_delay_a_slow_result_right_in_2ToDevice(uninitialisedOnly);
}

void pushinSynpr_and_lamina_lr_out_lr_fast_delay_inToDevice(bool uninitialisedOnly) {
}

void pushpr_and_lamina_lr_out_lr_fast_delay_inStateToDevice(bool uninitialisedOnly) {
    pushinSynpr_and_lamina_lr_out_lr_fast_delay_inToDevice(uninitialisedOnly);
}

void pushinSynpr_and_lamina_lr_out_lr_no_delay_inToDevice(bool uninitialisedOnly) {
}

void pushpr_and_lamina_lr_out_lr_no_delay_inStateToDevice(bool uninitialisedOnly) {
    pushinSynpr_and_lamina_lr_out_lr_no_delay_inToDevice(uninitialisedOnly);
}

void pushinSynpr_and_lamina_lr_out_lr_slow_delay_inToDevice(bool uninitialisedOnly) {
}

void pushpr_and_lamina_lr_out_lr_slow_delay_inStateToDevice(bool uninitialisedOnly) {
    pushinSynpr_and_lamina_lr_out_lr_slow_delay_inToDevice(uninitialisedOnly);
}

void pushinSynpr_and_lamina_ud_out_ud_fast_delay_inToDevice(bool uninitialisedOnly) {
}

void pushpr_and_lamina_ud_out_ud_fast_delay_inStateToDevice(bool uninitialisedOnly) {
    pushinSynpr_and_lamina_ud_out_ud_fast_delay_inToDevice(uninitialisedOnly);
}

void pushinSynpr_and_lamina_ud_out_ud_no_delay_inToDevice(bool uninitialisedOnly) {
}

void pushpr_and_lamina_ud_out_ud_no_delay_inStateToDevice(bool uninitialisedOnly) {
    pushinSynpr_and_lamina_ud_out_ud_no_delay_inToDevice(uninitialisedOnly);
}

void pushinSynpr_and_lamina_ud_out_ud_slow_delay_inToDevice(bool uninitialisedOnly) {
}

void pushpr_and_lamina_ud_out_ud_slow_delay_inStateToDevice(bool uninitialisedOnly) {
    pushinSynpr_and_lamina_ud_out_ud_slow_delay_inToDevice(uninitialisedOnly);
}

void pushinSynslow_result_down_out_sum_v_in_slowToDevice(bool uninitialisedOnly) {
}

void pushslow_result_down_out_sum_v_in_slowStateToDevice(bool uninitialisedOnly) {
    pushinSynslow_result_down_out_sum_v_in_slowToDevice(uninitialisedOnly);
}

void pushinSynslow_result_left_out_sum_h_in_slow_revToDevice(bool uninitialisedOnly) {
}

void pushslow_result_left_out_sum_h_in_slow_revStateToDevice(bool uninitialisedOnly) {
    pushinSynslow_result_left_out_sum_h_in_slow_revToDevice(uninitialisedOnly);
}

void pushinSynslow_result_right_out_sum_h_in_slowToDevice(bool uninitialisedOnly) {
}

void pushslow_result_right_out_sum_h_in_slowStateToDevice(bool uninitialisedOnly) {
    pushinSynslow_result_right_out_sum_h_in_slowToDevice(uninitialisedOnly);
}

void pushinSynslow_result_up_out_sum_v_in_slow_revToDevice(bool uninitialisedOnly) {
}

void pushslow_result_up_out_sum_v_in_slow_revStateToDevice(bool uninitialisedOnly) {
    pushinSynslow_result_up_out_sum_v_in_slow_revToDevice(uninitialisedOnly);
}

void pushinSynsum_h_diff_left_inToDevice(bool uninitialisedOnly) {
}

void pushsum_h_diff_left_inStateToDevice(bool uninitialisedOnly) {
    pushinSynsum_h_diff_left_inToDevice(uninitialisedOnly);
}

void pushinSynsum_h_diff_right_inToDevice(bool uninitialisedOnly) {
}

void pushsum_h_diff_right_inStateToDevice(bool uninitialisedOnly) {
    pushinSynsum_h_diff_right_inToDevice(uninitialisedOnly);
}

void pushinSynud_fast_delay_a_fast_result_down_in_1ToDevice(bool uninitialisedOnly) {
}

void pushud_fast_delay_a_fast_result_down_in_1StateToDevice(bool uninitialisedOnly) {
    pushinSynud_fast_delay_a_fast_result_down_in_1ToDevice(uninitialisedOnly);
}

void pushinSynud_fast_delay_a_fast_result_up_in_1ToDevice(bool uninitialisedOnly) {
}

void pushud_fast_delay_a_fast_result_up_in_1StateToDevice(bool uninitialisedOnly) {
    pushinSynud_fast_delay_a_fast_result_up_in_1ToDevice(uninitialisedOnly);
}

void pushinSynud_no_delay_a_fast_result_down_in_2ToDevice(bool uninitialisedOnly) {
}

void pushud_no_delay_a_fast_result_down_in_2StateToDevice(bool uninitialisedOnly) {
    pushinSynud_no_delay_a_fast_result_down_in_2ToDevice(uninitialisedOnly);
}

void pushinSynud_no_delay_a_fast_result_up_in_2ToDevice(bool uninitialisedOnly) {
}

void pushud_no_delay_a_fast_result_up_in_2StateToDevice(bool uninitialisedOnly) {
    pushinSynud_no_delay_a_fast_result_up_in_2ToDevice(uninitialisedOnly);
}

void pushinSynud_no_delay_a_slow_result_down_in_1ToDevice(bool uninitialisedOnly) {
}

void pushud_no_delay_a_slow_result_down_in_1StateToDevice(bool uninitialisedOnly) {
    pushinSynud_no_delay_a_slow_result_down_in_1ToDevice(uninitialisedOnly);
}

void pushinSynud_no_delay_a_slow_result_up_in_1ToDevice(bool uninitialisedOnly) {
}

void pushud_no_delay_a_slow_result_up_in_1StateToDevice(bool uninitialisedOnly) {
    pushinSynud_no_delay_a_slow_result_up_in_1ToDevice(uninitialisedOnly);
}

void pushinSynud_slow_delay_a_slow_result_down_in_2ToDevice(bool uninitialisedOnly) {
}

void pushud_slow_delay_a_slow_result_down_in_2StateToDevice(bool uninitialisedOnly) {
    pushinSynud_slow_delay_a_slow_result_down_in_2ToDevice(uninitialisedOnly);
}

void pushinSynud_slow_delay_a_slow_result_up_in_2ToDevice(bool uninitialisedOnly) {
}

void pushud_slow_delay_a_slow_result_up_in_2StateToDevice(bool uninitialisedOnly) {
    pushinSynud_slow_delay_a_slow_result_up_in_2ToDevice(uninitialisedOnly);
}


// ------------------------------------------------------------------------
// copying things from device
// ------------------------------------------------------------------------
void pullWorldSpikesFromDevice() {
}

void pullWorldCurrentSpikesFromDevice() {
}

void pullaWorldFromDevice() {
}

void pullinWorldFromDevice() {
}

void pullWorldStateFromDevice() {
    pullaWorldFromDevice();
    pullinWorldFromDevice();
}

void pullfast_result_downSpikesFromDevice() {
}

void pullfast_result_downCurrentSpikesFromDevice() {
}

void pulloutfast_result_downFromDevice() {
}

void pullfast_result_downStateFromDevice() {
    pulloutfast_result_downFromDevice();
}

void pullfast_result_leftSpikesFromDevice() {
}

void pullfast_result_leftCurrentSpikesFromDevice() {
}

void pulloutfast_result_leftFromDevice() {
}

void pullfast_result_leftStateFromDevice() {
    pulloutfast_result_leftFromDevice();
}

void pullfast_result_rightSpikesFromDevice() {
}

void pullfast_result_rightCurrentSpikesFromDevice() {
}

void pulloutfast_result_rightFromDevice() {
}

void pullfast_result_rightStateFromDevice() {
    pulloutfast_result_rightFromDevice();
}

void pullfast_result_upSpikesFromDevice() {
}

void pullfast_result_upCurrentSpikesFromDevice() {
}

void pulloutfast_result_upFromDevice() {
}

void pullfast_result_upStateFromDevice() {
    pulloutfast_result_upFromDevice();
}

void pullforwardSpikesFromDevice() {
}

void pullforwardCurrentSpikesFromDevice() {
}

void pullvalforwardFromDevice() {
}

void pullforwardStateFromDevice() {
    pullvalforwardFromDevice();
}

void pullleftSpikesFromDevice() {
}

void pullleftCurrentSpikesFromDevice() {
}

void pulloutleftFromDevice() {
}

void pullleftStateFromDevice() {
    pulloutleftFromDevice();
}

void pulllr_fast_delaySpikesFromDevice() {
}

void pulllr_fast_delayCurrentSpikesFromDevice() {
}

void pullalr_fast_delayFromDevice() {
}

void pulllr_fast_delayStateFromDevice() {
    pullalr_fast_delayFromDevice();
}

void pulllr_no_delaySpikesFromDevice() {
}

void pulllr_no_delayCurrentSpikesFromDevice() {
}

void pullalr_no_delayFromDevice() {
}

void pulllr_no_delayStateFromDevice() {
    pullalr_no_delayFromDevice();
}

void pulllr_slow_delaySpikesFromDevice() {
}

void pulllr_slow_delayCurrentSpikesFromDevice() {
}

void pullalr_slow_delayFromDevice() {
}

void pulllr_slow_delayStateFromDevice() {
    pullalr_slow_delayFromDevice();
}

void pullpr_and_lamina_lrSpikesFromDevice() {
}

void pullpr_and_lamina_lrCurrentSpikesFromDevice() {
}

void pullapr_and_lamina_lrFromDevice() {
}

void pulla_negpr_and_lamina_lrFromDevice() {
}

void pulladappr_and_lamina_lrFromDevice() {
}

void pulladap_negpr_and_lamina_lrFromDevice() {
}

void pulloutpr_and_lamina_lrFromDevice() {
}

void pullprev_inpr_and_lamina_lrFromDevice() {
}

void pullpr_and_lamina_lrStateFromDevice() {
    pullapr_and_lamina_lrFromDevice();
    pulla_negpr_and_lamina_lrFromDevice();
    pulladappr_and_lamina_lrFromDevice();
    pulladap_negpr_and_lamina_lrFromDevice();
    pulloutpr_and_lamina_lrFromDevice();
    pullprev_inpr_and_lamina_lrFromDevice();
}

void pullpr_and_lamina_udSpikesFromDevice() {
}

void pullpr_and_lamina_udCurrentSpikesFromDevice() {
}

void pullapr_and_lamina_udFromDevice() {
}

void pulla_negpr_and_lamina_udFromDevice() {
}

void pulladappr_and_lamina_udFromDevice() {
}

void pulladap_negpr_and_lamina_udFromDevice() {
}

void pulloutpr_and_lamina_udFromDevice() {
}

void pullprev_inpr_and_lamina_udFromDevice() {
}

void pullpr_and_lamina_udStateFromDevice() {
    pullapr_and_lamina_udFromDevice();
    pulla_negpr_and_lamina_udFromDevice();
    pulladappr_and_lamina_udFromDevice();
    pulladap_negpr_and_lamina_udFromDevice();
    pulloutpr_and_lamina_udFromDevice();
    pullprev_inpr_and_lamina_udFromDevice();
}

void pullrightSpikesFromDevice() {
}

void pullrightCurrentSpikesFromDevice() {
}

void pulloutrightFromDevice() {
}

void pullrightStateFromDevice() {
    pulloutrightFromDevice();
}

void pullslow_result_downSpikesFromDevice() {
}

void pullslow_result_downCurrentSpikesFromDevice() {
}

void pulloutslow_result_downFromDevice() {
}

void pullslow_result_downStateFromDevice() {
    pulloutslow_result_downFromDevice();
}

void pullslow_result_leftSpikesFromDevice() {
}

void pullslow_result_leftCurrentSpikesFromDevice() {
}

void pulloutslow_result_leftFromDevice() {
}

void pullslow_result_leftStateFromDevice() {
    pulloutslow_result_leftFromDevice();
}

void pullslow_result_rightSpikesFromDevice() {
}

void pullslow_result_rightCurrentSpikesFromDevice() {
}

void pulloutslow_result_rightFromDevice() {
}

void pullslow_result_rightStateFromDevice() {
    pulloutslow_result_rightFromDevice();
}

void pullslow_result_upSpikesFromDevice() {
}

void pullslow_result_upCurrentSpikesFromDevice() {
}

void pulloutslow_result_upFromDevice() {
}

void pullslow_result_upStateFromDevice() {
    pulloutslow_result_upFromDevice();
}

void pullsum_hSpikesFromDevice() {
}

void pullsum_hCurrentSpikesFromDevice() {
}

void pullasum_hFromDevice() {
}

void pulla_revsum_hFromDevice() {
}

void pulla_slowsum_hFromDevice() {
}

void pulla_slow_revsum_hFromDevice() {
}

void pulldiffsum_hFromDevice() {
}

void pullrhd_progsum_hFromDevice() {
}

void pullwith_rhd_prog_smoothsum_hFromDevice() {
}

void pullwith_rhd_reg_smoothsum_hFromDevice() {
}

void pullsum_hStateFromDevice() {
    pullasum_hFromDevice();
    pulla_revsum_hFromDevice();
    pulla_slowsum_hFromDevice();
    pulla_slow_revsum_hFromDevice();
    pulldiffsum_hFromDevice();
    pullrhd_progsum_hFromDevice();
    pullwith_rhd_prog_smoothsum_hFromDevice();
    pullwith_rhd_reg_smoothsum_hFromDevice();
}

void pullsum_vSpikesFromDevice() {
}

void pullsum_vCurrentSpikesFromDevice() {
}

void pullasum_vFromDevice() {
}

void pulla_revsum_vFromDevice() {
}

void pulla_slowsum_vFromDevice() {
}

void pulla_slow_revsum_vFromDevice() {
}

void pulldiffsum_vFromDevice() {
}

void pullrhd_progsum_vFromDevice() {
}

void pullwith_rhd_prog_smoothsum_vFromDevice() {
}

void pullwith_rhd_reg_smoothsum_vFromDevice() {
}

void pullsum_vStateFromDevice() {
    pullasum_vFromDevice();
    pulla_revsum_vFromDevice();
    pulla_slowsum_vFromDevice();
    pulla_slow_revsum_vFromDevice();
    pulldiffsum_vFromDevice();
    pullrhd_progsum_vFromDevice();
    pullwith_rhd_prog_smoothsum_vFromDevice();
    pullwith_rhd_reg_smoothsum_vFromDevice();
}

void pullud_fast_delaySpikesFromDevice() {
}

void pullud_fast_delayCurrentSpikesFromDevice() {
}

void pullaud_fast_delayFromDevice() {
}

void pullud_fast_delayStateFromDevice() {
    pullaud_fast_delayFromDevice();
}

void pullud_no_delaySpikesFromDevice() {
}

void pullud_no_delayCurrentSpikesFromDevice() {
}

void pullaud_no_delayFromDevice() {
}

void pullud_no_delayStateFromDevice() {
    pullaud_no_delayFromDevice();
}

void pullud_slow_delaySpikesFromDevice() {
}

void pullud_slow_delayCurrentSpikesFromDevice() {
}

void pullaud_slow_delayFromDevice() {
}

void pullud_slow_delayStateFromDevice() {
    pullaud_slow_delayFromDevice();
}

void pullWorld_to_pr_and_lamina_lr_Synapse_0_weight_updateConnectivityFromDevice() {
}

void pullWorld_to_pr_and_lamina_ud_Synapse_0_weight_updateConnectivityFromDevice() {
}

void pullfast_result_left_out_sum_h_in_revConnectivityFromDevice() {
}

void pullfast_result_right_out_sum_h_inConnectivityFromDevice() {
}

void pulllr_fast_delay_a_fast_result_left_in_1ConnectivityFromDevice() {
}

void pulllr_fast_delay_a_fast_result_right_in_1ConnectivityFromDevice() {
}

void pulllr_no_delay_a_fast_result_left_in_2ConnectivityFromDevice() {
}

void pulllr_no_delay_a_fast_result_right_in_2ConnectivityFromDevice() {
}

void pulllr_no_delay_a_slow_result_left_in_1ConnectivityFromDevice() {
}

void pulllr_no_delay_a_slow_result_right_in_1ConnectivityFromDevice() {
}

void pulllr_slow_delay_a_slow_result_left_in_2ConnectivityFromDevice() {
}

void pulllr_slow_delay_a_slow_result_right_in_2ConnectivityFromDevice() {
}

void pullpr_and_lamina_lr_out_lr_fast_delay_inConnectivityFromDevice() {
}

void pullpr_and_lamina_lr_out_lr_no_delay_inConnectivityFromDevice() {
}

void pullpr_and_lamina_lr_out_lr_slow_delay_inConnectivityFromDevice() {
}

void pullpr_and_lamina_ud_out_ud_fast_delay_inConnectivityFromDevice() {
}

void pullpr_and_lamina_ud_out_ud_no_delay_inConnectivityFromDevice() {
}

void pullpr_and_lamina_ud_out_ud_slow_delay_inConnectivityFromDevice() {
}

void pullslow_result_left_out_sum_h_in_slow_revConnectivityFromDevice() {
}

void pullslow_result_right_out_sum_h_in_slowConnectivityFromDevice() {
}

void pullsum_h_diff_left_inConnectivityFromDevice() {
}

void pullsum_h_diff_right_inConnectivityFromDevice() {
}

void pullud_fast_delay_a_fast_result_down_in_1ConnectivityFromDevice() {
}

void pullud_fast_delay_a_fast_result_up_in_1ConnectivityFromDevice() {
}

void pullud_no_delay_a_fast_result_down_in_2ConnectivityFromDevice() {
}

void pullud_no_delay_a_fast_result_up_in_2ConnectivityFromDevice() {
}

void pullud_no_delay_a_slow_result_down_in_1ConnectivityFromDevice() {
}

void pullud_no_delay_a_slow_result_up_in_1ConnectivityFromDevice() {
}

void pullud_slow_delay_a_slow_result_down_in_2ConnectivityFromDevice() {
}

void pullud_slow_delay_a_slow_result_up_in_2ConnectivityFromDevice() {
}

void pullwWorld_to_pr_and_lamina_lr_Synapse_0_weight_updateFromDevice() {
}

void pullinSynWorld_to_pr_and_lamina_lr_Synapse_0_weight_updateFromDevice() {
}

void pullWorld_to_pr_and_lamina_lr_Synapse_0_weight_updateStateFromDevice() {
    pullwWorld_to_pr_and_lamina_lr_Synapse_0_weight_updateFromDevice();
    pullinSynWorld_to_pr_and_lamina_lr_Synapse_0_weight_updateFromDevice();
}

void pullwWorld_to_pr_and_lamina_ud_Synapse_0_weight_updateFromDevice() {
}

void pullinSynWorld_to_pr_and_lamina_ud_Synapse_0_weight_updateFromDevice() {
}

void pullWorld_to_pr_and_lamina_ud_Synapse_0_weight_updateStateFromDevice() {
    pullwWorld_to_pr_and_lamina_ud_Synapse_0_weight_updateFromDevice();
    pullinSynWorld_to_pr_and_lamina_ud_Synapse_0_weight_updateFromDevice();
}

void pullinSynfast_result_down_out_sum_v_inFromDevice() {
}

void pullfast_result_down_out_sum_v_inStateFromDevice() {
    pullinSynfast_result_down_out_sum_v_inFromDevice();
}

void pullinSynfast_result_left_out_sum_h_in_revFromDevice() {
}

void pullfast_result_left_out_sum_h_in_revStateFromDevice() {
    pullinSynfast_result_left_out_sum_h_in_revFromDevice();
}

void pullinSynfast_result_right_out_sum_h_inFromDevice() {
}

void pullfast_result_right_out_sum_h_inStateFromDevice() {
    pullinSynfast_result_right_out_sum_h_inFromDevice();
}

void pullinSynfast_result_up_out_sum_v_in_revFromDevice() {
}

void pullfast_result_up_out_sum_v_in_revStateFromDevice() {
    pullinSynfast_result_up_out_sum_v_in_revFromDevice();
}

void pullinSynlr_fast_delay_a_fast_result_left_in_1FromDevice() {
}

void pulllr_fast_delay_a_fast_result_left_in_1StateFromDevice() {
    pullinSynlr_fast_delay_a_fast_result_left_in_1FromDevice();
}

void pullinSynlr_fast_delay_a_fast_result_right_in_1FromDevice() {
}

void pulllr_fast_delay_a_fast_result_right_in_1StateFromDevice() {
    pullinSynlr_fast_delay_a_fast_result_right_in_1FromDevice();
}

void pullinSynlr_no_delay_a_fast_result_left_in_2FromDevice() {
}

void pulllr_no_delay_a_fast_result_left_in_2StateFromDevice() {
    pullinSynlr_no_delay_a_fast_result_left_in_2FromDevice();
}

void pullinSynlr_no_delay_a_fast_result_right_in_2FromDevice() {
}

void pulllr_no_delay_a_fast_result_right_in_2StateFromDevice() {
    pullinSynlr_no_delay_a_fast_result_right_in_2FromDevice();
}

void pullinSynlr_no_delay_a_slow_result_left_in_1FromDevice() {
}

void pulllr_no_delay_a_slow_result_left_in_1StateFromDevice() {
    pullinSynlr_no_delay_a_slow_result_left_in_1FromDevice();
}

void pullinSynlr_no_delay_a_slow_result_right_in_1FromDevice() {
}

void pulllr_no_delay_a_slow_result_right_in_1StateFromDevice() {
    pullinSynlr_no_delay_a_slow_result_right_in_1FromDevice();
}

void pullinSynlr_slow_delay_a_slow_result_left_in_2FromDevice() {
}

void pulllr_slow_delay_a_slow_result_left_in_2StateFromDevice() {
    pullinSynlr_slow_delay_a_slow_result_left_in_2FromDevice();
}

void pullinSynlr_slow_delay_a_slow_result_right_in_2FromDevice() {
}

void pulllr_slow_delay_a_slow_result_right_in_2StateFromDevice() {
    pullinSynlr_slow_delay_a_slow_result_right_in_2FromDevice();
}

void pullinSynpr_and_lamina_lr_out_lr_fast_delay_inFromDevice() {
}

void pullpr_and_lamina_lr_out_lr_fast_delay_inStateFromDevice() {
    pullinSynpr_and_lamina_lr_out_lr_fast_delay_inFromDevice();
}

void pullinSynpr_and_lamina_lr_out_lr_no_delay_inFromDevice() {
}

void pullpr_and_lamina_lr_out_lr_no_delay_inStateFromDevice() {
    pullinSynpr_and_lamina_lr_out_lr_no_delay_inFromDevice();
}

void pullinSynpr_and_lamina_lr_out_lr_slow_delay_inFromDevice() {
}

void pullpr_and_lamina_lr_out_lr_slow_delay_inStateFromDevice() {
    pullinSynpr_and_lamina_lr_out_lr_slow_delay_inFromDevice();
}

void pullinSynpr_and_lamina_ud_out_ud_fast_delay_inFromDevice() {
}

void pullpr_and_lamina_ud_out_ud_fast_delay_inStateFromDevice() {
    pullinSynpr_and_lamina_ud_out_ud_fast_delay_inFromDevice();
}

void pullinSynpr_and_lamina_ud_out_ud_no_delay_inFromDevice() {
}

void pullpr_and_lamina_ud_out_ud_no_delay_inStateFromDevice() {
    pullinSynpr_and_lamina_ud_out_ud_no_delay_inFromDevice();
}

void pullinSynpr_and_lamina_ud_out_ud_slow_delay_inFromDevice() {
}

void pullpr_and_lamina_ud_out_ud_slow_delay_inStateFromDevice() {
    pullinSynpr_and_lamina_ud_out_ud_slow_delay_inFromDevice();
}

void pullinSynslow_result_down_out_sum_v_in_slowFromDevice() {
}

void pullslow_result_down_out_sum_v_in_slowStateFromDevice() {
    pullinSynslow_result_down_out_sum_v_in_slowFromDevice();
}

void pullinSynslow_result_left_out_sum_h_in_slow_revFromDevice() {
}

void pullslow_result_left_out_sum_h_in_slow_revStateFromDevice() {
    pullinSynslow_result_left_out_sum_h_in_slow_revFromDevice();
}

void pullinSynslow_result_right_out_sum_h_in_slowFromDevice() {
}

void pullslow_result_right_out_sum_h_in_slowStateFromDevice() {
    pullinSynslow_result_right_out_sum_h_in_slowFromDevice();
}

void pullinSynslow_result_up_out_sum_v_in_slow_revFromDevice() {
}

void pullslow_result_up_out_sum_v_in_slow_revStateFromDevice() {
    pullinSynslow_result_up_out_sum_v_in_slow_revFromDevice();
}

void pullinSynsum_h_diff_left_inFromDevice() {
}

void pullsum_h_diff_left_inStateFromDevice() {
    pullinSynsum_h_diff_left_inFromDevice();
}

void pullinSynsum_h_diff_right_inFromDevice() {
}

void pullsum_h_diff_right_inStateFromDevice() {
    pullinSynsum_h_diff_right_inFromDevice();
}

void pullinSynud_fast_delay_a_fast_result_down_in_1FromDevice() {
}

void pullud_fast_delay_a_fast_result_down_in_1StateFromDevice() {
    pullinSynud_fast_delay_a_fast_result_down_in_1FromDevice();
}

void pullinSynud_fast_delay_a_fast_result_up_in_1FromDevice() {
}

void pullud_fast_delay_a_fast_result_up_in_1StateFromDevice() {
    pullinSynud_fast_delay_a_fast_result_up_in_1FromDevice();
}

void pullinSynud_no_delay_a_fast_result_down_in_2FromDevice() {
}

void pullud_no_delay_a_fast_result_down_in_2StateFromDevice() {
    pullinSynud_no_delay_a_fast_result_down_in_2FromDevice();
}

void pullinSynud_no_delay_a_fast_result_up_in_2FromDevice() {
}

void pullud_no_delay_a_fast_result_up_in_2StateFromDevice() {
    pullinSynud_no_delay_a_fast_result_up_in_2FromDevice();
}

void pullinSynud_no_delay_a_slow_result_down_in_1FromDevice() {
}

void pullud_no_delay_a_slow_result_down_in_1StateFromDevice() {
    pullinSynud_no_delay_a_slow_result_down_in_1FromDevice();
}

void pullinSynud_no_delay_a_slow_result_up_in_1FromDevice() {
}

void pullud_no_delay_a_slow_result_up_in_1StateFromDevice() {
    pullinSynud_no_delay_a_slow_result_up_in_1FromDevice();
}

void pullinSynud_slow_delay_a_slow_result_down_in_2FromDevice() {
}

void pullud_slow_delay_a_slow_result_down_in_2StateFromDevice() {
    pullinSynud_slow_delay_a_slow_result_down_in_2FromDevice();
}

void pullinSynud_slow_delay_a_slow_result_up_in_2FromDevice() {
}

void pullud_slow_delay_a_slow_result_up_in_2StateFromDevice() {
    pullinSynud_slow_delay_a_slow_result_up_in_2FromDevice();
}


void copyStateToDevice(bool uninitialisedOnly) {
    pushWorldStateToDevice(uninitialisedOnly);
    pushfast_result_downStateToDevice(uninitialisedOnly);
    pushfast_result_leftStateToDevice(uninitialisedOnly);
    pushfast_result_rightStateToDevice(uninitialisedOnly);
    pushfast_result_upStateToDevice(uninitialisedOnly);
    pushforwardStateToDevice(uninitialisedOnly);
    pushleftStateToDevice(uninitialisedOnly);
    pushlr_fast_delayStateToDevice(uninitialisedOnly);
    pushlr_no_delayStateToDevice(uninitialisedOnly);
    pushlr_slow_delayStateToDevice(uninitialisedOnly);
    pushpr_and_lamina_lrStateToDevice(uninitialisedOnly);
    pushpr_and_lamina_udStateToDevice(uninitialisedOnly);
    pushrightStateToDevice(uninitialisedOnly);
    pushslow_result_downStateToDevice(uninitialisedOnly);
    pushslow_result_leftStateToDevice(uninitialisedOnly);
    pushslow_result_rightStateToDevice(uninitialisedOnly);
    pushslow_result_upStateToDevice(uninitialisedOnly);
    pushsum_hStateToDevice(uninitialisedOnly);
    pushsum_vStateToDevice(uninitialisedOnly);
    pushud_fast_delayStateToDevice(uninitialisedOnly);
    pushud_no_delayStateToDevice(uninitialisedOnly);
    pushud_slow_delayStateToDevice(uninitialisedOnly);
    pushWorld_to_pr_and_lamina_lr_Synapse_0_weight_updateStateToDevice(uninitialisedOnly);
    pushWorld_to_pr_and_lamina_ud_Synapse_0_weight_updateStateToDevice(uninitialisedOnly);
    pushfast_result_down_out_sum_v_inStateToDevice(uninitialisedOnly);
    pushfast_result_left_out_sum_h_in_revStateToDevice(uninitialisedOnly);
    pushfast_result_right_out_sum_h_inStateToDevice(uninitialisedOnly);
    pushfast_result_up_out_sum_v_in_revStateToDevice(uninitialisedOnly);
    pushlr_fast_delay_a_fast_result_left_in_1StateToDevice(uninitialisedOnly);
    pushlr_fast_delay_a_fast_result_right_in_1StateToDevice(uninitialisedOnly);
    pushlr_no_delay_a_fast_result_left_in_2StateToDevice(uninitialisedOnly);
    pushlr_no_delay_a_fast_result_right_in_2StateToDevice(uninitialisedOnly);
    pushlr_no_delay_a_slow_result_left_in_1StateToDevice(uninitialisedOnly);
    pushlr_no_delay_a_slow_result_right_in_1StateToDevice(uninitialisedOnly);
    pushlr_slow_delay_a_slow_result_left_in_2StateToDevice(uninitialisedOnly);
    pushlr_slow_delay_a_slow_result_right_in_2StateToDevice(uninitialisedOnly);
    pushpr_and_lamina_lr_out_lr_fast_delay_inStateToDevice(uninitialisedOnly);
    pushpr_and_lamina_lr_out_lr_no_delay_inStateToDevice(uninitialisedOnly);
    pushpr_and_lamina_lr_out_lr_slow_delay_inStateToDevice(uninitialisedOnly);
    pushpr_and_lamina_ud_out_ud_fast_delay_inStateToDevice(uninitialisedOnly);
    pushpr_and_lamina_ud_out_ud_no_delay_inStateToDevice(uninitialisedOnly);
    pushpr_and_lamina_ud_out_ud_slow_delay_inStateToDevice(uninitialisedOnly);
    pushslow_result_down_out_sum_v_in_slowStateToDevice(uninitialisedOnly);
    pushslow_result_left_out_sum_h_in_slow_revStateToDevice(uninitialisedOnly);
    pushslow_result_right_out_sum_h_in_slowStateToDevice(uninitialisedOnly);
    pushslow_result_up_out_sum_v_in_slow_revStateToDevice(uninitialisedOnly);
    pushsum_h_diff_left_inStateToDevice(uninitialisedOnly);
    pushsum_h_diff_right_inStateToDevice(uninitialisedOnly);
    pushud_fast_delay_a_fast_result_down_in_1StateToDevice(uninitialisedOnly);
    pushud_fast_delay_a_fast_result_up_in_1StateToDevice(uninitialisedOnly);
    pushud_no_delay_a_fast_result_down_in_2StateToDevice(uninitialisedOnly);
    pushud_no_delay_a_fast_result_up_in_2StateToDevice(uninitialisedOnly);
    pushud_no_delay_a_slow_result_down_in_1StateToDevice(uninitialisedOnly);
    pushud_no_delay_a_slow_result_up_in_1StateToDevice(uninitialisedOnly);
    pushud_slow_delay_a_slow_result_down_in_2StateToDevice(uninitialisedOnly);
    pushud_slow_delay_a_slow_result_up_in_2StateToDevice(uninitialisedOnly);
}

void copyConnectivityToDevice(bool uninitialisedOnly) {
    pushWorld_to_pr_and_lamina_lr_Synapse_0_weight_updateConnectivityToDevice(uninitialisedOnly);
    pushWorld_to_pr_and_lamina_ud_Synapse_0_weight_updateConnectivityToDevice(uninitialisedOnly);
    pushfast_result_left_out_sum_h_in_revConnectivityToDevice(uninitialisedOnly);
    pushfast_result_right_out_sum_h_inConnectivityToDevice(uninitialisedOnly);
    pushlr_fast_delay_a_fast_result_left_in_1ConnectivityToDevice(uninitialisedOnly);
    pushlr_fast_delay_a_fast_result_right_in_1ConnectivityToDevice(uninitialisedOnly);
    pushlr_no_delay_a_fast_result_left_in_2ConnectivityToDevice(uninitialisedOnly);
    pushlr_no_delay_a_fast_result_right_in_2ConnectivityToDevice(uninitialisedOnly);
    pushlr_no_delay_a_slow_result_left_in_1ConnectivityToDevice(uninitialisedOnly);
    pushlr_no_delay_a_slow_result_right_in_1ConnectivityToDevice(uninitialisedOnly);
    pushlr_slow_delay_a_slow_result_left_in_2ConnectivityToDevice(uninitialisedOnly);
    pushlr_slow_delay_a_slow_result_right_in_2ConnectivityToDevice(uninitialisedOnly);
    pushpr_and_lamina_lr_out_lr_fast_delay_inConnectivityToDevice(uninitialisedOnly);
    pushpr_and_lamina_lr_out_lr_no_delay_inConnectivityToDevice(uninitialisedOnly);
    pushpr_and_lamina_lr_out_lr_slow_delay_inConnectivityToDevice(uninitialisedOnly);
    pushpr_and_lamina_ud_out_ud_fast_delay_inConnectivityToDevice(uninitialisedOnly);
    pushpr_and_lamina_ud_out_ud_no_delay_inConnectivityToDevice(uninitialisedOnly);
    pushpr_and_lamina_ud_out_ud_slow_delay_inConnectivityToDevice(uninitialisedOnly);
    pushslow_result_left_out_sum_h_in_slow_revConnectivityToDevice(uninitialisedOnly);
    pushslow_result_right_out_sum_h_in_slowConnectivityToDevice(uninitialisedOnly);
    pushsum_h_diff_left_inConnectivityToDevice(uninitialisedOnly);
    pushsum_h_diff_right_inConnectivityToDevice(uninitialisedOnly);
    pushud_fast_delay_a_fast_result_down_in_1ConnectivityToDevice(uninitialisedOnly);
    pushud_fast_delay_a_fast_result_up_in_1ConnectivityToDevice(uninitialisedOnly);
    pushud_no_delay_a_fast_result_down_in_2ConnectivityToDevice(uninitialisedOnly);
    pushud_no_delay_a_fast_result_up_in_2ConnectivityToDevice(uninitialisedOnly);
    pushud_no_delay_a_slow_result_down_in_1ConnectivityToDevice(uninitialisedOnly);
    pushud_no_delay_a_slow_result_up_in_1ConnectivityToDevice(uninitialisedOnly);
    pushud_slow_delay_a_slow_result_down_in_2ConnectivityToDevice(uninitialisedOnly);
    pushud_slow_delay_a_slow_result_up_in_2ConnectivityToDevice(uninitialisedOnly);
}

void copyStateFromDevice() {
    pullWorldStateFromDevice();
    pullfast_result_downStateFromDevice();
    pullfast_result_leftStateFromDevice();
    pullfast_result_rightStateFromDevice();
    pullfast_result_upStateFromDevice();
    pullforwardStateFromDevice();
    pullleftStateFromDevice();
    pulllr_fast_delayStateFromDevice();
    pulllr_no_delayStateFromDevice();
    pulllr_slow_delayStateFromDevice();
    pullpr_and_lamina_lrStateFromDevice();
    pullpr_and_lamina_udStateFromDevice();
    pullrightStateFromDevice();
    pullslow_result_downStateFromDevice();
    pullslow_result_leftStateFromDevice();
    pullslow_result_rightStateFromDevice();
    pullslow_result_upStateFromDevice();
    pullsum_hStateFromDevice();
    pullsum_vStateFromDevice();
    pullud_fast_delayStateFromDevice();
    pullud_no_delayStateFromDevice();
    pullud_slow_delayStateFromDevice();
    pullWorld_to_pr_and_lamina_lr_Synapse_0_weight_updateStateFromDevice();
    pullWorld_to_pr_and_lamina_ud_Synapse_0_weight_updateStateFromDevice();
    pullfast_result_down_out_sum_v_inStateFromDevice();
    pullfast_result_left_out_sum_h_in_revStateFromDevice();
    pullfast_result_right_out_sum_h_inStateFromDevice();
    pullfast_result_up_out_sum_v_in_revStateFromDevice();
    pulllr_fast_delay_a_fast_result_left_in_1StateFromDevice();
    pulllr_fast_delay_a_fast_result_right_in_1StateFromDevice();
    pulllr_no_delay_a_fast_result_left_in_2StateFromDevice();
    pulllr_no_delay_a_fast_result_right_in_2StateFromDevice();
    pulllr_no_delay_a_slow_result_left_in_1StateFromDevice();
    pulllr_no_delay_a_slow_result_right_in_1StateFromDevice();
    pulllr_slow_delay_a_slow_result_left_in_2StateFromDevice();
    pulllr_slow_delay_a_slow_result_right_in_2StateFromDevice();
    pullpr_and_lamina_lr_out_lr_fast_delay_inStateFromDevice();
    pullpr_and_lamina_lr_out_lr_no_delay_inStateFromDevice();
    pullpr_and_lamina_lr_out_lr_slow_delay_inStateFromDevice();
    pullpr_and_lamina_ud_out_ud_fast_delay_inStateFromDevice();
    pullpr_and_lamina_ud_out_ud_no_delay_inStateFromDevice();
    pullpr_and_lamina_ud_out_ud_slow_delay_inStateFromDevice();
    pullslow_result_down_out_sum_v_in_slowStateFromDevice();
    pullslow_result_left_out_sum_h_in_slow_revStateFromDevice();
    pullslow_result_right_out_sum_h_in_slowStateFromDevice();
    pullslow_result_up_out_sum_v_in_slow_revStateFromDevice();
    pullsum_h_diff_left_inStateFromDevice();
    pullsum_h_diff_right_inStateFromDevice();
    pullud_fast_delay_a_fast_result_down_in_1StateFromDevice();
    pullud_fast_delay_a_fast_result_up_in_1StateFromDevice();
    pullud_no_delay_a_fast_result_down_in_2StateFromDevice();
    pullud_no_delay_a_fast_result_up_in_2StateFromDevice();
    pullud_no_delay_a_slow_result_down_in_1StateFromDevice();
    pullud_no_delay_a_slow_result_up_in_1StateFromDevice();
    pullud_slow_delay_a_slow_result_down_in_2StateFromDevice();
    pullud_slow_delay_a_slow_result_up_in_2StateFromDevice();
}

void copyCurrentSpikesFromDevice() {
    pullWorldCurrentSpikesFromDevice();
    pullfast_result_downCurrentSpikesFromDevice();
    pullfast_result_leftCurrentSpikesFromDevice();
    pullfast_result_rightCurrentSpikesFromDevice();
    pullfast_result_upCurrentSpikesFromDevice();
    pullforwardCurrentSpikesFromDevice();
    pullleftCurrentSpikesFromDevice();
    pulllr_fast_delayCurrentSpikesFromDevice();
    pulllr_no_delayCurrentSpikesFromDevice();
    pulllr_slow_delayCurrentSpikesFromDevice();
    pullpr_and_lamina_lrCurrentSpikesFromDevice();
    pullpr_and_lamina_udCurrentSpikesFromDevice();
    pullrightCurrentSpikesFromDevice();
    pullslow_result_downCurrentSpikesFromDevice();
    pullslow_result_leftCurrentSpikesFromDevice();
    pullslow_result_rightCurrentSpikesFromDevice();
    pullslow_result_upCurrentSpikesFromDevice();
    pullsum_hCurrentSpikesFromDevice();
    pullsum_vCurrentSpikesFromDevice();
    pullud_fast_delayCurrentSpikesFromDevice();
    pullud_no_delayCurrentSpikesFromDevice();
    pullud_slow_delayCurrentSpikesFromDevice();
}

void copyCurrentSpikeEventsFromDevice() {
}

void allocateMem() {
    // ------------------------------------------------------------------------
    // global variables
    // ------------------------------------------------------------------------
    
    // ------------------------------------------------------------------------
    // timers
    // ------------------------------------------------------------------------
    // ------------------------------------------------------------------------
    // remote neuron groups
    // ------------------------------------------------------------------------
    
    // ------------------------------------------------------------------------
    // local neuron groups
    // ------------------------------------------------------------------------
    glbSpkCntWorld = new unsigned int[1];
    glbSpkWorld = new unsigned int[684];
    aWorld = new scalar[684];
    inWorld = new scalar[684];
    glbSpkCntfast_result_down = new unsigned int[1];
    glbSpkfast_result_down = new unsigned int[684];
    outfast_result_down = new scalar[684];
    glbSpkCntfast_result_left = new unsigned int[1];
    glbSpkfast_result_left = new unsigned int[684];
    outfast_result_left = new scalar[684];
    glbSpkCntfast_result_right = new unsigned int[1];
    glbSpkfast_result_right = new unsigned int[684];
    outfast_result_right = new scalar[684];
    glbSpkCntfast_result_up = new unsigned int[1];
    glbSpkfast_result_up = new unsigned int[684];
    outfast_result_up = new scalar[684];
    glbSpkCntforward = new unsigned int[1];
    glbSpkforward = new unsigned int[1];
    valforward = new scalar[1];
    glbSpkCntleft = new unsigned int[1];
    glbSpkleft = new unsigned int[1];
    outleft = new scalar[1];
    glbSpkCntlr_fast_delay = new unsigned int[1];
    glbSpklr_fast_delay = new unsigned int[684];
    alr_fast_delay = new scalar[684];
    glbSpkCntlr_no_delay = new unsigned int[1];
    glbSpklr_no_delay = new unsigned int[684];
    alr_no_delay = new scalar[684];
    glbSpkCntlr_slow_delay = new unsigned int[1];
    glbSpklr_slow_delay = new unsigned int[684];
    alr_slow_delay = new scalar[684];
    glbSpkCntpr_and_lamina_lr = new unsigned int[1];
    glbSpkpr_and_lamina_lr = new unsigned int[684];
    apr_and_lamina_lr = new scalar[684];
    a_negpr_and_lamina_lr = new scalar[684];
    adappr_and_lamina_lr = new scalar[684];
    adap_negpr_and_lamina_lr = new scalar[684];
    outpr_and_lamina_lr = new scalar[684];
    prev_inpr_and_lamina_lr = new scalar[684];
    glbSpkCntpr_and_lamina_ud = new unsigned int[1];
    glbSpkpr_and_lamina_ud = new unsigned int[684];
    apr_and_lamina_ud = new scalar[684];
    a_negpr_and_lamina_ud = new scalar[684];
    adappr_and_lamina_ud = new scalar[684];
    adap_negpr_and_lamina_ud = new scalar[684];
    outpr_and_lamina_ud = new scalar[684];
    prev_inpr_and_lamina_ud = new scalar[684];
    glbSpkCntright = new unsigned int[1];
    glbSpkright = new unsigned int[1];
    outright = new scalar[1];
    glbSpkCntslow_result_down = new unsigned int[1];
    glbSpkslow_result_down = new unsigned int[684];
    outslow_result_down = new scalar[684];
    glbSpkCntslow_result_left = new unsigned int[1];
    glbSpkslow_result_left = new unsigned int[684];
    outslow_result_left = new scalar[684];
    glbSpkCntslow_result_right = new unsigned int[1];
    glbSpkslow_result_right = new unsigned int[684];
    outslow_result_right = new scalar[684];
    glbSpkCntslow_result_up = new unsigned int[1];
    glbSpkslow_result_up = new unsigned int[684];
    outslow_result_up = new scalar[684];
    glbSpkCntsum_h = new unsigned int[1];
    glbSpksum_h = new unsigned int[2];
    asum_h = new scalar[2];
    a_revsum_h = new scalar[2];
    a_slowsum_h = new scalar[2];
    a_slow_revsum_h = new scalar[2];
    diffsum_h = new scalar[2];
    rhd_progsum_h = new scalar[2];
    with_rhd_prog_smoothsum_h = new scalar[2];
    with_rhd_reg_smoothsum_h = new scalar[2];
    glbSpkCntsum_v = new unsigned int[1];
    glbSpksum_v = new unsigned int[1];
    asum_v = new scalar[1];
    a_revsum_v = new scalar[1];
    a_slowsum_v = new scalar[1];
    a_slow_revsum_v = new scalar[1];
    diffsum_v = new scalar[1];
    rhd_progsum_v = new scalar[1];
    with_rhd_prog_smoothsum_v = new scalar[1];
    with_rhd_reg_smoothsum_v = new scalar[1];
    glbSpkCntud_fast_delay = new unsigned int[1];
    glbSpkud_fast_delay = new unsigned int[684];
    aud_fast_delay = new scalar[684];
    glbSpkCntud_no_delay = new unsigned int[1];
    glbSpkud_no_delay = new unsigned int[684];
    aud_no_delay = new scalar[684];
    glbSpkCntud_slow_delay = new unsigned int[1];
    glbSpkud_slow_delay = new unsigned int[684];
    aud_slow_delay = new scalar[684];
    
    // ------------------------------------------------------------------------
    // postsynaptic variables
    // ------------------------------------------------------------------------
    inSynud_no_delay_a_fast_result_down_in_2 = new float[684];
    inSynud_fast_delay_a_fast_result_down_in_1 = new float[684];
    inSynlr_no_delay_a_fast_result_left_in_2 = new float[684];
    inSynlr_fast_delay_a_fast_result_left_in_1 = new float[684];
    inSynlr_no_delay_a_fast_result_right_in_2 = new float[684];
    inSynlr_fast_delay_a_fast_result_right_in_1 = new float[684];
    inSynud_no_delay_a_fast_result_up_in_2 = new float[684];
    inSynud_fast_delay_a_fast_result_up_in_1 = new float[684];
    inSynsum_h_diff_left_in = new float[1];
    inSynpr_and_lamina_lr_out_lr_fast_delay_in = new float[684];
    inSynpr_and_lamina_lr_out_lr_no_delay_in = new float[684];
    inSynpr_and_lamina_lr_out_lr_slow_delay_in = new float[684];
    inSynWorld_to_pr_and_lamina_lr_Synapse_0_weight_update = new float[684];
    inSynWorld_to_pr_and_lamina_ud_Synapse_0_weight_update = new float[684];
    inSynsum_h_diff_right_in = new float[1];
    inSynud_slow_delay_a_slow_result_down_in_2 = new float[684];
    inSynud_no_delay_a_slow_result_down_in_1 = new float[684];
    inSynlr_no_delay_a_slow_result_left_in_1 = new float[684];
    inSynlr_slow_delay_a_slow_result_left_in_2 = new float[684];
    inSynlr_no_delay_a_slow_result_right_in_1 = new float[684];
    inSynlr_slow_delay_a_slow_result_right_in_2 = new float[684];
    inSynud_no_delay_a_slow_result_up_in_1 = new float[684];
    inSynud_slow_delay_a_slow_result_up_in_2 = new float[684];
    inSynslow_result_right_out_sum_h_in_slow = new float[2];
    inSynslow_result_left_out_sum_h_in_slow_rev = new float[2];
    inSynfast_result_right_out_sum_h_in = new float[2];
    inSynfast_result_left_out_sum_h_in_rev = new float[2];
    inSynslow_result_up_out_sum_v_in_slow_rev = new float[1];
    inSynslow_result_down_out_sum_v_in_slow = new float[1];
    inSynfast_result_up_out_sum_v_in_rev = new float[1];
    inSynfast_result_down_out_sum_v_in = new float[1];
    inSynpr_and_lamina_ud_out_ud_fast_delay_in = new float[684];
    inSynpr_and_lamina_ud_out_ud_no_delay_in = new float[684];
    inSynpr_and_lamina_ud_out_ud_slow_delay_in = new float[684];
    
    // ------------------------------------------------------------------------
    // synapse connectivity
    // ------------------------------------------------------------------------
    rowLengthWorld_to_pr_and_lamina_lr_Synapse_0_weight_update = new unsigned int[684];
    indWorld_to_pr_and_lamina_lr_Synapse_0_weight_update = new unsigned int[4104];
    rowLengthWorld_to_pr_and_lamina_ud_Synapse_0_weight_update = new unsigned int[684];
    indWorld_to_pr_and_lamina_ud_Synapse_0_weight_update = new unsigned int[4104];
    rowLengthfast_result_left_out_sum_h_in_rev = new unsigned int[684];
    indfast_result_left_out_sum_h_in_rev = new unsigned int[684];
    rowLengthfast_result_right_out_sum_h_in = new unsigned int[684];
    indfast_result_right_out_sum_h_in = new unsigned int[684];
    rowLengthlr_fast_delay_a_fast_result_left_in_1 = new unsigned int[684];
    indlr_fast_delay_a_fast_result_left_in_1 = new unsigned int[684];
    rowLengthlr_fast_delay_a_fast_result_right_in_1 = new unsigned int[684];
    indlr_fast_delay_a_fast_result_right_in_1 = new unsigned int[684];
    rowLengthlr_no_delay_a_fast_result_left_in_2 = new unsigned int[684];
    indlr_no_delay_a_fast_result_left_in_2 = new unsigned int[684];
    rowLengthlr_no_delay_a_fast_result_right_in_2 = new unsigned int[684];
    indlr_no_delay_a_fast_result_right_in_2 = new unsigned int[684];
    rowLengthlr_no_delay_a_slow_result_left_in_1 = new unsigned int[684];
    indlr_no_delay_a_slow_result_left_in_1 = new unsigned int[684];
    rowLengthlr_no_delay_a_slow_result_right_in_1 = new unsigned int[684];
    indlr_no_delay_a_slow_result_right_in_1 = new unsigned int[684];
    rowLengthlr_slow_delay_a_slow_result_left_in_2 = new unsigned int[684];
    indlr_slow_delay_a_slow_result_left_in_2 = new unsigned int[684];
    rowLengthlr_slow_delay_a_slow_result_right_in_2 = new unsigned int[684];
    indlr_slow_delay_a_slow_result_right_in_2 = new unsigned int[684];
    rowLengthpr_and_lamina_lr_out_lr_fast_delay_in = new unsigned int[684];
    indpr_and_lamina_lr_out_lr_fast_delay_in = new unsigned int[684];
    rowLengthpr_and_lamina_lr_out_lr_no_delay_in = new unsigned int[684];
    indpr_and_lamina_lr_out_lr_no_delay_in = new unsigned int[684];
    rowLengthpr_and_lamina_lr_out_lr_slow_delay_in = new unsigned int[684];
    indpr_and_lamina_lr_out_lr_slow_delay_in = new unsigned int[684];
    rowLengthpr_and_lamina_ud_out_ud_fast_delay_in = new unsigned int[684];
    indpr_and_lamina_ud_out_ud_fast_delay_in = new unsigned int[684];
    rowLengthpr_and_lamina_ud_out_ud_no_delay_in = new unsigned int[684];
    indpr_and_lamina_ud_out_ud_no_delay_in = new unsigned int[684];
    rowLengthpr_and_lamina_ud_out_ud_slow_delay_in = new unsigned int[684];
    indpr_and_lamina_ud_out_ud_slow_delay_in = new unsigned int[684];
    rowLengthslow_result_left_out_sum_h_in_slow_rev = new unsigned int[684];
    indslow_result_left_out_sum_h_in_slow_rev = new unsigned int[684];
    rowLengthslow_result_right_out_sum_h_in_slow = new unsigned int[684];
    indslow_result_right_out_sum_h_in_slow = new unsigned int[684];
    rowLengthsum_h_diff_left_in = new unsigned int[2];
    indsum_h_diff_left_in = new unsigned int[2];
    rowLengthsum_h_diff_right_in = new unsigned int[2];
    indsum_h_diff_right_in = new unsigned int[2];
    rowLengthud_fast_delay_a_fast_result_down_in_1 = new unsigned int[684];
    indud_fast_delay_a_fast_result_down_in_1 = new unsigned int[684];
    rowLengthud_fast_delay_a_fast_result_up_in_1 = new unsigned int[684];
    indud_fast_delay_a_fast_result_up_in_1 = new unsigned int[684];
    rowLengthud_no_delay_a_fast_result_down_in_2 = new unsigned int[684];
    indud_no_delay_a_fast_result_down_in_2 = new unsigned int[684];
    rowLengthud_no_delay_a_fast_result_up_in_2 = new unsigned int[684];
    indud_no_delay_a_fast_result_up_in_2 = new unsigned int[684];
    rowLengthud_no_delay_a_slow_result_down_in_1 = new unsigned int[684];
    indud_no_delay_a_slow_result_down_in_1 = new unsigned int[684];
    rowLengthud_no_delay_a_slow_result_up_in_1 = new unsigned int[684];
    indud_no_delay_a_slow_result_up_in_1 = new unsigned int[684];
    rowLengthud_slow_delay_a_slow_result_down_in_2 = new unsigned int[684];
    indud_slow_delay_a_slow_result_down_in_2 = new unsigned int[684];
    rowLengthud_slow_delay_a_slow_result_up_in_2 = new unsigned int[684];
    indud_slow_delay_a_slow_result_up_in_2 = new unsigned int[684];
    
    // ------------------------------------------------------------------------
    // synapse variables
    // ------------------------------------------------------------------------
    wWorld_to_pr_and_lamina_lr_Synapse_0_weight_update = new scalar[4104];
    wWorld_to_pr_and_lamina_ud_Synapse_0_weight_update = new scalar[4104];
    
}

void freeMem() {
    // ------------------------------------------------------------------------
    // global variables
    // ------------------------------------------------------------------------
    
    // ------------------------------------------------------------------------
    // timers
    // ------------------------------------------------------------------------
    // ------------------------------------------------------------------------
    // remote neuron groups
    // ------------------------------------------------------------------------
    
    // ------------------------------------------------------------------------
    // local neuron groups
    // ------------------------------------------------------------------------
    delete[] glbSpkCntWorld;
    delete[] glbSpkWorld;
    delete[] aWorld;
    delete[] inWorld;
    delete[] glbSpkCntfast_result_down;
    delete[] glbSpkfast_result_down;
    delete[] outfast_result_down;
    delete[] glbSpkCntfast_result_left;
    delete[] glbSpkfast_result_left;
    delete[] outfast_result_left;
    delete[] glbSpkCntfast_result_right;
    delete[] glbSpkfast_result_right;
    delete[] outfast_result_right;
    delete[] glbSpkCntfast_result_up;
    delete[] glbSpkfast_result_up;
    delete[] outfast_result_up;
    delete[] glbSpkCntforward;
    delete[] glbSpkforward;
    delete[] valforward;
    delete[] glbSpkCntleft;
    delete[] glbSpkleft;
    delete[] outleft;
    delete[] glbSpkCntlr_fast_delay;
    delete[] glbSpklr_fast_delay;
    delete[] alr_fast_delay;
    delete[] glbSpkCntlr_no_delay;
    delete[] glbSpklr_no_delay;
    delete[] alr_no_delay;
    delete[] glbSpkCntlr_slow_delay;
    delete[] glbSpklr_slow_delay;
    delete[] alr_slow_delay;
    delete[] glbSpkCntpr_and_lamina_lr;
    delete[] glbSpkpr_and_lamina_lr;
    delete[] apr_and_lamina_lr;
    delete[] a_negpr_and_lamina_lr;
    delete[] adappr_and_lamina_lr;
    delete[] adap_negpr_and_lamina_lr;
    delete[] outpr_and_lamina_lr;
    delete[] prev_inpr_and_lamina_lr;
    delete[] glbSpkCntpr_and_lamina_ud;
    delete[] glbSpkpr_and_lamina_ud;
    delete[] apr_and_lamina_ud;
    delete[] a_negpr_and_lamina_ud;
    delete[] adappr_and_lamina_ud;
    delete[] adap_negpr_and_lamina_ud;
    delete[] outpr_and_lamina_ud;
    delete[] prev_inpr_and_lamina_ud;
    delete[] glbSpkCntright;
    delete[] glbSpkright;
    delete[] outright;
    delete[] glbSpkCntslow_result_down;
    delete[] glbSpkslow_result_down;
    delete[] outslow_result_down;
    delete[] glbSpkCntslow_result_left;
    delete[] glbSpkslow_result_left;
    delete[] outslow_result_left;
    delete[] glbSpkCntslow_result_right;
    delete[] glbSpkslow_result_right;
    delete[] outslow_result_right;
    delete[] glbSpkCntslow_result_up;
    delete[] glbSpkslow_result_up;
    delete[] outslow_result_up;
    delete[] glbSpkCntsum_h;
    delete[] glbSpksum_h;
    delete[] asum_h;
    delete[] a_revsum_h;
    delete[] a_slowsum_h;
    delete[] a_slow_revsum_h;
    delete[] diffsum_h;
    delete[] rhd_progsum_h;
    delete[] with_rhd_prog_smoothsum_h;
    delete[] with_rhd_reg_smoothsum_h;
    delete[] glbSpkCntsum_v;
    delete[] glbSpksum_v;
    delete[] asum_v;
    delete[] a_revsum_v;
    delete[] a_slowsum_v;
    delete[] a_slow_revsum_v;
    delete[] diffsum_v;
    delete[] rhd_progsum_v;
    delete[] with_rhd_prog_smoothsum_v;
    delete[] with_rhd_reg_smoothsum_v;
    delete[] glbSpkCntud_fast_delay;
    delete[] glbSpkud_fast_delay;
    delete[] aud_fast_delay;
    delete[] glbSpkCntud_no_delay;
    delete[] glbSpkud_no_delay;
    delete[] aud_no_delay;
    delete[] glbSpkCntud_slow_delay;
    delete[] glbSpkud_slow_delay;
    delete[] aud_slow_delay;
    
    // ------------------------------------------------------------------------
    // postsynaptic variables
    // ------------------------------------------------------------------------
    delete[] inSynud_no_delay_a_fast_result_down_in_2;
    delete[] inSynud_fast_delay_a_fast_result_down_in_1;
    delete[] inSynlr_no_delay_a_fast_result_left_in_2;
    delete[] inSynlr_fast_delay_a_fast_result_left_in_1;
    delete[] inSynlr_no_delay_a_fast_result_right_in_2;
    delete[] inSynlr_fast_delay_a_fast_result_right_in_1;
    delete[] inSynud_no_delay_a_fast_result_up_in_2;
    delete[] inSynud_fast_delay_a_fast_result_up_in_1;
    delete[] inSynsum_h_diff_left_in;
    delete[] inSynpr_and_lamina_lr_out_lr_fast_delay_in;
    delete[] inSynpr_and_lamina_lr_out_lr_no_delay_in;
    delete[] inSynpr_and_lamina_lr_out_lr_slow_delay_in;
    delete[] inSynWorld_to_pr_and_lamina_lr_Synapse_0_weight_update;
    delete[] inSynWorld_to_pr_and_lamina_ud_Synapse_0_weight_update;
    delete[] inSynsum_h_diff_right_in;
    delete[] inSynud_slow_delay_a_slow_result_down_in_2;
    delete[] inSynud_no_delay_a_slow_result_down_in_1;
    delete[] inSynlr_no_delay_a_slow_result_left_in_1;
    delete[] inSynlr_slow_delay_a_slow_result_left_in_2;
    delete[] inSynlr_no_delay_a_slow_result_right_in_1;
    delete[] inSynlr_slow_delay_a_slow_result_right_in_2;
    delete[] inSynud_no_delay_a_slow_result_up_in_1;
    delete[] inSynud_slow_delay_a_slow_result_up_in_2;
    delete[] inSynslow_result_right_out_sum_h_in_slow;
    delete[] inSynslow_result_left_out_sum_h_in_slow_rev;
    delete[] inSynfast_result_right_out_sum_h_in;
    delete[] inSynfast_result_left_out_sum_h_in_rev;
    delete[] inSynslow_result_up_out_sum_v_in_slow_rev;
    delete[] inSynslow_result_down_out_sum_v_in_slow;
    delete[] inSynfast_result_up_out_sum_v_in_rev;
    delete[] inSynfast_result_down_out_sum_v_in;
    delete[] inSynpr_and_lamina_ud_out_ud_fast_delay_in;
    delete[] inSynpr_and_lamina_ud_out_ud_no_delay_in;
    delete[] inSynpr_and_lamina_ud_out_ud_slow_delay_in;
    
    // ------------------------------------------------------------------------
    // synapse connectivity
    // ------------------------------------------------------------------------
    delete[] rowLengthWorld_to_pr_and_lamina_lr_Synapse_0_weight_update;
    delete[] indWorld_to_pr_and_lamina_lr_Synapse_0_weight_update;
    delete[] rowLengthWorld_to_pr_and_lamina_ud_Synapse_0_weight_update;
    delete[] indWorld_to_pr_and_lamina_ud_Synapse_0_weight_update;
    delete[] rowLengthfast_result_left_out_sum_h_in_rev;
    delete[] indfast_result_left_out_sum_h_in_rev;
    delete[] rowLengthfast_result_right_out_sum_h_in;
    delete[] indfast_result_right_out_sum_h_in;
    delete[] rowLengthlr_fast_delay_a_fast_result_left_in_1;
    delete[] indlr_fast_delay_a_fast_result_left_in_1;
    delete[] rowLengthlr_fast_delay_a_fast_result_right_in_1;
    delete[] indlr_fast_delay_a_fast_result_right_in_1;
    delete[] rowLengthlr_no_delay_a_fast_result_left_in_2;
    delete[] indlr_no_delay_a_fast_result_left_in_2;
    delete[] rowLengthlr_no_delay_a_fast_result_right_in_2;
    delete[] indlr_no_delay_a_fast_result_right_in_2;
    delete[] rowLengthlr_no_delay_a_slow_result_left_in_1;
    delete[] indlr_no_delay_a_slow_result_left_in_1;
    delete[] rowLengthlr_no_delay_a_slow_result_right_in_1;
    delete[] indlr_no_delay_a_slow_result_right_in_1;
    delete[] rowLengthlr_slow_delay_a_slow_result_left_in_2;
    delete[] indlr_slow_delay_a_slow_result_left_in_2;
    delete[] rowLengthlr_slow_delay_a_slow_result_right_in_2;
    delete[] indlr_slow_delay_a_slow_result_right_in_2;
    delete[] rowLengthpr_and_lamina_lr_out_lr_fast_delay_in;
    delete[] indpr_and_lamina_lr_out_lr_fast_delay_in;
    delete[] rowLengthpr_and_lamina_lr_out_lr_no_delay_in;
    delete[] indpr_and_lamina_lr_out_lr_no_delay_in;
    delete[] rowLengthpr_and_lamina_lr_out_lr_slow_delay_in;
    delete[] indpr_and_lamina_lr_out_lr_slow_delay_in;
    delete[] rowLengthpr_and_lamina_ud_out_ud_fast_delay_in;
    delete[] indpr_and_lamina_ud_out_ud_fast_delay_in;
    delete[] rowLengthpr_and_lamina_ud_out_ud_no_delay_in;
    delete[] indpr_and_lamina_ud_out_ud_no_delay_in;
    delete[] rowLengthpr_and_lamina_ud_out_ud_slow_delay_in;
    delete[] indpr_and_lamina_ud_out_ud_slow_delay_in;
    delete[] rowLengthslow_result_left_out_sum_h_in_slow_rev;
    delete[] indslow_result_left_out_sum_h_in_slow_rev;
    delete[] rowLengthslow_result_right_out_sum_h_in_slow;
    delete[] indslow_result_right_out_sum_h_in_slow;
    delete[] rowLengthsum_h_diff_left_in;
    delete[] indsum_h_diff_left_in;
    delete[] rowLengthsum_h_diff_right_in;
    delete[] indsum_h_diff_right_in;
    delete[] rowLengthud_fast_delay_a_fast_result_down_in_1;
    delete[] indud_fast_delay_a_fast_result_down_in_1;
    delete[] rowLengthud_fast_delay_a_fast_result_up_in_1;
    delete[] indud_fast_delay_a_fast_result_up_in_1;
    delete[] rowLengthud_no_delay_a_fast_result_down_in_2;
    delete[] indud_no_delay_a_fast_result_down_in_2;
    delete[] rowLengthud_no_delay_a_fast_result_up_in_2;
    delete[] indud_no_delay_a_fast_result_up_in_2;
    delete[] rowLengthud_no_delay_a_slow_result_down_in_1;
    delete[] indud_no_delay_a_slow_result_down_in_1;
    delete[] rowLengthud_no_delay_a_slow_result_up_in_1;
    delete[] indud_no_delay_a_slow_result_up_in_1;
    delete[] rowLengthud_slow_delay_a_slow_result_down_in_2;
    delete[] indud_slow_delay_a_slow_result_down_in_2;
    delete[] rowLengthud_slow_delay_a_slow_result_up_in_2;
    delete[] indud_slow_delay_a_slow_result_up_in_2;
    
    // ------------------------------------------------------------------------
    // synapse variables
    // ------------------------------------------------------------------------
    delete[] wWorld_to_pr_and_lamina_lr_Synapse_0_weight_update;
    delete[] wWorld_to_pr_and_lamina_ud_Synapse_0_weight_update;
    
}

void stepTime() {
    updateSynapses(t);
    updateNeurons(t);
    iT++;
    t = iT*DT;
}

