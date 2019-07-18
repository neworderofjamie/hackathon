#include "definitionsInternal.h"
#include "supportCode.h"

void updateSynapses(float t) {
    // synapse group World_to_pr_and_lamina_lr_Synapse_0_weight_update
     {
        for(unsigned int i = 0; i < 684; i++) {
            for(unsigned int s = 0; s < rowLengthWorld_to_pr_and_lamina_lr_Synapse_0_weight_update[i]; s++) {
                const unsigned int n = (i * 6) + s;
                const unsigned int j = indWorld_to_pr_and_lamina_lr_Synapse_0_weight_update[n];
                inSynWorld_to_pr_and_lamina_lr_Synapse_0_weight_update[j] += aWorld[i]*wWorld_to_pr_and_lamina_lr_Synapse_0_weight_update[n];
            }
        }
    }
    // synapse group World_to_pr_and_lamina_ud_Synapse_0_weight_update
     {
        for(unsigned int i = 0; i < 684; i++) {
            for(unsigned int s = 0; s < rowLengthWorld_to_pr_and_lamina_ud_Synapse_0_weight_update[i]; s++) {
                const unsigned int n = (i * 6) + s;
                const unsigned int j = indWorld_to_pr_and_lamina_ud_Synapse_0_weight_update[n];
                inSynWorld_to_pr_and_lamina_ud_Synapse_0_weight_update[j] += aWorld[i]*wWorld_to_pr_and_lamina_ud_Synapse_0_weight_update[n];
            }
        }
    }
    // synapse group fast_result_down_out_sum_v_in
     {
        for(unsigned int i = 0; i < 684; i++) {
            for (unsigned int j = 0; j < 1; j++) {
                inSynfast_result_down_out_sum_v_in[j] += outfast_result_down[i];
            }
        }
    }
    // synapse group fast_result_left_out_sum_h_in_rev
     {
        for(unsigned int i = 0; i < 684; i++) {
            for(unsigned int s = 0; s < rowLengthfast_result_left_out_sum_h_in_rev[i]; s++) {
                const unsigned int n = (i * 1) + s;
                const unsigned int j = indfast_result_left_out_sum_h_in_rev[n];
                inSynfast_result_left_out_sum_h_in_rev[j] += outfast_result_left[i];
            }
        }
    }
    // synapse group fast_result_right_out_sum_h_in
     {
        for(unsigned int i = 0; i < 684; i++) {
            for(unsigned int s = 0; s < rowLengthfast_result_right_out_sum_h_in[i]; s++) {
                const unsigned int n = (i * 1) + s;
                const unsigned int j = indfast_result_right_out_sum_h_in[n];
                inSynfast_result_right_out_sum_h_in[j] += outfast_result_right[i];
            }
        }
    }
    // synapse group fast_result_up_out_sum_v_in_rev
     {
        for(unsigned int i = 0; i < 684; i++) {
            for (unsigned int j = 0; j < 1; j++) {
                inSynfast_result_up_out_sum_v_in_rev[j] += outfast_result_up[i];
            }
        }
    }
    // synapse group lr_fast_delay_a_fast_result_left_in_1
     {
        for(unsigned int i = 0; i < 684; i++) {
            for(unsigned int s = 0; s < rowLengthlr_fast_delay_a_fast_result_left_in_1[i]; s++) {
                const unsigned int n = (i * 1) + s;
                const unsigned int j = indlr_fast_delay_a_fast_result_left_in_1[n];
                inSynlr_fast_delay_a_fast_result_left_in_1[j] += alr_fast_delay[i];
            }
        }
    }
    // synapse group lr_fast_delay_a_fast_result_right_in_1
     {
        for(unsigned int i = 0; i < 684; i++) {
            for(unsigned int s = 0; s < rowLengthlr_fast_delay_a_fast_result_right_in_1[i]; s++) {
                const unsigned int n = (i * 1) + s;
                const unsigned int j = indlr_fast_delay_a_fast_result_right_in_1[n];
                inSynlr_fast_delay_a_fast_result_right_in_1[j] += alr_fast_delay[i];
            }
        }
    }
    // synapse group lr_no_delay_a_fast_result_left_in_2
     {
        for(unsigned int i = 0; i < 684; i++) {
            for(unsigned int s = 0; s < rowLengthlr_no_delay_a_fast_result_left_in_2[i]; s++) {
                const unsigned int n = (i * 1) + s;
                const unsigned int j = indlr_no_delay_a_fast_result_left_in_2[n];
                inSynlr_no_delay_a_fast_result_left_in_2[j] += alr_no_delay[i];
            }
        }
    }
    // synapse group lr_no_delay_a_fast_result_right_in_2
     {
        for(unsigned int i = 0; i < 684; i++) {
            for(unsigned int s = 0; s < rowLengthlr_no_delay_a_fast_result_right_in_2[i]; s++) {
                const unsigned int n = (i * 1) + s;
                const unsigned int j = indlr_no_delay_a_fast_result_right_in_2[n];
                inSynlr_no_delay_a_fast_result_right_in_2[j] += alr_no_delay[i];
            }
        }
    }
    // synapse group lr_no_delay_a_slow_result_left_in_1
     {
        for(unsigned int i = 0; i < 684; i++) {
            for(unsigned int s = 0; s < rowLengthlr_no_delay_a_slow_result_left_in_1[i]; s++) {
                const unsigned int n = (i * 1) + s;
                const unsigned int j = indlr_no_delay_a_slow_result_left_in_1[n];
                inSynlr_no_delay_a_slow_result_left_in_1[j] += alr_no_delay[i];
            }
        }
    }
    // synapse group lr_no_delay_a_slow_result_right_in_1
     {
        for(unsigned int i = 0; i < 684; i++) {
            for(unsigned int s = 0; s < rowLengthlr_no_delay_a_slow_result_right_in_1[i]; s++) {
                const unsigned int n = (i * 1) + s;
                const unsigned int j = indlr_no_delay_a_slow_result_right_in_1[n];
                inSynlr_no_delay_a_slow_result_right_in_1[j] += alr_no_delay[i];
            }
        }
    }
    // synapse group lr_slow_delay_a_slow_result_left_in_2
     {
        for(unsigned int i = 0; i < 684; i++) {
            for(unsigned int s = 0; s < rowLengthlr_slow_delay_a_slow_result_left_in_2[i]; s++) {
                const unsigned int n = (i * 1) + s;
                const unsigned int j = indlr_slow_delay_a_slow_result_left_in_2[n];
                inSynlr_slow_delay_a_slow_result_left_in_2[j] += alr_slow_delay[i];
            }
        }
    }
    // synapse group lr_slow_delay_a_slow_result_right_in_2
     {
        for(unsigned int i = 0; i < 684; i++) {
            for(unsigned int s = 0; s < rowLengthlr_slow_delay_a_slow_result_right_in_2[i]; s++) {
                const unsigned int n = (i * 1) + s;
                const unsigned int j = indlr_slow_delay_a_slow_result_right_in_2[n];
                inSynlr_slow_delay_a_slow_result_right_in_2[j] += alr_slow_delay[i];
            }
        }
    }
    // synapse group pr_and_lamina_lr_out_lr_fast_delay_in
     {
        for(unsigned int i = 0; i < 684; i++) {
            for(unsigned int s = 0; s < rowLengthpr_and_lamina_lr_out_lr_fast_delay_in[i]; s++) {
                const unsigned int n = (i * 1) + s;
                const unsigned int j = indpr_and_lamina_lr_out_lr_fast_delay_in[n];
                inSynpr_and_lamina_lr_out_lr_fast_delay_in[j] += outpr_and_lamina_lr[i];
            }
        }
    }
    // synapse group pr_and_lamina_lr_out_lr_no_delay_in
     {
        for(unsigned int i = 0; i < 684; i++) {
            for(unsigned int s = 0; s < rowLengthpr_and_lamina_lr_out_lr_no_delay_in[i]; s++) {
                const unsigned int n = (i * 1) + s;
                const unsigned int j = indpr_and_lamina_lr_out_lr_no_delay_in[n];
                inSynpr_and_lamina_lr_out_lr_no_delay_in[j] += outpr_and_lamina_lr[i];
            }
        }
    }
    // synapse group pr_and_lamina_lr_out_lr_slow_delay_in
     {
        for(unsigned int i = 0; i < 684; i++) {
            for(unsigned int s = 0; s < rowLengthpr_and_lamina_lr_out_lr_slow_delay_in[i]; s++) {
                const unsigned int n = (i * 1) + s;
                const unsigned int j = indpr_and_lamina_lr_out_lr_slow_delay_in[n];
                inSynpr_and_lamina_lr_out_lr_slow_delay_in[j] += outpr_and_lamina_lr[i];
            }
        }
    }
    // synapse group pr_and_lamina_ud_out_ud_fast_delay_in
     {
        for(unsigned int i = 0; i < 684; i++) {
            for(unsigned int s = 0; s < rowLengthpr_and_lamina_ud_out_ud_fast_delay_in[i]; s++) {
                const unsigned int n = (i * 1) + s;
                const unsigned int j = indpr_and_lamina_ud_out_ud_fast_delay_in[n];
                inSynpr_and_lamina_ud_out_ud_fast_delay_in[j] += outpr_and_lamina_ud[i];
            }
        }
    }
    // synapse group pr_and_lamina_ud_out_ud_no_delay_in
     {
        for(unsigned int i = 0; i < 684; i++) {
            for(unsigned int s = 0; s < rowLengthpr_and_lamina_ud_out_ud_no_delay_in[i]; s++) {
                const unsigned int n = (i * 1) + s;
                const unsigned int j = indpr_and_lamina_ud_out_ud_no_delay_in[n];
                inSynpr_and_lamina_ud_out_ud_no_delay_in[j] += outpr_and_lamina_ud[i];
            }
        }
    }
    // synapse group pr_and_lamina_ud_out_ud_slow_delay_in
     {
        for(unsigned int i = 0; i < 684; i++) {
            for(unsigned int s = 0; s < rowLengthpr_and_lamina_ud_out_ud_slow_delay_in[i]; s++) {
                const unsigned int n = (i * 1) + s;
                const unsigned int j = indpr_and_lamina_ud_out_ud_slow_delay_in[n];
                inSynpr_and_lamina_ud_out_ud_slow_delay_in[j] += outpr_and_lamina_ud[i];
            }
        }
    }
    // synapse group slow_result_down_out_sum_v_in_slow
     {
        for(unsigned int i = 0; i < 684; i++) {
            for (unsigned int j = 0; j < 1; j++) {
                inSynslow_result_down_out_sum_v_in_slow[j] += outslow_result_down[i];
            }
        }
    }
    // synapse group slow_result_left_out_sum_h_in_slow_rev
     {
        for(unsigned int i = 0; i < 684; i++) {
            for(unsigned int s = 0; s < rowLengthslow_result_left_out_sum_h_in_slow_rev[i]; s++) {
                const unsigned int n = (i * 1) + s;
                const unsigned int j = indslow_result_left_out_sum_h_in_slow_rev[n];
                inSynslow_result_left_out_sum_h_in_slow_rev[j] += outslow_result_left[i];
            }
        }
    }
    // synapse group slow_result_right_out_sum_h_in_slow
     {
        for(unsigned int i = 0; i < 684; i++) {
            for(unsigned int s = 0; s < rowLengthslow_result_right_out_sum_h_in_slow[i]; s++) {
                const unsigned int n = (i * 1) + s;
                const unsigned int j = indslow_result_right_out_sum_h_in_slow[n];
                inSynslow_result_right_out_sum_h_in_slow[j] += outslow_result_right[i];
            }
        }
    }
    // synapse group slow_result_up_out_sum_v_in_slow_rev
     {
        for(unsigned int i = 0; i < 684; i++) {
            for (unsigned int j = 0; j < 1; j++) {
                inSynslow_result_up_out_sum_v_in_slow_rev[j] += outslow_result_up[i];
            }
        }
    }
    // synapse group sum_h_diff_left_in
     {
        for(unsigned int i = 0; i < 2; i++) {
            for(unsigned int s = 0; s < rowLengthsum_h_diff_left_in[i]; s++) {
                const unsigned int n = (i * 1) + s;
                const unsigned int j = indsum_h_diff_left_in[n];
                inSynsum_h_diff_left_in[j] += diffsum_h[i];
            }
        }
    }
    // synapse group sum_h_diff_right_in
     {
        for(unsigned int i = 0; i < 2; i++) {
            for(unsigned int s = 0; s < rowLengthsum_h_diff_right_in[i]; s++) {
                const unsigned int n = (i * 1) + s;
                const unsigned int j = indsum_h_diff_right_in[n];
                inSynsum_h_diff_right_in[j] += diffsum_h[i];
            }
        }
    }
    // synapse group ud_fast_delay_a_fast_result_down_in_1
     {
        for(unsigned int i = 0; i < 684; i++) {
            for(unsigned int s = 0; s < rowLengthud_fast_delay_a_fast_result_down_in_1[i]; s++) {
                const unsigned int n = (i * 1) + s;
                const unsigned int j = indud_fast_delay_a_fast_result_down_in_1[n];
                inSynud_fast_delay_a_fast_result_down_in_1[j] += aud_fast_delay[i];
            }
        }
    }
    // synapse group ud_fast_delay_a_fast_result_up_in_1
     {
        for(unsigned int i = 0; i < 684; i++) {
            for(unsigned int s = 0; s < rowLengthud_fast_delay_a_fast_result_up_in_1[i]; s++) {
                const unsigned int n = (i * 1) + s;
                const unsigned int j = indud_fast_delay_a_fast_result_up_in_1[n];
                inSynud_fast_delay_a_fast_result_up_in_1[j] += aud_fast_delay[i];
            }
        }
    }
    // synapse group ud_no_delay_a_fast_result_down_in_2
     {
        for(unsigned int i = 0; i < 684; i++) {
            for(unsigned int s = 0; s < rowLengthud_no_delay_a_fast_result_down_in_2[i]; s++) {
                const unsigned int n = (i * 1) + s;
                const unsigned int j = indud_no_delay_a_fast_result_down_in_2[n];
                inSynud_no_delay_a_fast_result_down_in_2[j] += aud_no_delay[i];
            }
        }
    }
    // synapse group ud_no_delay_a_fast_result_up_in_2
     {
        for(unsigned int i = 0; i < 684; i++) {
            for(unsigned int s = 0; s < rowLengthud_no_delay_a_fast_result_up_in_2[i]; s++) {
                const unsigned int n = (i * 1) + s;
                const unsigned int j = indud_no_delay_a_fast_result_up_in_2[n];
                inSynud_no_delay_a_fast_result_up_in_2[j] += aud_no_delay[i];
            }
        }
    }
    // synapse group ud_no_delay_a_slow_result_down_in_1
     {
        for(unsigned int i = 0; i < 684; i++) {
            for(unsigned int s = 0; s < rowLengthud_no_delay_a_slow_result_down_in_1[i]; s++) {
                const unsigned int n = (i * 1) + s;
                const unsigned int j = indud_no_delay_a_slow_result_down_in_1[n];
                inSynud_no_delay_a_slow_result_down_in_1[j] += aud_no_delay[i];
            }
        }
    }
    // synapse group ud_no_delay_a_slow_result_up_in_1
     {
        for(unsigned int i = 0; i < 684; i++) {
            for(unsigned int s = 0; s < rowLengthud_no_delay_a_slow_result_up_in_1[i]; s++) {
                const unsigned int n = (i * 1) + s;
                const unsigned int j = indud_no_delay_a_slow_result_up_in_1[n];
                inSynud_no_delay_a_slow_result_up_in_1[j] += aud_no_delay[i];
            }
        }
    }
    // synapse group ud_slow_delay_a_slow_result_down_in_2
     {
        for(unsigned int i = 0; i < 684; i++) {
            for(unsigned int s = 0; s < rowLengthud_slow_delay_a_slow_result_down_in_2[i]; s++) {
                const unsigned int n = (i * 1) + s;
                const unsigned int j = indud_slow_delay_a_slow_result_down_in_2[n];
                inSynud_slow_delay_a_slow_result_down_in_2[j] += aud_slow_delay[i];
            }
        }
    }
    // synapse group ud_slow_delay_a_slow_result_up_in_2
     {
        for(unsigned int i = 0; i < 684; i++) {
            for(unsigned int s = 0; s < rowLengthud_slow_delay_a_slow_result_up_in_2[i]; s++) {
                const unsigned int n = (i * 1) + s;
                const unsigned int j = indud_slow_delay_a_slow_result_up_in_2[n];
                inSynud_slow_delay_a_slow_result_up_in_2[j] += aud_slow_delay[i];
            }
        }
    }
}
