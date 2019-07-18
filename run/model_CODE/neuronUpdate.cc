#include "definitionsInternal.h"
#include "supportCode.h"

void updateNeurons(float t) {
    // neuron group World
     {
        glbSpkCntWorld[0] = 0;
        
        for(unsigned int i = 0; i < 684; i++) {
            scalar la = aWorld[i];
            scalar lin = inWorld[i];
            
            // calculate membrane potential
            la += DT * ((-la+lin)/(1.00000000000000000e+00f));
            
            aWorld[i] = la;
            inWorld[i] = lin;
        }
    }
    // neuron group fast_result_down
     {
        glbSpkCntfast_result_down[0] = 0;
        
        for(unsigned int i = 0; i < 684; i++) {
            scalar lout = outfast_result_down[i];
            
            float Isyn = 0;
            scalar in_1 = 0;
            scalar in_2 = 0;
            // pull inSyn values in a coalesced access
            float linSynud_no_delay_a_fast_result_down_in_2 = inSynud_no_delay_a_fast_result_down_in_2[i];
            in_2 += linSynud_no_delay_a_fast_result_down_in_2; linSynud_no_delay_a_fast_result_down_in_2 = 0;
            
            // pull inSyn values in a coalesced access
            float linSynud_fast_delay_a_fast_result_down_in_1 = inSynud_fast_delay_a_fast_result_down_in_1[i];
            in_1 += linSynud_fast_delay_a_fast_result_down_in_1; linSynud_fast_delay_a_fast_result_down_in_1 = 0;
            
            // calculate membrane potential
            lout = in_1*in_2*(in_1*in_2>0);
            
            outfast_result_down[i] = lout;
            // the post-synaptic dynamics
            
            inSynud_no_delay_a_fast_result_down_in_2[i] = linSynud_no_delay_a_fast_result_down_in_2;
            // the post-synaptic dynamics
            
            inSynud_fast_delay_a_fast_result_down_in_1[i] = linSynud_fast_delay_a_fast_result_down_in_1;
        }
    }
    // neuron group fast_result_left
     {
        glbSpkCntfast_result_left[0] = 0;
        
        for(unsigned int i = 0; i < 684; i++) {
            scalar lout = outfast_result_left[i];
            
            float Isyn = 0;
            scalar in_1 = 0;
            scalar in_2 = 0;
            // pull inSyn values in a coalesced access
            float linSynlr_no_delay_a_fast_result_left_in_2 = inSynlr_no_delay_a_fast_result_left_in_2[i];
            in_2 += linSynlr_no_delay_a_fast_result_left_in_2; linSynlr_no_delay_a_fast_result_left_in_2 = 0;
            
            // pull inSyn values in a coalesced access
            float linSynlr_fast_delay_a_fast_result_left_in_1 = inSynlr_fast_delay_a_fast_result_left_in_1[i];
            in_1 += linSynlr_fast_delay_a_fast_result_left_in_1; linSynlr_fast_delay_a_fast_result_left_in_1 = 0;
            
            // calculate membrane potential
            lout = in_1*in_2*(in_1*in_2>0);
            
            outfast_result_left[i] = lout;
            // the post-synaptic dynamics
            
            inSynlr_no_delay_a_fast_result_left_in_2[i] = linSynlr_no_delay_a_fast_result_left_in_2;
            // the post-synaptic dynamics
            
            inSynlr_fast_delay_a_fast_result_left_in_1[i] = linSynlr_fast_delay_a_fast_result_left_in_1;
        }
    }
    // neuron group fast_result_right
     {
        glbSpkCntfast_result_right[0] = 0;
        
        for(unsigned int i = 0; i < 684; i++) {
            scalar lout = outfast_result_right[i];
            
            float Isyn = 0;
            scalar in_1 = 0;
            scalar in_2 = 0;
            // pull inSyn values in a coalesced access
            float linSynlr_no_delay_a_fast_result_right_in_2 = inSynlr_no_delay_a_fast_result_right_in_2[i];
            in_2 += linSynlr_no_delay_a_fast_result_right_in_2; linSynlr_no_delay_a_fast_result_right_in_2 = 0;
            
            // pull inSyn values in a coalesced access
            float linSynlr_fast_delay_a_fast_result_right_in_1 = inSynlr_fast_delay_a_fast_result_right_in_1[i];
            in_1 += linSynlr_fast_delay_a_fast_result_right_in_1; linSynlr_fast_delay_a_fast_result_right_in_1 = 0;
            
            // calculate membrane potential
            lout = in_1*in_2*(in_1*in_2>0);
            
            outfast_result_right[i] = lout;
            // the post-synaptic dynamics
            
            inSynlr_no_delay_a_fast_result_right_in_2[i] = linSynlr_no_delay_a_fast_result_right_in_2;
            // the post-synaptic dynamics
            
            inSynlr_fast_delay_a_fast_result_right_in_1[i] = linSynlr_fast_delay_a_fast_result_right_in_1;
        }
    }
    // neuron group fast_result_up
     {
        glbSpkCntfast_result_up[0] = 0;
        
        for(unsigned int i = 0; i < 684; i++) {
            scalar lout = outfast_result_up[i];
            
            float Isyn = 0;
            scalar in_1 = 0;
            scalar in_2 = 0;
            // pull inSyn values in a coalesced access
            float linSynud_no_delay_a_fast_result_up_in_2 = inSynud_no_delay_a_fast_result_up_in_2[i];
            in_2 += linSynud_no_delay_a_fast_result_up_in_2; linSynud_no_delay_a_fast_result_up_in_2 = 0;
            
            // pull inSyn values in a coalesced access
            float linSynud_fast_delay_a_fast_result_up_in_1 = inSynud_fast_delay_a_fast_result_up_in_1[i];
            in_1 += linSynud_fast_delay_a_fast_result_up_in_1; linSynud_fast_delay_a_fast_result_up_in_1 = 0;
            
            // calculate membrane potential
            lout = in_1*in_2*(in_1*in_2>0);
            
            outfast_result_up[i] = lout;
            // the post-synaptic dynamics
            
            inSynud_no_delay_a_fast_result_up_in_2[i] = linSynud_no_delay_a_fast_result_up_in_2;
            // the post-synaptic dynamics
            
            inSynud_fast_delay_a_fast_result_up_in_1[i] = linSynud_fast_delay_a_fast_result_up_in_1;
        }
    }
    // neuron group forward
     {
        glbSpkCntforward[0] = 0;
        
        for(unsigned int i = 0; i < 1; i++) {
            scalar lval = valforward[i];
            
            // calculate membrane potential
            
            valforward[i] = lval;
        }
    }
    // neuron group left
     {
        glbSpkCntleft[0] = 0;
        
        for(unsigned int i = 0; i < 1; i++) {
            scalar lout = outleft[i];
            
            float Isyn = 0;
            scalar in = 0;
            // pull inSyn values in a coalesced access
            float linSynsum_h_diff_left_in = inSynsum_h_diff_left_in[i];
            in += linSynsum_h_diff_left_in; linSynsum_h_diff_left_in = 0;
            
            // calculate membrane potential
            lout = in*(1.00000000000000000e+03f);
            
            outleft[i] = lout;
            // the post-synaptic dynamics
            
            inSynsum_h_diff_left_in[i] = linSynsum_h_diff_left_in;
        }
    }
    // neuron group lr_fast_delay
     {
        glbSpkCntlr_fast_delay[0] = 0;
        
        for(unsigned int i = 0; i < 684; i++) {
            scalar la = alr_fast_delay[i];
            
            float Isyn = 0;
            scalar in = 0;
            // pull inSyn values in a coalesced access
            float linSynpr_and_lamina_lr_out_lr_fast_delay_in = inSynpr_and_lamina_lr_out_lr_fast_delay_in[i];
            in += linSynpr_and_lamina_lr_out_lr_fast_delay_in; linSynpr_and_lamina_lr_out_lr_fast_delay_in = 0;
            
            // calculate membrane potential
            la += DT * ((-la+in)/(5.00000000000000000e+00f));
            
            alr_fast_delay[i] = la;
            // the post-synaptic dynamics
            
            inSynpr_and_lamina_lr_out_lr_fast_delay_in[i] = linSynpr_and_lamina_lr_out_lr_fast_delay_in;
        }
    }
    // neuron group lr_no_delay
     {
        glbSpkCntlr_no_delay[0] = 0;
        
        for(unsigned int i = 0; i < 684; i++) {
            scalar la = alr_no_delay[i];
            
            float Isyn = 0;
            scalar in = 0;
            // pull inSyn values in a coalesced access
            float linSynpr_and_lamina_lr_out_lr_no_delay_in = inSynpr_and_lamina_lr_out_lr_no_delay_in[i];
            in += linSynpr_and_lamina_lr_out_lr_no_delay_in; linSynpr_and_lamina_lr_out_lr_no_delay_in = 0;
            
            // calculate membrane potential
            la += DT * ((-la+in)/(1.00000000000000000e+00f));
            
            alr_no_delay[i] = la;
            // the post-synaptic dynamics
            
            inSynpr_and_lamina_lr_out_lr_no_delay_in[i] = linSynpr_and_lamina_lr_out_lr_no_delay_in;
        }
    }
    // neuron group lr_slow_delay
     {
        glbSpkCntlr_slow_delay[0] = 0;
        
        for(unsigned int i = 0; i < 684; i++) {
            scalar la = alr_slow_delay[i];
            
            float Isyn = 0;
            scalar in = 0;
            // pull inSyn values in a coalesced access
            float linSynpr_and_lamina_lr_out_lr_slow_delay_in = inSynpr_and_lamina_lr_out_lr_slow_delay_in[i];
            in += linSynpr_and_lamina_lr_out_lr_slow_delay_in; linSynpr_and_lamina_lr_out_lr_slow_delay_in = 0;
            
            // calculate membrane potential
            la += DT * ((-la+in)/(1.50000000000000000e+01f));
            
            alr_slow_delay[i] = la;
            // the post-synaptic dynamics
            
            inSynpr_and_lamina_lr_out_lr_slow_delay_in[i] = linSynpr_and_lamina_lr_out_lr_slow_delay_in;
        }
    }
    // neuron group pr_and_lamina_lr
     {
        glbSpkCntpr_and_lamina_lr[0] = 0;
        
        for(unsigned int i = 0; i < 684; i++) {
            scalar la = apr_and_lamina_lr[i];
            scalar la_neg = a_negpr_and_lamina_lr[i];
            scalar ladap = adappr_and_lamina_lr[i];
            scalar ladap_neg = adap_negpr_and_lamina_lr[i];
            scalar lout = outpr_and_lamina_lr[i];
            scalar lprev_in = prev_inpr_and_lamina_lr[i];
            
            float Isyn = 0;
            scalar in = 0;
            // pull inSyn values in a coalesced access
            float linSynWorld_to_pr_and_lamina_lr_Synapse_0_weight_update = inSynWorld_to_pr_and_lamina_lr_Synapse_0_weight_update[i];
            in += linSynWorld_to_pr_and_lamina_lr_Synapse_0_weight_update*(1.00000000000000000e+00f);linSynWorld_to_pr_and_lamina_lr_Synapse_0_weight_update = 0;
            
            // calculate membrane potential
            if(1) {
                lout = la*(la>=0)+la_neg*(la_neg<=0);
                lprev_in = in;
            }
            la += DT * ((-la-ladap+in*(in>=0))/(8.00000000000000000e+00f));
            ladap += DT * ((in*(in>=0)-ladap)/(1.50000000000000000e+01f));
            la_neg += DT * ((-la_neg-ladap_neg+in*(in<=0))/(8.00000000000000000e+00f));
            ladap_neg += DT * ((in*(in<=0)-ladap_neg)/(1.50000000000000000e+01f));
            
            apr_and_lamina_lr[i] = la;
            a_negpr_and_lamina_lr[i] = la_neg;
            adappr_and_lamina_lr[i] = ladap;
            adap_negpr_and_lamina_lr[i] = ladap_neg;
            outpr_and_lamina_lr[i] = lout;
            prev_inpr_and_lamina_lr[i] = lprev_in;
            // the post-synaptic dynamics
            
            inSynWorld_to_pr_and_lamina_lr_Synapse_0_weight_update[i] = linSynWorld_to_pr_and_lamina_lr_Synapse_0_weight_update;
        }
    }
    // neuron group pr_and_lamina_ud
     {
        glbSpkCntpr_and_lamina_ud[0] = 0;
        
        for(unsigned int i = 0; i < 684; i++) {
            scalar la = apr_and_lamina_ud[i];
            scalar la_neg = a_negpr_and_lamina_ud[i];
            scalar ladap = adappr_and_lamina_ud[i];
            scalar ladap_neg = adap_negpr_and_lamina_ud[i];
            scalar lout = outpr_and_lamina_ud[i];
            scalar lprev_in = prev_inpr_and_lamina_ud[i];
            
            float Isyn = 0;
            scalar in = 0;
            // pull inSyn values in a coalesced access
            float linSynWorld_to_pr_and_lamina_ud_Synapse_0_weight_update = inSynWorld_to_pr_and_lamina_ud_Synapse_0_weight_update[i];
            in += linSynWorld_to_pr_and_lamina_ud_Synapse_0_weight_update*(1.00000000000000000e+00f);linSynWorld_to_pr_and_lamina_ud_Synapse_0_weight_update = 0;
            
            // calculate membrane potential
            if(1) {
                lout = la*(la>=0)+la_neg*(la_neg<=0);
                lprev_in = in;
            }
            la += DT * ((-la-ladap+in*(in>=0))/(8.00000000000000000e+00f));
            ladap += DT * ((in*(in>=0)-ladap)/(1.50000000000000000e+01f));
            la_neg += DT * ((-la_neg-ladap_neg+in*(in<=0))/(8.00000000000000000e+00f));
            ladap_neg += DT * ((in*(in<=0)-ladap_neg)/(1.50000000000000000e+01f));
            
            apr_and_lamina_ud[i] = la;
            a_negpr_and_lamina_ud[i] = la_neg;
            adappr_and_lamina_ud[i] = ladap;
            adap_negpr_and_lamina_ud[i] = ladap_neg;
            outpr_and_lamina_ud[i] = lout;
            prev_inpr_and_lamina_ud[i] = lprev_in;
            // the post-synaptic dynamics
            
            inSynWorld_to_pr_and_lamina_ud_Synapse_0_weight_update[i] = linSynWorld_to_pr_and_lamina_ud_Synapse_0_weight_update;
        }
    }
    // neuron group right
     {
        glbSpkCntright[0] = 0;
        
        for(unsigned int i = 0; i < 1; i++) {
            scalar lout = outright[i];
            
            float Isyn = 0;
            scalar in = 0;
            // pull inSyn values in a coalesced access
            float linSynsum_h_diff_right_in = inSynsum_h_diff_right_in[i];
            in += linSynsum_h_diff_right_in; linSynsum_h_diff_right_in = 0;
            
            // calculate membrane potential
            lout = in*(1.00000000000000000e+03f);
            
            outright[i] = lout;
            // the post-synaptic dynamics
            
            inSynsum_h_diff_right_in[i] = linSynsum_h_diff_right_in;
        }
    }
    // neuron group slow_result_down
     {
        glbSpkCntslow_result_down[0] = 0;
        
        for(unsigned int i = 0; i < 684; i++) {
            scalar lout = outslow_result_down[i];
            
            float Isyn = 0;
            scalar in_1 = 0;
            scalar in_2 = 0;
            // pull inSyn values in a coalesced access
            float linSynud_slow_delay_a_slow_result_down_in_2 = inSynud_slow_delay_a_slow_result_down_in_2[i];
            in_2 += linSynud_slow_delay_a_slow_result_down_in_2; linSynud_slow_delay_a_slow_result_down_in_2 = 0;
            
            // pull inSyn values in a coalesced access
            float linSynud_no_delay_a_slow_result_down_in_1 = inSynud_no_delay_a_slow_result_down_in_1[i];
            in_1 += linSynud_no_delay_a_slow_result_down_in_1; linSynud_no_delay_a_slow_result_down_in_1 = 0;
            
            // calculate membrane potential
            lout = in_1*in_2*(in_1*in_2>0);
            
            outslow_result_down[i] = lout;
            // the post-synaptic dynamics
            
            inSynud_slow_delay_a_slow_result_down_in_2[i] = linSynud_slow_delay_a_slow_result_down_in_2;
            // the post-synaptic dynamics
            
            inSynud_no_delay_a_slow_result_down_in_1[i] = linSynud_no_delay_a_slow_result_down_in_1;
        }
    }
    // neuron group slow_result_left
     {
        glbSpkCntslow_result_left[0] = 0;
        
        for(unsigned int i = 0; i < 684; i++) {
            scalar lout = outslow_result_left[i];
            
            float Isyn = 0;
            scalar in_1 = 0;
            scalar in_2 = 0;
            // pull inSyn values in a coalesced access
            float linSynlr_no_delay_a_slow_result_left_in_1 = inSynlr_no_delay_a_slow_result_left_in_1[i];
            in_1 += linSynlr_no_delay_a_slow_result_left_in_1; linSynlr_no_delay_a_slow_result_left_in_1 = 0;
            
            // pull inSyn values in a coalesced access
            float linSynlr_slow_delay_a_slow_result_left_in_2 = inSynlr_slow_delay_a_slow_result_left_in_2[i];
            in_2 += linSynlr_slow_delay_a_slow_result_left_in_2; linSynlr_slow_delay_a_slow_result_left_in_2 = 0;
            
            // calculate membrane potential
            lout = in_1*in_2*(in_1*in_2>0);
            
            outslow_result_left[i] = lout;
            // the post-synaptic dynamics
            
            inSynlr_no_delay_a_slow_result_left_in_1[i] = linSynlr_no_delay_a_slow_result_left_in_1;
            // the post-synaptic dynamics
            
            inSynlr_slow_delay_a_slow_result_left_in_2[i] = linSynlr_slow_delay_a_slow_result_left_in_2;
        }
    }
    // neuron group slow_result_right
     {
        glbSpkCntslow_result_right[0] = 0;
        
        for(unsigned int i = 0; i < 684; i++) {
            scalar lout = outslow_result_right[i];
            
            float Isyn = 0;
            scalar in_1 = 0;
            scalar in_2 = 0;
            // pull inSyn values in a coalesced access
            float linSynlr_no_delay_a_slow_result_right_in_1 = inSynlr_no_delay_a_slow_result_right_in_1[i];
            in_1 += linSynlr_no_delay_a_slow_result_right_in_1; linSynlr_no_delay_a_slow_result_right_in_1 = 0;
            
            // pull inSyn values in a coalesced access
            float linSynlr_slow_delay_a_slow_result_right_in_2 = inSynlr_slow_delay_a_slow_result_right_in_2[i];
            in_2 += linSynlr_slow_delay_a_slow_result_right_in_2; linSynlr_slow_delay_a_slow_result_right_in_2 = 0;
            
            // calculate membrane potential
            lout = in_1*in_2*(in_1*in_2>0);
            
            outslow_result_right[i] = lout;
            // the post-synaptic dynamics
            
            inSynlr_no_delay_a_slow_result_right_in_1[i] = linSynlr_no_delay_a_slow_result_right_in_1;
            // the post-synaptic dynamics
            
            inSynlr_slow_delay_a_slow_result_right_in_2[i] = linSynlr_slow_delay_a_slow_result_right_in_2;
        }
    }
    // neuron group slow_result_up
     {
        glbSpkCntslow_result_up[0] = 0;
        
        for(unsigned int i = 0; i < 684; i++) {
            scalar lout = outslow_result_up[i];
            
            float Isyn = 0;
            scalar in_1 = 0;
            scalar in_2 = 0;
            // pull inSyn values in a coalesced access
            float linSynud_no_delay_a_slow_result_up_in_1 = inSynud_no_delay_a_slow_result_up_in_1[i];
            in_1 += linSynud_no_delay_a_slow_result_up_in_1; linSynud_no_delay_a_slow_result_up_in_1 = 0;
            
            // pull inSyn values in a coalesced access
            float linSynud_slow_delay_a_slow_result_up_in_2 = inSynud_slow_delay_a_slow_result_up_in_2[i];
            in_2 += linSynud_slow_delay_a_slow_result_up_in_2; linSynud_slow_delay_a_slow_result_up_in_2 = 0;
            
            // calculate membrane potential
            lout = in_1*in_2*(in_1*in_2>0);
            
            outslow_result_up[i] = lout;
            // the post-synaptic dynamics
            
            inSynud_no_delay_a_slow_result_up_in_1[i] = linSynud_no_delay_a_slow_result_up_in_1;
            // the post-synaptic dynamics
            
            inSynud_slow_delay_a_slow_result_up_in_2[i] = linSynud_slow_delay_a_slow_result_up_in_2;
        }
    }
    // neuron group sum_h
     {
        glbSpkCntsum_h[0] = 0;
        
        for(unsigned int i = 0; i < 2; i++) {
            scalar la = asum_h[i];
            scalar la_rev = a_revsum_h[i];
            scalar la_slow = a_slowsum_h[i];
            scalar la_slow_rev = a_slow_revsum_h[i];
            scalar ldiff = diffsum_h[i];
            scalar lrhd_prog = rhd_progsum_h[i];
            scalar lwith_rhd_prog_smooth = with_rhd_prog_smoothsum_h[i];
            scalar lwith_rhd_reg_smooth = with_rhd_reg_smoothsum_h[i];
            
            float Isyn = 0;
            scalar in = 0;
            scalar in_slow = 0;
            scalar in_rev = 0;
            scalar in_slow_rev = 0;
            // pull inSyn values in a coalesced access
            float linSynslow_result_right_out_sum_h_in_slow = inSynslow_result_right_out_sum_h_in_slow[i];
            in_slow += linSynslow_result_right_out_sum_h_in_slow; linSynslow_result_right_out_sum_h_in_slow = 0;
            
            // pull inSyn values in a coalesced access
            float linSynslow_result_left_out_sum_h_in_slow_rev = inSynslow_result_left_out_sum_h_in_slow_rev[i];
            in_slow_rev += linSynslow_result_left_out_sum_h_in_slow_rev; linSynslow_result_left_out_sum_h_in_slow_rev = 0;
            
            // pull inSyn values in a coalesced access
            float linSynfast_result_right_out_sum_h_in = inSynfast_result_right_out_sum_h_in[i];
            in += linSynfast_result_right_out_sum_h_in; linSynfast_result_right_out_sum_h_in = 0;
            
            // pull inSyn values in a coalesced access
            float linSynfast_result_left_out_sum_h_in_rev = inSynfast_result_left_out_sum_h_in_rev[i];
            in_rev += linSynfast_result_left_out_sum_h_in_rev; linSynfast_result_left_out_sum_h_in_rev = 0;
            
            // calculate membrane potential
            if(la_slow<(0.00000000000000000e+00f)) {
                la_slow = (0.00000000000000000e+00f);
            }
            if(la<(0.00000000000000000e+00f)-0.001f) {
                la = 0;
            }
            if(la_rev<(0.00000000000000000e+00f)-0.001f) {
                la_rev = 0;
            }
            if(la_slow_rev<(0.00000000000000000e+00f)) {
                la_slow_rev = (0.00000000000000000e+00f);
            }
            la += DT * ((-la+in-(0.00000000000000000e+00f)*in_rev)/(2.00000000000000000e+01f));
            la_slow += DT * ((-la_slow+in_slow-(0.00000000000000000e+00f)*in_slow_rev)/(2.00000000000000000e+01f));
            la_rev += DT * ((-la_rev+in_rev-(0.00000000000000000e+00f)*in)/(2.00000000000000000e+01f));
            la_slow_rev += DT * ((-la_slow_rev+in_slow_rev-(0.00000000000000000e+00f)*in_slow)/(2.00000000000000000e+01f));
            lwith_rhd_prog_smooth += DT * (((la/(la_slow+(1.00000000000000000e+00f))-(1.00000000000000000e+04f)*((la_rev+la_slow_rev)-(la+la_slow))*((la_rev+la_slow_rev)-(la+la_slow)>0))*(la/(la_slow+(1.00000000000000000e+00f))-(1.00000000000000000e+04f)*((la_rev+la_slow_rev)-(la+la_slow))*((la_rev+la_slow_rev)-(la+la_slow)>0)>0)+0*(0.1f+(la/(la_slow+(1.00000000000000000e+00f))-(1.00000000000000000e+04f)*((la_rev+la_slow_rev)-(la+la_slow))*((la_rev+la_slow_rev)-(la+la_slow)>0))*(la/(la_slow+(1.00000000000000000e+00f))-(1.00000000000000000e+04f)*((la_rev+la_slow_rev)-(la+la_slow))*((la_rev+la_slow_rev)-(la+la_slow)>0)>0))-lwith_rhd_prog_smooth)/(4.00000000000000000e+00f));
            lwith_rhd_reg_smooth += DT * (((la_rev/(la_slow_rev+(1.00000000000000000e+00f))-(1.00000000000000000e+04f)*(-(la_rev+la_slow_rev)-(la+la_slow))*((la_rev+la_slow_rev)-(la+la_slow)<0))*(la_rev/(la_slow_rev+(1.00000000000000000e+00f))-(1.00000000000000000e+04f)*(-(la_rev+la_slow_rev)-(la+la_slow))*((la_rev+la_slow_rev)-(la+la_slow)<0)>0)+0*(0.01f+(la_rev/(la_slow_rev+(1.00000000000000000e+00f))-(1.00000000000000000e+04f)*(-(la_rev+la_slow_rev)-(la+la_slow))*((la_rev+la_slow_rev)-(la+la_slow)<0))*(la_rev/(la_slow_rev+(1.00000000000000000e+00f))-(1.00000000000000000e+04f)*(-(la_rev+la_slow_rev)-(la+la_slow))*((la_rev+la_slow_rev)-(la+la_slow)<0)>0))-lwith_rhd_reg_smooth)/(4.00000000000000000e+00f));
            ldiff = lwith_rhd_prog_smooth;
            lrhd_prog = (la_rev+la_slow_rev);
            
            asum_h[i] = la;
            a_revsum_h[i] = la_rev;
            a_slowsum_h[i] = la_slow;
            a_slow_revsum_h[i] = la_slow_rev;
            diffsum_h[i] = ldiff;
            rhd_progsum_h[i] = lrhd_prog;
            with_rhd_prog_smoothsum_h[i] = lwith_rhd_prog_smooth;
            with_rhd_reg_smoothsum_h[i] = lwith_rhd_reg_smooth;
            // the post-synaptic dynamics
            
            inSynslow_result_right_out_sum_h_in_slow[i] = linSynslow_result_right_out_sum_h_in_slow;
            // the post-synaptic dynamics
            
            inSynslow_result_left_out_sum_h_in_slow_rev[i] = linSynslow_result_left_out_sum_h_in_slow_rev;
            // the post-synaptic dynamics
            
            inSynfast_result_right_out_sum_h_in[i] = linSynfast_result_right_out_sum_h_in;
            // the post-synaptic dynamics
            
            inSynfast_result_left_out_sum_h_in_rev[i] = linSynfast_result_left_out_sum_h_in_rev;
        }
    }
    // neuron group sum_v
     {
        glbSpkCntsum_v[0] = 0;
        
        for(unsigned int i = 0; i < 1; i++) {
            scalar la = asum_v[i];
            scalar la_rev = a_revsum_v[i];
            scalar la_slow = a_slowsum_v[i];
            scalar la_slow_rev = a_slow_revsum_v[i];
            scalar ldiff = diffsum_v[i];
            scalar lrhd_prog = rhd_progsum_v[i];
            scalar lwith_rhd_prog_smooth = with_rhd_prog_smoothsum_v[i];
            scalar lwith_rhd_reg_smooth = with_rhd_reg_smoothsum_v[i];
            
            float Isyn = 0;
            scalar in = 0;
            scalar in_slow = 0;
            scalar in_rev = 0;
            scalar in_slow_rev = 0;
            // pull inSyn values in a coalesced access
            float linSynslow_result_up_out_sum_v_in_slow_rev = inSynslow_result_up_out_sum_v_in_slow_rev[i];
            in_slow_rev += linSynslow_result_up_out_sum_v_in_slow_rev; linSynslow_result_up_out_sum_v_in_slow_rev = 0;
            
            // pull inSyn values in a coalesced access
            float linSynslow_result_down_out_sum_v_in_slow = inSynslow_result_down_out_sum_v_in_slow[i];
            in_slow += linSynslow_result_down_out_sum_v_in_slow; linSynslow_result_down_out_sum_v_in_slow = 0;
            
            // pull inSyn values in a coalesced access
            float linSynfast_result_up_out_sum_v_in_rev = inSynfast_result_up_out_sum_v_in_rev[i];
            in_rev += linSynfast_result_up_out_sum_v_in_rev; linSynfast_result_up_out_sum_v_in_rev = 0;
            
            // pull inSyn values in a coalesced access
            float linSynfast_result_down_out_sum_v_in = inSynfast_result_down_out_sum_v_in[i];
            in += linSynfast_result_down_out_sum_v_in; linSynfast_result_down_out_sum_v_in = 0;
            
            // calculate membrane potential
            if(la_slow<(0.00000000000000000e+00f)) {
                la_slow = (0.00000000000000000e+00f);
            }
            if(la<(0.00000000000000000e+00f)-0.001f) {
                la = 0;
            }
            if(la_rev<(0.00000000000000000e+00f)-0.001f) {
                la_rev = 0;
            }
            if(la_slow_rev<(0.00000000000000000e+00f)) {
                la_slow_rev = (0.00000000000000000e+00f);
            }
            la += DT * ((-la+in-(0.00000000000000000e+00f)*in_rev)/(2.00000000000000000e+01f));
            la_slow += DT * ((-la_slow+in_slow-(0.00000000000000000e+00f)*in_slow_rev)/(2.00000000000000000e+01f));
            la_rev += DT * ((-la_rev+in_rev-(0.00000000000000000e+00f)*in)/(2.00000000000000000e+01f));
            la_slow_rev += DT * ((-la_slow_rev+in_slow_rev-(0.00000000000000000e+00f)*in_slow)/(2.00000000000000000e+01f));
            lwith_rhd_prog_smooth += DT * (((la/(la_slow+(1.00000000000000000e+00f))-(1.00000000000000000e+04f)*((la_rev+la_slow_rev)-(la+la_slow))*((la_rev+la_slow_rev)-(la+la_slow)>0))*(la/(la_slow+(1.00000000000000000e+00f))-(1.00000000000000000e+04f)*((la_rev+la_slow_rev)-(la+la_slow))*((la_rev+la_slow_rev)-(la+la_slow)>0)>0)+0*(0.1f+(la/(la_slow+(1.00000000000000000e+00f))-(1.00000000000000000e+04f)*((la_rev+la_slow_rev)-(la+la_slow))*((la_rev+la_slow_rev)-(la+la_slow)>0))*(la/(la_slow+(1.00000000000000000e+00f))-(1.00000000000000000e+04f)*((la_rev+la_slow_rev)-(la+la_slow))*((la_rev+la_slow_rev)-(la+la_slow)>0)>0))-lwith_rhd_prog_smooth)/(4.00000000000000000e+00f));
            lwith_rhd_reg_smooth += DT * (((la_rev/(la_slow_rev+(1.00000000000000000e+00f))-(1.00000000000000000e+04f)*(-(la_rev+la_slow_rev)-(la+la_slow))*((la_rev+la_slow_rev)-(la+la_slow)<0))*(la_rev/(la_slow_rev+(1.00000000000000000e+00f))-(1.00000000000000000e+04f)*(-(la_rev+la_slow_rev)-(la+la_slow))*((la_rev+la_slow_rev)-(la+la_slow)<0)>0)+0*(0.01f+(la_rev/(la_slow_rev+(1.00000000000000000e+00f))-(1.00000000000000000e+04f)*(-(la_rev+la_slow_rev)-(la+la_slow))*((la_rev+la_slow_rev)-(la+la_slow)<0))*(la_rev/(la_slow_rev+(1.00000000000000000e+00f))-(1.00000000000000000e+04f)*(-(la_rev+la_slow_rev)-(la+la_slow))*((la_rev+la_slow_rev)-(la+la_slow)<0)>0))-lwith_rhd_reg_smooth)/(4.00000000000000000e+00f));
            ldiff = lwith_rhd_prog_smooth;
            lrhd_prog = (la_rev+la_slow_rev);
            
            asum_v[i] = la;
            a_revsum_v[i] = la_rev;
            a_slowsum_v[i] = la_slow;
            a_slow_revsum_v[i] = la_slow_rev;
            diffsum_v[i] = ldiff;
            rhd_progsum_v[i] = lrhd_prog;
            with_rhd_prog_smoothsum_v[i] = lwith_rhd_prog_smooth;
            with_rhd_reg_smoothsum_v[i] = lwith_rhd_reg_smooth;
            // the post-synaptic dynamics
            
            inSynslow_result_up_out_sum_v_in_slow_rev[i] = linSynslow_result_up_out_sum_v_in_slow_rev;
            // the post-synaptic dynamics
            
            inSynslow_result_down_out_sum_v_in_slow[i] = linSynslow_result_down_out_sum_v_in_slow;
            // the post-synaptic dynamics
            
            inSynfast_result_up_out_sum_v_in_rev[i] = linSynfast_result_up_out_sum_v_in_rev;
            // the post-synaptic dynamics
            
            inSynfast_result_down_out_sum_v_in[i] = linSynfast_result_down_out_sum_v_in;
        }
    }
    // neuron group ud_fast_delay
     {
        glbSpkCntud_fast_delay[0] = 0;
        
        for(unsigned int i = 0; i < 684; i++) {
            scalar la = aud_fast_delay[i];
            
            float Isyn = 0;
            scalar in = 0;
            // pull inSyn values in a coalesced access
            float linSynpr_and_lamina_ud_out_ud_fast_delay_in = inSynpr_and_lamina_ud_out_ud_fast_delay_in[i];
            in += linSynpr_and_lamina_ud_out_ud_fast_delay_in; linSynpr_and_lamina_ud_out_ud_fast_delay_in = 0;
            
            // calculate membrane potential
            la += DT * ((-la+in)/(5.00000000000000000e+00f));
            
            aud_fast_delay[i] = la;
            // the post-synaptic dynamics
            
            inSynpr_and_lamina_ud_out_ud_fast_delay_in[i] = linSynpr_and_lamina_ud_out_ud_fast_delay_in;
        }
    }
    // neuron group ud_no_delay
     {
        glbSpkCntud_no_delay[0] = 0;
        
        for(unsigned int i = 0; i < 684; i++) {
            scalar la = aud_no_delay[i];
            
            float Isyn = 0;
            scalar in = 0;
            // pull inSyn values in a coalesced access
            float linSynpr_and_lamina_ud_out_ud_no_delay_in = inSynpr_and_lamina_ud_out_ud_no_delay_in[i];
            in += linSynpr_and_lamina_ud_out_ud_no_delay_in; linSynpr_and_lamina_ud_out_ud_no_delay_in = 0;
            
            // calculate membrane potential
            la += DT * ((-la+in)/(1.00000000000000000e+00f));
            
            aud_no_delay[i] = la;
            // the post-synaptic dynamics
            
            inSynpr_and_lamina_ud_out_ud_no_delay_in[i] = linSynpr_and_lamina_ud_out_ud_no_delay_in;
        }
    }
    // neuron group ud_slow_delay
     {
        glbSpkCntud_slow_delay[0] = 0;
        
        for(unsigned int i = 0; i < 684; i++) {
            scalar la = aud_slow_delay[i];
            
            float Isyn = 0;
            scalar in = 0;
            // pull inSyn values in a coalesced access
            float linSynpr_and_lamina_ud_out_ud_slow_delay_in = inSynpr_and_lamina_ud_out_ud_slow_delay_in[i];
            in += linSynpr_and_lamina_ud_out_ud_slow_delay_in; linSynpr_and_lamina_ud_out_ud_slow_delay_in = 0;
            
            // calculate membrane potential
            la += DT * ((-la+in)/(1.50000000000000000e+01f));
            
            aud_slow_delay[i] = la;
            // the post-synaptic dynamics
            
            inSynpr_and_lamina_ud_out_ud_slow_delay_in[i] = linSynpr_and_lamina_ud_out_ud_slow_delay_in;
        }
    }
}
