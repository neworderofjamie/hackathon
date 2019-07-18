#include "definitionsInternal.h"
void initialize() {
    
    // ------------------------------------------------------------------------
    // Remote neuron groups
    
    // ------------------------------------------------------------------------
    // Local neuron groups
    // neuron group World
     {
        glbSpkCntWorld[0] = 0;
        for (unsigned i = 0; i < 684; i++) {
            glbSpkWorld[i] = 0;
        }
         {
            for (unsigned i = 0; i < 684; i++) {
                inWorld[i] = (0.00000000000000000e+00f);
            }
        }
        // current source variables
    }
    // neuron group fast_result_down
     {
        glbSpkCntfast_result_down[0] = 0;
        for (unsigned i = 0; i < 684; i++) {
            glbSpkfast_result_down[i] = 0;
        }
         {
            for (unsigned i = 0; i < 684; i++) {
                scalar initVal;
                initVal = (0.00000000000000000e+00f);
                for (unsigned int d = 0; d < 1; d++) {
                    outfast_result_down[(d * 684) + i] = initVal;
                }
            }
        }
        for (unsigned i = 0; i < 684; i++) {
            inSynud_no_delay_a_fast_result_down_in_2[i] = 0.000000f;
        }
        for (unsigned i = 0; i < 684; i++) {
            inSynud_fast_delay_a_fast_result_down_in_1[i] = 0.000000f;
        }
        // current source variables
    }
    // neuron group fast_result_left
     {
        glbSpkCntfast_result_left[0] = 0;
        for (unsigned i = 0; i < 684; i++) {
            glbSpkfast_result_left[i] = 0;
        }
         {
            for (unsigned i = 0; i < 684; i++) {
                scalar initVal;
                initVal = (0.00000000000000000e+00f);
                for (unsigned int d = 0; d < 1; d++) {
                    outfast_result_left[(d * 684) + i] = initVal;
                }
            }
        }
        for (unsigned i = 0; i < 684; i++) {
            inSynlr_no_delay_a_fast_result_left_in_2[i] = 0.000000f;
        }
        for (unsigned i = 0; i < 684; i++) {
            inSynlr_fast_delay_a_fast_result_left_in_1[i] = 0.000000f;
        }
        // current source variables
    }
    // neuron group fast_result_right
     {
        glbSpkCntfast_result_right[0] = 0;
        for (unsigned i = 0; i < 684; i++) {
            glbSpkfast_result_right[i] = 0;
        }
         {
            for (unsigned i = 0; i < 684; i++) {
                scalar initVal;
                initVal = (0.00000000000000000e+00f);
                for (unsigned int d = 0; d < 1; d++) {
                    outfast_result_right[(d * 684) + i] = initVal;
                }
            }
        }
        for (unsigned i = 0; i < 684; i++) {
            inSynlr_no_delay_a_fast_result_right_in_2[i] = 0.000000f;
        }
        for (unsigned i = 0; i < 684; i++) {
            inSynlr_fast_delay_a_fast_result_right_in_1[i] = 0.000000f;
        }
        // current source variables
    }
    // neuron group fast_result_up
     {
        glbSpkCntfast_result_up[0] = 0;
        for (unsigned i = 0; i < 684; i++) {
            glbSpkfast_result_up[i] = 0;
        }
         {
            for (unsigned i = 0; i < 684; i++) {
                scalar initVal;
                initVal = (0.00000000000000000e+00f);
                for (unsigned int d = 0; d < 1; d++) {
                    outfast_result_up[(d * 684) + i] = initVal;
                }
            }
        }
        for (unsigned i = 0; i < 684; i++) {
            inSynud_no_delay_a_fast_result_up_in_2[i] = 0.000000f;
        }
        for (unsigned i = 0; i < 684; i++) {
            inSynud_fast_delay_a_fast_result_up_in_1[i] = 0.000000f;
        }
        // current source variables
    }
    // neuron group forward
     {
        glbSpkCntforward[0] = 0;
        for (unsigned i = 0; i < 1; i++) {
            glbSpkforward[i] = 0;
        }
         {
            for (unsigned i = 0; i < 1; i++) {
                valforward[i] = (1.00000000000000000e+00f);
            }
        }
        // current source variables
    }
    // neuron group left
     {
        glbSpkCntleft[0] = 0;
        for (unsigned i = 0; i < 1; i++) {
            glbSpkleft[i] = 0;
        }
         {
            for (unsigned i = 0; i < 1; i++) {
                outleft[i] = (0.00000000000000000e+00f);
            }
        }
        for (unsigned i = 0; i < 1; i++) {
            inSynsum_h_diff_left_in[i] = 0.000000f;
        }
        // current source variables
    }
    // neuron group lr_fast_delay
     {
        glbSpkCntlr_fast_delay[0] = 0;
        for (unsigned i = 0; i < 684; i++) {
            glbSpklr_fast_delay[i] = 0;
        }
         {
            for (unsigned i = 0; i < 684; i++) {
                scalar initVal;
                initVal = (0.00000000000000000e+00f);
                for (unsigned int d = 0; d < 1; d++) {
                    alr_fast_delay[(d * 684) + i] = initVal;
                }
            }
        }
        for (unsigned i = 0; i < 684; i++) {
            inSynpr_and_lamina_lr_out_lr_fast_delay_in[i] = 0.000000f;
        }
        // current source variables
    }
    // neuron group lr_no_delay
     {
        glbSpkCntlr_no_delay[0] = 0;
        for (unsigned i = 0; i < 684; i++) {
            glbSpklr_no_delay[i] = 0;
        }
         {
            for (unsigned i = 0; i < 684; i++) {
                scalar initVal;
                initVal = (0.00000000000000000e+00f);
                for (unsigned int d = 0; d < 1; d++) {
                    alr_no_delay[(d * 684) + i] = initVal;
                }
            }
        }
        for (unsigned i = 0; i < 684; i++) {
            inSynpr_and_lamina_lr_out_lr_no_delay_in[i] = 0.000000f;
        }
        // current source variables
    }
    // neuron group lr_slow_delay
     {
        glbSpkCntlr_slow_delay[0] = 0;
        for (unsigned i = 0; i < 684; i++) {
            glbSpklr_slow_delay[i] = 0;
        }
         {
            for (unsigned i = 0; i < 684; i++) {
                scalar initVal;
                initVal = (0.00000000000000000e+00f);
                for (unsigned int d = 0; d < 1; d++) {
                    alr_slow_delay[(d * 684) + i] = initVal;
                }
            }
        }
        for (unsigned i = 0; i < 684; i++) {
            inSynpr_and_lamina_lr_out_lr_slow_delay_in[i] = 0.000000f;
        }
        // current source variables
    }
    // neuron group pr_and_lamina_lr
     {
        glbSpkCntpr_and_lamina_lr[0] = 0;
        for (unsigned i = 0; i < 684; i++) {
            glbSpkpr_and_lamina_lr[i] = 0;
        }
         {
            for (unsigned i = 0; i < 684; i++) {
                apr_and_lamina_lr[i] = (0.00000000000000000e+00f);
            }
        }
         {
            for (unsigned i = 0; i < 684; i++) {
                adappr_and_lamina_lr[i] = (0.00000000000000000e+00f);
            }
        }
        for (unsigned i = 0; i < 684; i++) {
            inSynWorld_to_pr_and_lamina_lr_Synapse_0_weight_update[i] = 0.000000f;
        }
        // current source variables
    }
    // neuron group pr_and_lamina_ud
     {
        glbSpkCntpr_and_lamina_ud[0] = 0;
        for (unsigned i = 0; i < 684; i++) {
            glbSpkpr_and_lamina_ud[i] = 0;
        }
         {
            for (unsigned i = 0; i < 684; i++) {
                apr_and_lamina_ud[i] = (0.00000000000000000e+00f);
            }
        }
         {
            for (unsigned i = 0; i < 684; i++) {
                adappr_and_lamina_ud[i] = (0.00000000000000000e+00f);
            }
        }
        for (unsigned i = 0; i < 684; i++) {
            inSynWorld_to_pr_and_lamina_ud_Synapse_0_weight_update[i] = 0.000000f;
        }
        // current source variables
    }
    // neuron group right
     {
        glbSpkCntright[0] = 0;
        for (unsigned i = 0; i < 1; i++) {
            glbSpkright[i] = 0;
        }
         {
            for (unsigned i = 0; i < 1; i++) {
                outright[i] = (0.00000000000000000e+00f);
            }
        }
        for (unsigned i = 0; i < 1; i++) {
            inSynsum_h_diff_right_in[i] = 0.000000f;
        }
        // current source variables
    }
    // neuron group slow_result_down
     {
        glbSpkCntslow_result_down[0] = 0;
        for (unsigned i = 0; i < 684; i++) {
            glbSpkslow_result_down[i] = 0;
        }
         {
            for (unsigned i = 0; i < 684; i++) {
                scalar initVal;
                initVal = (0.00000000000000000e+00f);
                for (unsigned int d = 0; d < 1; d++) {
                    outslow_result_down[(d * 684) + i] = initVal;
                }
            }
        }
        for (unsigned i = 0; i < 684; i++) {
            inSynud_slow_delay_a_slow_result_down_in_2[i] = 0.000000f;
        }
        for (unsigned i = 0; i < 684; i++) {
            inSynud_no_delay_a_slow_result_down_in_1[i] = 0.000000f;
        }
        // current source variables
    }
    // neuron group slow_result_left
     {
        glbSpkCntslow_result_left[0] = 0;
        for (unsigned i = 0; i < 684; i++) {
            glbSpkslow_result_left[i] = 0;
        }
         {
            for (unsigned i = 0; i < 684; i++) {
                scalar initVal;
                initVal = (0.00000000000000000e+00f);
                for (unsigned int d = 0; d < 1; d++) {
                    outslow_result_left[(d * 684) + i] = initVal;
                }
            }
        }
        for (unsigned i = 0; i < 684; i++) {
            inSynlr_no_delay_a_slow_result_left_in_1[i] = 0.000000f;
        }
        for (unsigned i = 0; i < 684; i++) {
            inSynlr_slow_delay_a_slow_result_left_in_2[i] = 0.000000f;
        }
        // current source variables
    }
    // neuron group slow_result_right
     {
        glbSpkCntslow_result_right[0] = 0;
        for (unsigned i = 0; i < 684; i++) {
            glbSpkslow_result_right[i] = 0;
        }
         {
            for (unsigned i = 0; i < 684; i++) {
                scalar initVal;
                initVal = (0.00000000000000000e+00f);
                for (unsigned int d = 0; d < 1; d++) {
                    outslow_result_right[(d * 684) + i] = initVal;
                }
            }
        }
        for (unsigned i = 0; i < 684; i++) {
            inSynlr_no_delay_a_slow_result_right_in_1[i] = 0.000000f;
        }
        for (unsigned i = 0; i < 684; i++) {
            inSynlr_slow_delay_a_slow_result_right_in_2[i] = 0.000000f;
        }
        // current source variables
    }
    // neuron group slow_result_up
     {
        glbSpkCntslow_result_up[0] = 0;
        for (unsigned i = 0; i < 684; i++) {
            glbSpkslow_result_up[i] = 0;
        }
         {
            for (unsigned i = 0; i < 684; i++) {
                scalar initVal;
                initVal = (0.00000000000000000e+00f);
                for (unsigned int d = 0; d < 1; d++) {
                    outslow_result_up[(d * 684) + i] = initVal;
                }
            }
        }
        for (unsigned i = 0; i < 684; i++) {
            inSynud_no_delay_a_slow_result_up_in_1[i] = 0.000000f;
        }
        for (unsigned i = 0; i < 684; i++) {
            inSynud_slow_delay_a_slow_result_up_in_2[i] = 0.000000f;
        }
        // current source variables
    }
    // neuron group sum_h
     {
        glbSpkCntsum_h[0] = 0;
        for (unsigned i = 0; i < 2; i++) {
            glbSpksum_h[i] = 0;
        }
         {
            for (unsigned i = 0; i < 2; i++) {
                asum_h[i] = (1.00000000000000006e-01f);
            }
        }
         {
            for (unsigned i = 0; i < 2; i++) {
                a_revsum_h[i] = (1.00000000000000006e-01f);
            }
        }
         {
            for (unsigned i = 0; i < 2; i++) {
                a_slowsum_h[i] = (1.00000000000000006e-01f);
            }
        }
         {
            for (unsigned i = 0; i < 2; i++) {
                a_slow_revsum_h[i] = (1.00000000000000006e-01f);
            }
        }
         {
            for (unsigned i = 0; i < 2; i++) {
                scalar initVal;
                initVal = (0.00000000000000000e+00f);
                for (unsigned int d = 0; d < 1; d++) {
                    diffsum_h[(d * 2) + i] = initVal;
                }
            }
        }
         {
            for (unsigned i = 0; i < 2; i++) {
                rhd_progsum_h[i] = (0.00000000000000000e+00f);
            }
        }
        for (unsigned i = 0; i < 2; i++) {
            inSynslow_result_right_out_sum_h_in_slow[i] = 0.000000f;
        }
        for (unsigned i = 0; i < 2; i++) {
            inSynslow_result_left_out_sum_h_in_slow_rev[i] = 0.000000f;
        }
        for (unsigned i = 0; i < 2; i++) {
            inSynfast_result_right_out_sum_h_in[i] = 0.000000f;
        }
        for (unsigned i = 0; i < 2; i++) {
            inSynfast_result_left_out_sum_h_in_rev[i] = 0.000000f;
        }
        // current source variables
    }
    // neuron group sum_v
     {
        glbSpkCntsum_v[0] = 0;
        for (unsigned i = 0; i < 1; i++) {
            glbSpksum_v[i] = 0;
        }
         {
            for (unsigned i = 0; i < 1; i++) {
                asum_v[i] = (1.00000000000000006e-01f);
            }
        }
         {
            for (unsigned i = 0; i < 1; i++) {
                a_revsum_v[i] = (1.00000000000000006e-01f);
            }
        }
         {
            for (unsigned i = 0; i < 1; i++) {
                a_slowsum_v[i] = (1.00000000000000006e-01f);
            }
        }
         {
            for (unsigned i = 0; i < 1; i++) {
                a_slow_revsum_v[i] = (1.00000000000000006e-01f);
            }
        }
         {
            for (unsigned i = 0; i < 1; i++) {
                diffsum_v[i] = (0.00000000000000000e+00f);
            }
        }
         {
            for (unsigned i = 0; i < 1; i++) {
                rhd_progsum_v[i] = (0.00000000000000000e+00f);
            }
        }
        for (unsigned i = 0; i < 1; i++) {
            inSynslow_result_up_out_sum_v_in_slow_rev[i] = 0.000000f;
        }
        for (unsigned i = 0; i < 1; i++) {
            inSynslow_result_down_out_sum_v_in_slow[i] = 0.000000f;
        }
        for (unsigned i = 0; i < 1; i++) {
            inSynfast_result_up_out_sum_v_in_rev[i] = 0.000000f;
        }
        for (unsigned i = 0; i < 1; i++) {
            inSynfast_result_down_out_sum_v_in[i] = 0.000000f;
        }
        // current source variables
    }
    // neuron group ud_fast_delay
     {
        glbSpkCntud_fast_delay[0] = 0;
        for (unsigned i = 0; i < 684; i++) {
            glbSpkud_fast_delay[i] = 0;
        }
         {
            for (unsigned i = 0; i < 684; i++) {
                scalar initVal;
                initVal = (0.00000000000000000e+00f);
                for (unsigned int d = 0; d < 1; d++) {
                    aud_fast_delay[(d * 684) + i] = initVal;
                }
            }
        }
        for (unsigned i = 0; i < 684; i++) {
            inSynpr_and_lamina_ud_out_ud_fast_delay_in[i] = 0.000000f;
        }
        // current source variables
    }
    // neuron group ud_no_delay
     {
        glbSpkCntud_no_delay[0] = 0;
        for (unsigned i = 0; i < 684; i++) {
            glbSpkud_no_delay[i] = 0;
        }
         {
            for (unsigned i = 0; i < 684; i++) {
                scalar initVal;
                initVal = (0.00000000000000000e+00f);
                for (unsigned int d = 0; d < 1; d++) {
                    aud_no_delay[(d * 684) + i] = initVal;
                }
            }
        }
        for (unsigned i = 0; i < 684; i++) {
            inSynpr_and_lamina_ud_out_ud_no_delay_in[i] = 0.000000f;
        }
        // current source variables
    }
    // neuron group ud_slow_delay
     {
        glbSpkCntud_slow_delay[0] = 0;
        for (unsigned i = 0; i < 684; i++) {
            glbSpkud_slow_delay[i] = 0;
        }
         {
            for (unsigned i = 0; i < 684; i++) {
                scalar initVal;
                initVal = (0.00000000000000000e+00f);
                for (unsigned int d = 0; d < 1; d++) {
                    aud_slow_delay[(d * 684) + i] = initVal;
                }
            }
        }
        for (unsigned i = 0; i < 684; i++) {
            inSynpr_and_lamina_ud_out_ud_slow_delay_in[i] = 0.000000f;
        }
        // current source variables
    }
    // ------------------------------------------------------------------------
    // Synapse groups with dense connectivity
    // ------------------------------------------------------------------------
    // Synapse groups with sparse connectivity
    // synapse group lr_fast_delay_a_fast_result_right_in_1
    memset(rowLengthlr_fast_delay_a_fast_result_right_in_1, 0, 684 * sizeof(unsigned int));
    for (unsigned int i = 0; i < 684; i++) {
        // Build sparse connectivity
        while(true) {
            indlr_fast_delay_a_fast_result_right_in_1[(i * 1) + (rowLengthlr_fast_delay_a_fast_result_right_in_1[i]++)] = i;
            break;
            
        }
    }
    // synapse group lr_no_delay_a_fast_result_left_in_2
    memset(rowLengthlr_no_delay_a_fast_result_left_in_2, 0, 684 * sizeof(unsigned int));
    for (unsigned int i = 0; i < 684; i++) {
        // Build sparse connectivity
        while(true) {
            indlr_no_delay_a_fast_result_left_in_2[(i * 1) + (rowLengthlr_no_delay_a_fast_result_left_in_2[i]++)] = i;
            break;
            
        }
    }
    // synapse group lr_no_delay_a_slow_result_left_in_1
    memset(rowLengthlr_no_delay_a_slow_result_left_in_1, 0, 684 * sizeof(unsigned int));
    for (unsigned int i = 0; i < 684; i++) {
        // Build sparse connectivity
        while(true) {
            indlr_no_delay_a_slow_result_left_in_1[(i * 1) + (rowLengthlr_no_delay_a_slow_result_left_in_1[i]++)] = i;
            break;
            
        }
    }
    // synapse group lr_slow_delay_a_slow_result_right_in_2
    memset(rowLengthlr_slow_delay_a_slow_result_right_in_2, 0, 684 * sizeof(unsigned int));
    for (unsigned int i = 0; i < 684; i++) {
        // Build sparse connectivity
        while(true) {
            indlr_slow_delay_a_slow_result_right_in_2[(i * 1) + (rowLengthlr_slow_delay_a_slow_result_right_in_2[i]++)] = i;
            break;
            
        }
    }
    // synapse group pr_and_lamina_lr_out_lr_fast_delay_in
    memset(rowLengthpr_and_lamina_lr_out_lr_fast_delay_in, 0, 684 * sizeof(unsigned int));
    for (unsigned int i = 0; i < 684; i++) {
        // Build sparse connectivity
        while(true) {
            indpr_and_lamina_lr_out_lr_fast_delay_in[(i * 1) + (rowLengthpr_and_lamina_lr_out_lr_fast_delay_in[i]++)] = i;
            break;
            
        }
    }
    // synapse group pr_and_lamina_lr_out_lr_no_delay_in
    memset(rowLengthpr_and_lamina_lr_out_lr_no_delay_in, 0, 684 * sizeof(unsigned int));
    for (unsigned int i = 0; i < 684; i++) {
        // Build sparse connectivity
        while(true) {
            indpr_and_lamina_lr_out_lr_no_delay_in[(i * 1) + (rowLengthpr_and_lamina_lr_out_lr_no_delay_in[i]++)] = i;
            break;
            
        }
    }
    // synapse group pr_and_lamina_lr_out_lr_slow_delay_in
    memset(rowLengthpr_and_lamina_lr_out_lr_slow_delay_in, 0, 684 * sizeof(unsigned int));
    for (unsigned int i = 0; i < 684; i++) {
        // Build sparse connectivity
        while(true) {
            indpr_and_lamina_lr_out_lr_slow_delay_in[(i * 1) + (rowLengthpr_and_lamina_lr_out_lr_slow_delay_in[i]++)] = i;
            break;
            
        }
    }
    // synapse group pr_and_lamina_ud_out_ud_fast_delay_in
    memset(rowLengthpr_and_lamina_ud_out_ud_fast_delay_in, 0, 684 * sizeof(unsigned int));
    for (unsigned int i = 0; i < 684; i++) {
        // Build sparse connectivity
        while(true) {
            indpr_and_lamina_ud_out_ud_fast_delay_in[(i * 1) + (rowLengthpr_and_lamina_ud_out_ud_fast_delay_in[i]++)] = i;
            break;
            
        }
    }
    // synapse group pr_and_lamina_ud_out_ud_no_delay_in
    memset(rowLengthpr_and_lamina_ud_out_ud_no_delay_in, 0, 684 * sizeof(unsigned int));
    for (unsigned int i = 0; i < 684; i++) {
        // Build sparse connectivity
        while(true) {
            indpr_and_lamina_ud_out_ud_no_delay_in[(i * 1) + (rowLengthpr_and_lamina_ud_out_ud_no_delay_in[i]++)] = i;
            break;
            
        }
    }
    // synapse group pr_and_lamina_ud_out_ud_slow_delay_in
    memset(rowLengthpr_and_lamina_ud_out_ud_slow_delay_in, 0, 684 * sizeof(unsigned int));
    for (unsigned int i = 0; i < 684; i++) {
        // Build sparse connectivity
        while(true) {
            indpr_and_lamina_ud_out_ud_slow_delay_in[(i * 1) + (rowLengthpr_and_lamina_ud_out_ud_slow_delay_in[i]++)] = i;
            break;
            
        }
    }
    // synapse group ud_fast_delay_a_fast_result_up_in_1
    memset(rowLengthud_fast_delay_a_fast_result_up_in_1, 0, 684 * sizeof(unsigned int));
    for (unsigned int i = 0; i < 684; i++) {
        // Build sparse connectivity
        while(true) {
            indud_fast_delay_a_fast_result_up_in_1[(i * 1) + (rowLengthud_fast_delay_a_fast_result_up_in_1[i]++)] = i;
            break;
            
        }
    }
    // synapse group ud_no_delay_a_fast_result_down_in_2
    memset(rowLengthud_no_delay_a_fast_result_down_in_2, 0, 684 * sizeof(unsigned int));
    for (unsigned int i = 0; i < 684; i++) {
        // Build sparse connectivity
        while(true) {
            indud_no_delay_a_fast_result_down_in_2[(i * 1) + (rowLengthud_no_delay_a_fast_result_down_in_2[i]++)] = i;
            break;
            
        }
    }
    // synapse group ud_no_delay_a_slow_result_down_in_1
    memset(rowLengthud_no_delay_a_slow_result_down_in_1, 0, 684 * sizeof(unsigned int));
    for (unsigned int i = 0; i < 684; i++) {
        // Build sparse connectivity
        while(true) {
            indud_no_delay_a_slow_result_down_in_1[(i * 1) + (rowLengthud_no_delay_a_slow_result_down_in_1[i]++)] = i;
            break;
            
        }
    }
    // synapse group ud_slow_delay_a_slow_result_up_in_2
    memset(rowLengthud_slow_delay_a_slow_result_up_in_2, 0, 684 * sizeof(unsigned int));
    for (unsigned int i = 0; i < 684; i++) {
        // Build sparse connectivity
        while(true) {
            indud_slow_delay_a_slow_result_up_in_2[(i * 1) + (rowLengthud_slow_delay_a_slow_result_up_in_2[i]++)] = i;
            break;
            
        }
    }
}

void initializeSparse() {
    // ------------------------------------------------------------------------
    // Synapse groups with sparse connectivity
}
