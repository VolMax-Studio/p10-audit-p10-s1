// Lean compiler output
// Module: P10Core.Instances.FourEvidence.Checker
// Imports: public import Init public meta import Init public import P10Core.Instances.FourEvidence.Model
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqEvidence_decEq(lean_object*, lean_object*);
uint8_t lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqClaim_decEq(lean_object*, lean_object*);
uint8_t lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqPreflightResult_decEq(uint8_t, uint8_t);
lean_object* lp_p10__core_P10Core_Instances_FourEvidence_inspect(lean_object*);
uint8_t lp_p10__core_P10Core_Spec_instDecidableEqVerdict(uint8_t, uint8_t);
uint8_t lp_p10__core_P10Core_Instances_FourEvidence_decideVerdict(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_p10__core_P10Core_Instances_FourEvidence_CheckCert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_CheckCert___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_p10__core_P10Core_Instances_FourEvidence_CheckCert(lean_object* v_D_1_, lean_object* v_P_2_, lean_object* v_c_3_, lean_object* v_e_4_, lean_object* v_00_u03ba_5_, uint8_t v_v_6_){
_start:
{
lean_object* v_protocolId_7_; lean_object* v_boundClaim_8_; lean_object* v_boundEvidence_9_; uint8_t v_preflight_10_; lean_object* v_target_11_; lean_object* v_checked_12_; uint8_t v_verdict_13_; uint8_t v___x_14_; 
v_protocolId_7_ = lean_ctor_get(v_00_u03ba_5_, 0);
lean_inc(v_protocolId_7_);
v_boundClaim_8_ = lean_ctor_get(v_00_u03ba_5_, 1);
lean_inc_ref(v_boundClaim_8_);
v_boundEvidence_9_ = lean_ctor_get(v_00_u03ba_5_, 2);
lean_inc_ref(v_boundEvidence_9_);
v_preflight_10_ = lean_ctor_get_uint8(v_00_u03ba_5_, sizeof(void*)*5);
v_target_11_ = lean_ctor_get(v_00_u03ba_5_, 3);
lean_inc(v_target_11_);
v_checked_12_ = lean_ctor_get(v_00_u03ba_5_, 4);
lean_inc(v_checked_12_);
v_verdict_13_ = lean_ctor_get_uint8(v_00_u03ba_5_, sizeof(void*)*5 + 1);
lean_dec_ref(v_00_u03ba_5_);
v___x_14_ = lean_nat_dec_eq(v_protocolId_7_, v_P_2_);
lean_dec(v_protocolId_7_);
if (v___x_14_ == 0)
{
lean_dec(v_checked_12_);
lean_dec(v_target_11_);
lean_dec_ref(v_boundEvidence_9_);
lean_dec_ref(v_boundClaim_8_);
lean_dec_ref(v_e_4_);
lean_dec_ref(v_c_3_);
lean_dec_ref(v_D_1_);
return v___x_14_;
}
else
{
lean_object* v___x_15_; lean_object* v___x_16_; uint8_t v___x_17_; 
lean_inc_ref(v_D_1_);
v___x_15_ = lean_apply_1(v_D_1_, v_boundEvidence_9_);
lean_inc_ref(v_e_4_);
v___x_16_ = lean_apply_1(v_D_1_, v_e_4_);
v___x_17_ = lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqEvidence_decEq(v___x_15_, v___x_16_);
if (v___x_17_ == 0)
{
lean_dec(v_checked_12_);
lean_dec(v_target_11_);
lean_dec_ref(v_boundClaim_8_);
lean_dec_ref(v_e_4_);
lean_dec_ref(v_c_3_);
return v___x_17_;
}
else
{
uint8_t v___x_18_; 
v___x_18_ = lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqClaim_decEq(v_boundClaim_8_, v_c_3_);
lean_dec_ref(v_boundClaim_8_);
if (v___x_18_ == 0)
{
lean_dec(v_checked_12_);
lean_dec(v_target_11_);
lean_dec_ref(v_e_4_);
lean_dec_ref(v_c_3_);
return v___x_18_;
}
else
{
uint8_t v_admissible_19_; uint8_t v___x_20_; 
v_admissible_19_ = lean_ctor_get_uint8(v_e_4_, sizeof(void*)*1 + 1);
v___x_20_ = lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqPreflightResult_decEq(v_preflight_10_, v_admissible_19_);
if (v___x_20_ == 0)
{
lean_dec(v_checked_12_);
lean_dec(v_target_11_);
lean_dec_ref(v_e_4_);
lean_dec_ref(v_c_3_);
return v___x_20_;
}
else
{
if (v_preflight_10_ == 0)
{
lean_dec(v_checked_12_);
lean_dec(v_target_11_);
lean_dec_ref(v_e_4_);
lean_dec_ref(v_c_3_);
return v_preflight_10_;
}
else
{
lean_object* v_expected_21_; uint8_t v___x_22_; 
v_expected_21_ = lean_ctor_get(v_c_3_, 0);
v___x_22_ = lean_nat_dec_eq(v_target_11_, v_expected_21_);
lean_dec(v_target_11_);
if (v___x_22_ == 0)
{
lean_dec(v_checked_12_);
lean_dec_ref(v_e_4_);
lean_dec_ref(v_c_3_);
return v___x_22_;
}
else
{
lean_object* v___x_23_; uint8_t v___x_24_; 
v___x_23_ = lp_p10__core_P10Core_Instances_FourEvidence_inspect(v_e_4_);
v___x_24_ = lean_nat_dec_eq(v_checked_12_, v___x_23_);
lean_dec(v___x_23_);
lean_dec(v_checked_12_);
if (v___x_24_ == 0)
{
lean_dec_ref(v_e_4_);
lean_dec_ref(v_c_3_);
return v___x_24_;
}
else
{
uint8_t v___x_25_; 
v___x_25_ = lp_p10__core_P10Core_Spec_instDecidableEqVerdict(v_verdict_13_, v_v_6_);
if (v___x_25_ == 0)
{
lean_dec_ref(v_e_4_);
lean_dec_ref(v_c_3_);
return v___x_25_;
}
else
{
uint8_t v___x_26_; uint8_t v___x_27_; 
v___x_26_ = lp_p10__core_P10Core_Instances_FourEvidence_decideVerdict(v_c_3_, v_e_4_);
v___x_27_ = lp_p10__core_P10Core_Spec_instDecidableEqVerdict(v_v_6_, v___x_26_);
if (v___x_27_ == 0)
{
return v___x_27_;
}
else
{
return v_preflight_10_;
}
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_CheckCert___boxed(lean_object* v_D_28_, lean_object* v_P_29_, lean_object* v_c_30_, lean_object* v_e_31_, lean_object* v_00_u03ba_32_, lean_object* v_v_33_){
_start:
{
uint8_t v_v_boxed_34_; uint8_t v_res_35_; lean_object* v_r_36_; 
v_v_boxed_34_ = lean_unbox(v_v_33_);
v_res_35_ = lp_p10__core_P10Core_Instances_FourEvidence_CheckCert(v_D_28_, v_P_29_, v_c_30_, v_e_31_, v_00_u03ba_32_, v_v_boxed_34_);
lean_dec(v_P_29_);
v_r_36_ = lean_box(v_res_35_);
return v_r_36_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_p10__core_P10Core_Instances_FourEvidence_Model(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_p10__core_P10Core_Instances_FourEvidence_Checker(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
lean_initialize_runtime_module();
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_p10__core_P10Core_Instances_FourEvidence_Model(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
