// Lean compiler output
// Module: P10Core.Model.Rules
// Imports: public import Init public meta import Init
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
LEAN_EXPORT uint8_t lp_p10__core_P10Core_Model_decidableRule___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Model_decidableRule___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Model_decidableRule___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Model_decidableRule(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_p10__core_P10Core_Model_decidableRule___redArg___lam__0(lean_object* v_inst_1_, lean_object* v_x_2_){
_start:
{
lean_object* v___x_3_; uint8_t v___x_4_; 
v___x_3_ = lean_apply_1(v_inst_1_, v_x_2_);
v___x_4_ = lean_unbox(v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Model_decidableRule___redArg___lam__0___boxed(lean_object* v_inst_5_, lean_object* v_x_6_){
_start:
{
uint8_t v_res_7_; lean_object* v_r_8_; 
v_res_7_ = lp_p10__core_P10Core_Model_decidableRule___redArg___lam__0(v_inst_5_, v_x_6_);
v_r_8_ = lean_box(v_res_7_);
return v_r_8_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Model_decidableRule___redArg(lean_object* v_inst_9_){
_start:
{
lean_object* v___f_10_; 
v___f_10_ = lean_alloc_closure((void*)(lp_p10__core_P10Core_Model_decidableRule___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_10_, 0, v_inst_9_);
return v___f_10_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Model_decidableRule(lean_object* v_Input_11_, lean_object* v_p_12_, lean_object* v_inst_13_){
_start:
{
lean_object* v___f_14_; 
v___f_14_ = lean_alloc_closure((void*)(lp_p10__core_P10Core_Model_decidableRule___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_14_, 0, v_inst_13_);
return v___f_14_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_p10__core_P10Core_Model_Rules(uint8_t builtin) {
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
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
