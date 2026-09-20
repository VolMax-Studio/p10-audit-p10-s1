// Lean compiler output
// Module: P10Core.Instances.FourEvidence.Model
// Imports: public import Init public meta import Init public import P10Core.Model.Calculus public import P10Core.Model.Rules
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
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
lean_object* lean_string_length(lean_object*);
uint8_t l_instDecidableEqList___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lp_p10__core_P10Core_Spec_instReprVerdict_repr(uint8_t, lean_object*);
uint8_t lp_p10__core_P10Core_Spec_instDecidableEqVerdict(uint8_t, uint8_t);
LEAN_EXPORT uint8_t lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqClaim_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqClaim_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqClaim(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqClaim___boxed(lean_object*, lean_object*);
static const lean_string_object lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__0 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__0_value;
static const lean_string_object lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "expected"};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__1 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__1_value;
static const lean_ctor_object lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__1_value)}};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__2 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__2_value;
static const lean_ctor_object lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__2_value)}};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__3 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__3_value;
static const lean_string_object lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__4 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__4_value;
static const lean_ctor_object lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__4_value)}};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__5 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__5_value;
static const lean_ctor_object lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__3_value),((lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__5_value)}};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__6 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__6_value;
static lean_once_cell_t lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__7;
static const lean_string_object lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__8 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__8_value;
static const lean_ctor_object lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__8_value)}};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__9 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__9_value;
static const lean_string_object lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "operationalizable"};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__10 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__10_value;
static const lean_ctor_object lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__10_value)}};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__11 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__11_value;
static lean_once_cell_t lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__12;
static const lean_string_object lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__13 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__13_value;
static lean_once_cell_t lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__14;
static lean_once_cell_t lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__15;
static const lean_ctor_object lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__0_value)}};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__16 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__16_value;
static const lean_ctor_object lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__13_value)}};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__17 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__17_value;
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim___closed__0 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim___closed__0_value;
LEAN_EXPORT const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim___closed__0_value;
LEAN_EXPORT uint8_t lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqEvidence_decEq___lam__0(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqEvidence_decEq___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqEvidence_decEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqEvidence_decEq___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqEvidence_decEq___closed__0 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqEvidence_decEq___closed__0_value;
LEAN_EXPORT uint8_t lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqEvidence_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqEvidence_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqEvidence(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqEvidence___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_Std_Format_joinSep___at___00List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0_spec__0(lean_object*, lean_object*);
static const lean_string_object lp_p10__core_List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* lp_p10__core_List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0___redArg___closed__0 = (const lean_object*)&lp_p10__core_List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0___redArg___closed__0_value;
static const lean_ctor_object lp_p10__core_List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_p10__core_List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0___redArg___closed__0_value)}};
static const lean_object* lp_p10__core_List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0___redArg___closed__1 = (const lean_object*)&lp_p10__core_List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0___redArg___closed__1_value;
static const lean_string_object lp_p10__core_List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* lp_p10__core_List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0___redArg___closed__2 = (const lean_object*)&lp_p10__core_List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0___redArg___closed__2_value;
static const lean_ctor_object lp_p10__core_List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_p10__core_List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0___redArg___closed__3 = (const lean_object*)&lp_p10__core_List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0___redArg___closed__3_value;
static const lean_string_object lp_p10__core_List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* lp_p10__core_List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0___redArg___closed__4 = (const lean_object*)&lp_p10__core_List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0___redArg___closed__4_value;
static lean_once_cell_t lp_p10__core_List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_p10__core_List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0___redArg___closed__5;
static lean_once_cell_t lp_p10__core_List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_p10__core_List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0___redArg___closed__6;
static const lean_ctor_object lp_p10__core_List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_p10__core_List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0___redArg___closed__2_value)}};
static const lean_object* lp_p10__core_List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0___redArg___closed__7 = (const lean_object*)&lp_p10__core_List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0___redArg___closed__7_value;
static const lean_ctor_object lp_p10__core_List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_p10__core_List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0___redArg___closed__4_value)}};
static const lean_object* lp_p10__core_List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0___redArg___closed__8 = (const lean_object*)&lp_p10__core_List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0___redArg___closed__8_value;
LEAN_EXPORT lean_object* lp_p10__core_List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0___redArg(lean_object*);
static const lean_string_object lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "entries"};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__0 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__0_value;
static const lean_ctor_object lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__0_value)}};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__1 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__1_value;
static const lean_ctor_object lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__1_value)}};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__2 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__2_value;
static const lean_ctor_object lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__2_value),((lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__5_value)}};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__3 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__3_value;
static lean_once_cell_t lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__4;
static const lean_string_object lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "externalReady"};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__5 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__5_value;
static const lean_ctor_object lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__5_value)}};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__6 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__6_value;
static lean_once_cell_t lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__7;
static const lean_string_object lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "admissible"};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__8 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__8_value;
static const lean_ctor_object lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__8_value)}};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__9 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__9_value;
static lean_once_cell_t lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__10;
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence___closed__0 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence___closed__0_value;
LEAN_EXPORT const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence___closed__0_value;
LEAN_EXPORT uint8_t lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqDigest_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqDigest_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqDigest(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqDigest___boxed(lean_object*, lean_object*);
static const lean_string_object lp_p10__core_P10Core_Instances_FourEvidence_instReprDigest_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "evidence"};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprDigest_repr___redArg___closed__0 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprDigest_repr___redArg___closed__0_value;
static const lean_ctor_object lp_p10__core_P10Core_Instances_FourEvidence_instReprDigest_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprDigest_repr___redArg___closed__0_value)}};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprDigest_repr___redArg___closed__1 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprDigest_repr___redArg___closed__1_value;
static const lean_ctor_object lp_p10__core_P10Core_Instances_FourEvidence_instReprDigest_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprDigest_repr___redArg___closed__1_value)}};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprDigest_repr___redArg___closed__2 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprDigest_repr___redArg___closed__2_value;
static const lean_ctor_object lp_p10__core_P10Core_Instances_FourEvidence_instReprDigest_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprDigest_repr___redArg___closed__2_value),((lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__5_value)}};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprDigest_repr___redArg___closed__3 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprDigest_repr___redArg___closed__3_value;
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprDigest_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprDigest_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprDigest_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_p10__core_P10Core_Instances_FourEvidence_instReprDigest___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_p10__core_P10Core_Instances_FourEvidence_instReprDigest_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprDigest___closed__0 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprDigest___closed__0_value;
LEAN_EXPORT const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprDigest = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprDigest___closed__0_value;
LEAN_EXPORT uint8_t lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqProtocol_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqProtocol_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqProtocol(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqProtocol___boxed(lean_object*, lean_object*);
static const lean_string_object lp_p10__core_P10Core_Instances_FourEvidence_instReprProtocol_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "id"};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprProtocol_repr___redArg___closed__0 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprProtocol_repr___redArg___closed__0_value;
static const lean_ctor_object lp_p10__core_P10Core_Instances_FourEvidence_instReprProtocol_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprProtocol_repr___redArg___closed__0_value)}};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprProtocol_repr___redArg___closed__1 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprProtocol_repr___redArg___closed__1_value;
static const lean_ctor_object lp_p10__core_P10Core_Instances_FourEvidence_instReprProtocol_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprProtocol_repr___redArg___closed__1_value)}};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprProtocol_repr___redArg___closed__2 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprProtocol_repr___redArg___closed__2_value;
static const lean_ctor_object lp_p10__core_P10Core_Instances_FourEvidence_instReprProtocol_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprProtocol_repr___redArg___closed__2_value),((lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__5_value)}};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprProtocol_repr___redArg___closed__3 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprProtocol_repr___redArg___closed__3_value;
static lean_once_cell_t lp_p10__core_P10Core_Instances_FourEvidence_instReprProtocol_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprProtocol_repr___redArg___closed__4;
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprProtocol_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprProtocol_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprProtocol_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_p10__core_P10Core_Instances_FourEvidence_instReprProtocol___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_p10__core_P10Core_Instances_FourEvidence_instReprProtocol_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprProtocol___closed__0 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprProtocol___closed__0_value;
LEAN_EXPORT const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprProtocol = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprProtocol___closed__0_value;
LEAN_EXPORT uint8_t lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqFormalTarget_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqFormalTarget_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqFormalTarget(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqFormalTarget___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprFormalTarget_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprFormalTarget_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprFormalTarget_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_p10__core_P10Core_Instances_FourEvidence_instReprFormalTarget___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_p10__core_P10Core_Instances_FourEvidence_instReprFormalTarget_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprFormalTarget___closed__0 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprFormalTarget___closed__0_value;
LEAN_EXPORT const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprFormalTarget = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprFormalTarget___closed__0_value;
LEAN_EXPORT uint8_t lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqCheckedEvidence_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqCheckedEvidence_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqCheckedEvidence(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqCheckedEvidence___boxed(lean_object*, lean_object*);
static const lean_string_object lp_p10__core_P10Core_Instances_FourEvidence_instReprCheckedEvidence_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "satisfying"};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprCheckedEvidence_repr___redArg___closed__0 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprCheckedEvidence_repr___redArg___closed__0_value;
static const lean_ctor_object lp_p10__core_P10Core_Instances_FourEvidence_instReprCheckedEvidence_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprCheckedEvidence_repr___redArg___closed__0_value)}};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprCheckedEvidence_repr___redArg___closed__1 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprCheckedEvidence_repr___redArg___closed__1_value;
static const lean_ctor_object lp_p10__core_P10Core_Instances_FourEvidence_instReprCheckedEvidence_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprCheckedEvidence_repr___redArg___closed__1_value)}};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprCheckedEvidence_repr___redArg___closed__2 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprCheckedEvidence_repr___redArg___closed__2_value;
static const lean_ctor_object lp_p10__core_P10Core_Instances_FourEvidence_instReprCheckedEvidence_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprCheckedEvidence_repr___redArg___closed__2_value),((lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__5_value)}};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprCheckedEvidence_repr___redArg___closed__3 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprCheckedEvidence_repr___redArg___closed__3_value;
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprCheckedEvidence_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprCheckedEvidence_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprCheckedEvidence_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_p10__core_P10Core_Instances_FourEvidence_instReprCheckedEvidence___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_p10__core_P10Core_Instances_FourEvidence_instReprCheckedEvidence_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprCheckedEvidence___closed__0 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprCheckedEvidence___closed__0_value;
LEAN_EXPORT const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprCheckedEvidence = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprCheckedEvidence___closed__0_value;
LEAN_EXPORT uint8_t lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqPreflightResult_decEq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqPreflightResult_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqPreflightResult(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqPreflightResult___boxed(lean_object*, lean_object*);
static const lean_string_object lp_p10__core_P10Core_Instances_FourEvidence_instReprPreflightResult_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ok"};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprPreflightResult_repr___redArg___closed__0 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprPreflightResult_repr___redArg___closed__0_value;
static const lean_ctor_object lp_p10__core_P10Core_Instances_FourEvidence_instReprPreflightResult_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprPreflightResult_repr___redArg___closed__0_value)}};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprPreflightResult_repr___redArg___closed__1 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprPreflightResult_repr___redArg___closed__1_value;
static const lean_ctor_object lp_p10__core_P10Core_Instances_FourEvidence_instReprPreflightResult_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprPreflightResult_repr___redArg___closed__1_value)}};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprPreflightResult_repr___redArg___closed__2 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprPreflightResult_repr___redArg___closed__2_value;
static const lean_ctor_object lp_p10__core_P10Core_Instances_FourEvidence_instReprPreflightResult_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprPreflightResult_repr___redArg___closed__2_value),((lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__5_value)}};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprPreflightResult_repr___redArg___closed__3 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprPreflightResult_repr___redArg___closed__3_value;
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprPreflightResult_repr___redArg(uint8_t);
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprPreflightResult_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprPreflightResult_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprPreflightResult_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_p10__core_P10Core_Instances_FourEvidence_instReprPreflightResult___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_p10__core_P10Core_Instances_FourEvidence_instReprPreflightResult_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprPreflightResult___closed__0 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprPreflightResult___closed__0_value;
LEAN_EXPORT const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprPreflightResult = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprPreflightResult___closed__0_value;
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_Blocker_ofNat(lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_Blocker_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqBlocker(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqBlocker___boxed(lean_object*, lean_object*);
static const lean_string_object lp_p10__core_P10Core_Instances_FourEvidence_instReprBlocker_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "P10Core.Instances.FourEvidence.Blocker.sourceUnavailable"};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprBlocker_repr___redArg___closed__0 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprBlocker_repr___redArg___closed__0_value;
static const lean_ctor_object lp_p10__core_P10Core_Instances_FourEvidence_instReprBlocker_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprBlocker_repr___redArg___closed__0_value)}};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprBlocker_repr___redArg___closed__1 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprBlocker_repr___redArg___closed__1_value;
static lean_once_cell_t lp_p10__core_P10Core_Instances_FourEvidence_instReprBlocker_repr___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprBlocker_repr___redArg___closed__2;
static lean_once_cell_t lp_p10__core_P10Core_Instances_FourEvidence_instReprBlocker_repr___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprBlocker_repr___redArg___closed__3;
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprBlocker_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprBlocker_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprBlocker_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprBlocker_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_p10__core_P10Core_Instances_FourEvidence_instReprBlocker___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_p10__core_P10Core_Instances_FourEvidence_instReprBlocker_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprBlocker___closed__0 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprBlocker___closed__0_value;
LEAN_EXPORT const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprBlocker = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprBlocker___closed__0_value;
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_concreteDigestModel___lam__0(lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_concreteDigestModel___lam__0___boxed(lean_object*);
static const lean_closure_object lp_p10__core_P10Core_Instances_FourEvidence_concreteDigestModel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_p10__core_P10Core_Instances_FourEvidence_concreteDigestModel___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_concreteDigestModel___closed__0 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_concreteDigestModel___closed__0_value;
LEAN_EXPORT const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_concreteDigestModel = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_concreteDigestModel___closed__0_value;
LEAN_EXPORT uint8_t lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqCertificate_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqCertificate_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqCertificate(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqCertificate___boxed(lean_object*, lean_object*);
static const lean_string_object lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "protocolId"};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__0 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__0_value;
static const lean_ctor_object lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__0_value)}};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__1 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__1_value;
static const lean_ctor_object lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__1_value)}};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__2 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__2_value;
static const lean_ctor_object lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__2_value),((lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__5_value)}};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__3 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__3_value;
static const lean_string_object lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "boundClaim"};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__4 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__4_value;
static const lean_ctor_object lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__4_value)}};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__5 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__5_value;
static const lean_string_object lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "boundEvidence"};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__6 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__6_value;
static const lean_ctor_object lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__6_value)}};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__7 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__7_value;
static const lean_string_object lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "preflight"};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__8 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__8_value;
static const lean_ctor_object lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__8_value)}};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__9 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__9_value;
static lean_once_cell_t lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__10;
static const lean_string_object lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "target"};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__11 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__11_value;
static const lean_ctor_object lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__11_value)}};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__12 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__12_value;
static lean_once_cell_t lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__13;
static const lean_string_object lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "checked"};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__14 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__14_value;
static const lean_ctor_object lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__14_value)}};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__15 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__15_value;
static const lean_string_object lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "verdict"};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__16 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__16_value;
static const lean_ctor_object lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__16_value)}};
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__17 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__17_value;
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate___closed__0 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate___closed__0_value;
LEAN_EXPORT const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate___closed__0_value;
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_formalize(lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_formalize___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_List_countP_go___at___00P10Core_Instances_FourEvidence_inspect_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_List_countP_go___at___00P10Core_Instances_FourEvidence_inspect_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_inspect(lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_inspect___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_p10__core_P10Core_Instances_FourEvidence_verifiedRule___lam__0(lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_verifiedRule___lam__0___boxed(lean_object*);
static const lean_closure_object lp_p10__core_P10Core_Instances_FourEvidence_verifiedRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_p10__core_P10Core_Instances_FourEvidence_verifiedRule___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_verifiedRule___closed__0 = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_verifiedRule___closed__0_value;
LEAN_EXPORT const lean_object* lp_p10__core_P10Core_Instances_FourEvidence_verifiedRule = (const lean_object*)&lp_p10__core_P10Core_Instances_FourEvidence_verifiedRule___closed__0_value;
LEAN_EXPORT uint8_t lp_p10__core_P10Core_Instances_FourEvidence_decideVerdict(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_decideVerdict___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_p10__core_P10Core_Instances_FourEvidence_runPreflight(lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_runPreflight___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_semantics(lean_object*);
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_semantics___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqClaim_decEq(lean_object* v_x_1_, lean_object* v_x_2_){
_start:
{
lean_object* v_expected_3_; uint8_t v_operationalizable_4_; lean_object* v_expected_5_; uint8_t v_operationalizable_6_; uint8_t v___x_7_; 
v_expected_3_ = lean_ctor_get(v_x_1_, 0);
v_operationalizable_4_ = lean_ctor_get_uint8(v_x_1_, sizeof(void*)*1);
v_expected_5_ = lean_ctor_get(v_x_2_, 0);
v_operationalizable_6_ = lean_ctor_get_uint8(v_x_2_, sizeof(void*)*1);
v___x_7_ = lean_nat_dec_eq(v_expected_3_, v_expected_5_);
if (v___x_7_ == 0)
{
return v___x_7_;
}
else
{
if (v_operationalizable_4_ == 0)
{
if (v_operationalizable_6_ == 0)
{
return v___x_7_;
}
else
{
return v_operationalizable_4_;
}
}
else
{
return v_operationalizable_6_;
}
}
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqClaim_decEq___boxed(lean_object* v_x_8_, lean_object* v_x_9_){
_start:
{
uint8_t v_res_10_; lean_object* v_r_11_; 
v_res_10_ = lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqClaim_decEq(v_x_8_, v_x_9_);
lean_dec_ref(v_x_9_);
lean_dec_ref(v_x_8_);
v_r_11_ = lean_box(v_res_10_);
return v_r_11_;
}
}
LEAN_EXPORT uint8_t lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqClaim(lean_object* v_x_12_, lean_object* v_x_13_){
_start:
{
uint8_t v___x_14_; 
v___x_14_ = lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqClaim_decEq(v_x_12_, v_x_13_);
return v___x_14_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqClaim___boxed(lean_object* v_x_15_, lean_object* v_x_16_){
_start:
{
uint8_t v_res_17_; lean_object* v_r_18_; 
v_res_17_ = lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqClaim(v_x_15_, v_x_16_);
lean_dec_ref(v_x_16_);
lean_dec_ref(v_x_15_);
v_r_18_ = lean_box(v_res_17_);
return v_r_18_;
}
}
static lean_object* _init_lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_32_; lean_object* v___x_33_; 
v___x_32_ = lean_unsigned_to_nat(12u);
v___x_33_ = lean_nat_to_int(v___x_32_);
return v___x_33_;
}
}
static lean_object* _init_lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_40_ = lean_unsigned_to_nat(21u);
v___x_41_ = lean_nat_to_int(v___x_40_);
return v___x_41_;
}
}
static lean_object* _init_lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__14(void){
_start:
{
lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_43_ = ((lean_object*)(lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__0));
v___x_44_ = lean_string_length(v___x_43_);
return v___x_44_;
}
}
static lean_object* _init_lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_45_; lean_object* v___x_46_; 
v___x_45_ = lean_obj_once(&lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__14, &lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__14_once, _init_lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__14);
v___x_46_ = lean_nat_to_int(v___x_45_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg(lean_object* v_x_51_){
_start:
{
lean_object* v_expected_52_; uint8_t v_operationalizable_53_; lean_object* v___x_55_; uint8_t v_isShared_56_; uint8_t v_isSharedCheck_87_; 
v_expected_52_ = lean_ctor_get(v_x_51_, 0);
v_operationalizable_53_ = lean_ctor_get_uint8(v_x_51_, sizeof(void*)*1);
v_isSharedCheck_87_ = !lean_is_exclusive(v_x_51_);
if (v_isSharedCheck_87_ == 0)
{
v___x_55_ = v_x_51_;
v_isShared_56_ = v_isSharedCheck_87_;
goto v_resetjp_54_;
}
else
{
lean_inc(v_expected_52_);
lean_dec(v_x_51_);
v___x_55_ = lean_box(0);
v_isShared_56_ = v_isSharedCheck_87_;
goto v_resetjp_54_;
}
v_resetjp_54_:
{
lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; uint8_t v___x_63_; lean_object* v___x_65_; 
v___x_57_ = ((lean_object*)(lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__5));
v___x_58_ = ((lean_object*)(lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__6));
v___x_59_ = lean_obj_once(&lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__7, &lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__7_once, _init_lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__7);
v___x_60_ = l_Nat_reprFast(v_expected_52_);
v___x_61_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_61_, 0, v___x_60_);
v___x_62_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_62_, 0, v___x_59_);
lean_ctor_set(v___x_62_, 1, v___x_61_);
v___x_63_ = 0;
if (v_isShared_56_ == 0)
{
lean_ctor_set_tag(v___x_55_, 6);
lean_ctor_set(v___x_55_, 0, v___x_62_);
v___x_65_ = v___x_55_;
goto v_reusejp_64_;
}
else
{
lean_object* v_reuseFailAlloc_86_; 
v_reuseFailAlloc_86_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v_reuseFailAlloc_86_, 0, v___x_62_);
v___x_65_ = v_reuseFailAlloc_86_;
goto v_reusejp_64_;
}
v_reusejp_64_:
{
lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; 
lean_ctor_set_uint8(v___x_65_, sizeof(void*)*1, v___x_63_);
v___x_66_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_66_, 0, v___x_58_);
lean_ctor_set(v___x_66_, 1, v___x_65_);
v___x_67_ = ((lean_object*)(lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__9));
v___x_68_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_68_, 0, v___x_66_);
lean_ctor_set(v___x_68_, 1, v___x_67_);
v___x_69_ = lean_box(1);
v___x_70_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_70_, 0, v___x_68_);
lean_ctor_set(v___x_70_, 1, v___x_69_);
v___x_71_ = ((lean_object*)(lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__11));
v___x_72_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_72_, 0, v___x_70_);
lean_ctor_set(v___x_72_, 1, v___x_71_);
v___x_73_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_73_, 0, v___x_72_);
lean_ctor_set(v___x_73_, 1, v___x_57_);
v___x_74_ = lean_obj_once(&lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__12, &lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__12_once, _init_lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__12);
v___x_75_ = l_Bool_repr___redArg(v_operationalizable_53_);
v___x_76_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_76_, 0, v___x_74_);
lean_ctor_set(v___x_76_, 1, v___x_75_);
v___x_77_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_77_, 0, v___x_76_);
lean_ctor_set_uint8(v___x_77_, sizeof(void*)*1, v___x_63_);
v___x_78_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_78_, 0, v___x_73_);
lean_ctor_set(v___x_78_, 1, v___x_77_);
v___x_79_ = lean_obj_once(&lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__15, &lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__15_once, _init_lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__15);
v___x_80_ = ((lean_object*)(lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__16));
v___x_81_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_81_, 0, v___x_80_);
lean_ctor_set(v___x_81_, 1, v___x_78_);
v___x_82_ = ((lean_object*)(lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__17));
v___x_83_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_83_, 0, v___x_81_);
lean_ctor_set(v___x_83_, 1, v___x_82_);
v___x_84_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_84_, 0, v___x_79_);
lean_ctor_set(v___x_84_, 1, v___x_83_);
v___x_85_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_85_, 0, v___x_84_);
lean_ctor_set_uint8(v___x_85_, sizeof(void*)*1, v___x_63_);
return v___x_85_;
}
}
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr(lean_object* v_x_88_, lean_object* v_prec_89_){
_start:
{
lean_object* v___x_90_; 
v___x_90_ = lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg(v_x_88_);
return v___x_90_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___boxed(lean_object* v_x_91_, lean_object* v_prec_92_){
_start:
{
lean_object* v_res_93_; 
v_res_93_ = lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr(v_x_91_, v_prec_92_);
lean_dec(v_prec_92_);
return v_res_93_;
}
}
LEAN_EXPORT uint8_t lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqEvidence_decEq___lam__0(uint8_t v___y_96_, uint8_t v___y_97_){
_start:
{
if (v___y_96_ == 0)
{
if (v___y_97_ == 0)
{
uint8_t v___x_98_; 
v___x_98_ = 1;
return v___x_98_;
}
else
{
return v___y_96_;
}
}
else
{
return v___y_97_;
}
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqEvidence_decEq___lam__0___boxed(lean_object* v___y_99_, lean_object* v___y_100_){
_start:
{
uint8_t v___y_122__boxed_101_; uint8_t v___y_123__boxed_102_; uint8_t v_res_103_; lean_object* v_r_104_; 
v___y_122__boxed_101_ = lean_unbox(v___y_99_);
v___y_123__boxed_102_ = lean_unbox(v___y_100_);
v_res_103_ = lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqEvidence_decEq___lam__0(v___y_122__boxed_101_, v___y_123__boxed_102_);
v_r_104_ = lean_box(v_res_103_);
return v_r_104_;
}
}
LEAN_EXPORT uint8_t lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqEvidence_decEq(lean_object* v_x_106_, lean_object* v_x_107_){
_start:
{
lean_object* v_entries_108_; uint8_t v_externalReady_109_; uint8_t v_admissible_110_; lean_object* v_entries_111_; uint8_t v_externalReady_112_; uint8_t v_admissible_113_; lean_object* v___f_114_; uint8_t v___x_115_; 
v_entries_108_ = lean_ctor_get(v_x_106_, 0);
lean_inc(v_entries_108_);
v_externalReady_109_ = lean_ctor_get_uint8(v_x_106_, sizeof(void*)*1);
v_admissible_110_ = lean_ctor_get_uint8(v_x_106_, sizeof(void*)*1 + 1);
lean_dec_ref(v_x_106_);
v_entries_111_ = lean_ctor_get(v_x_107_, 0);
lean_inc(v_entries_111_);
v_externalReady_112_ = lean_ctor_get_uint8(v_x_107_, sizeof(void*)*1);
v_admissible_113_ = lean_ctor_get_uint8(v_x_107_, sizeof(void*)*1 + 1);
lean_dec_ref(v_x_107_);
v___f_114_ = ((lean_object*)(lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqEvidence_decEq___closed__0));
v___x_115_ = l_instDecidableEqList___redArg(v___f_114_, v_entries_108_, v_entries_111_);
if (v___x_115_ == 0)
{
return v___x_115_;
}
else
{
if (v_externalReady_109_ == 0)
{
if (v_externalReady_112_ == 0)
{
goto v___jp_116_;
}
else
{
return v_externalReady_109_;
}
}
else
{
if (v_externalReady_112_ == 0)
{
return v_externalReady_112_;
}
else
{
goto v___jp_116_;
}
}
}
v___jp_116_:
{
if (v_admissible_110_ == 0)
{
if (v_admissible_113_ == 0)
{
return v___x_115_;
}
else
{
return v_admissible_110_;
}
}
else
{
return v_admissible_113_;
}
}
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqEvidence_decEq___boxed(lean_object* v_x_117_, lean_object* v_x_118_){
_start:
{
uint8_t v_res_119_; lean_object* v_r_120_; 
v_res_119_ = lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqEvidence_decEq(v_x_117_, v_x_118_);
v_r_120_ = lean_box(v_res_119_);
return v_r_120_;
}
}
LEAN_EXPORT uint8_t lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqEvidence(lean_object* v_x_121_, lean_object* v_x_122_){
_start:
{
uint8_t v___x_123_; 
v___x_123_ = lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqEvidence_decEq(v_x_121_, v_x_122_);
return v___x_123_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqEvidence___boxed(lean_object* v_x_124_, lean_object* v_x_125_){
_start:
{
uint8_t v_res_126_; lean_object* v_r_127_; 
v_res_126_ = lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqEvidence(v_x_124_, v_x_125_);
v_r_127_ = lean_box(v_res_126_);
return v_r_127_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0_spec__0_spec__1_spec__2(lean_object* v_x_128_, lean_object* v_x_129_, lean_object* v_x_130_){
_start:
{
if (lean_obj_tag(v_x_130_) == 0)
{
lean_dec(v_x_128_);
return v_x_129_;
}
else
{
lean_object* v_head_131_; lean_object* v_tail_132_; lean_object* v___x_134_; uint8_t v_isShared_135_; uint8_t v_isSharedCheck_143_; 
v_head_131_ = lean_ctor_get(v_x_130_, 0);
v_tail_132_ = lean_ctor_get(v_x_130_, 1);
v_isSharedCheck_143_ = !lean_is_exclusive(v_x_130_);
if (v_isSharedCheck_143_ == 0)
{
v___x_134_ = v_x_130_;
v_isShared_135_ = v_isSharedCheck_143_;
goto v_resetjp_133_;
}
else
{
lean_inc(v_tail_132_);
lean_inc(v_head_131_);
lean_dec(v_x_130_);
v___x_134_ = lean_box(0);
v_isShared_135_ = v_isSharedCheck_143_;
goto v_resetjp_133_;
}
v_resetjp_133_:
{
lean_object* v___x_137_; 
lean_inc(v_x_128_);
if (v_isShared_135_ == 0)
{
lean_ctor_set_tag(v___x_134_, 5);
lean_ctor_set(v___x_134_, 1, v_x_128_);
lean_ctor_set(v___x_134_, 0, v_x_129_);
v___x_137_ = v___x_134_;
goto v_reusejp_136_;
}
else
{
lean_object* v_reuseFailAlloc_142_; 
v_reuseFailAlloc_142_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_142_, 0, v_x_129_);
lean_ctor_set(v_reuseFailAlloc_142_, 1, v_x_128_);
v___x_137_ = v_reuseFailAlloc_142_;
goto v_reusejp_136_;
}
v_reusejp_136_:
{
uint8_t v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; 
v___x_138_ = lean_unbox(v_head_131_);
lean_dec(v_head_131_);
v___x_139_ = l_Bool_repr___redArg(v___x_138_);
v___x_140_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_140_, 0, v___x_137_);
lean_ctor_set(v___x_140_, 1, v___x_139_);
v_x_129_ = v___x_140_;
v_x_130_ = v_tail_132_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_p10__core_List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0_spec__0_spec__1(lean_object* v_x_144_, lean_object* v_x_145_, lean_object* v_x_146_){
_start:
{
if (lean_obj_tag(v_x_146_) == 0)
{
lean_dec(v_x_144_);
return v_x_145_;
}
else
{
lean_object* v_head_147_; lean_object* v_tail_148_; lean_object* v___x_150_; uint8_t v_isShared_151_; uint8_t v_isSharedCheck_159_; 
v_head_147_ = lean_ctor_get(v_x_146_, 0);
v_tail_148_ = lean_ctor_get(v_x_146_, 1);
v_isSharedCheck_159_ = !lean_is_exclusive(v_x_146_);
if (v_isSharedCheck_159_ == 0)
{
v___x_150_ = v_x_146_;
v_isShared_151_ = v_isSharedCheck_159_;
goto v_resetjp_149_;
}
else
{
lean_inc(v_tail_148_);
lean_inc(v_head_147_);
lean_dec(v_x_146_);
v___x_150_ = lean_box(0);
v_isShared_151_ = v_isSharedCheck_159_;
goto v_resetjp_149_;
}
v_resetjp_149_:
{
lean_object* v___x_153_; 
lean_inc(v_x_144_);
if (v_isShared_151_ == 0)
{
lean_ctor_set_tag(v___x_150_, 5);
lean_ctor_set(v___x_150_, 1, v_x_144_);
lean_ctor_set(v___x_150_, 0, v_x_145_);
v___x_153_ = v___x_150_;
goto v_reusejp_152_;
}
else
{
lean_object* v_reuseFailAlloc_158_; 
v_reuseFailAlloc_158_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_158_, 0, v_x_145_);
lean_ctor_set(v_reuseFailAlloc_158_, 1, v_x_144_);
v___x_153_ = v_reuseFailAlloc_158_;
goto v_reusejp_152_;
}
v_reusejp_152_:
{
uint8_t v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_154_ = lean_unbox(v_head_147_);
lean_dec(v_head_147_);
v___x_155_ = l_Bool_repr___redArg(v___x_154_);
v___x_156_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_156_, 0, v___x_153_);
lean_ctor_set(v___x_156_, 1, v___x_155_);
v___x_157_ = lp_p10__core_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0_spec__0_spec__1_spec__2(v_x_144_, v___x_156_, v_tail_148_);
return v___x_157_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_p10__core_Std_Format_joinSep___at___00List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0_spec__0(lean_object* v_x_160_, lean_object* v_x_161_){
_start:
{
if (lean_obj_tag(v_x_160_) == 0)
{
lean_object* v___x_162_; 
lean_dec(v_x_161_);
v___x_162_ = lean_box(0);
return v___x_162_;
}
else
{
lean_object* v_tail_163_; 
v_tail_163_ = lean_ctor_get(v_x_160_, 1);
if (lean_obj_tag(v_tail_163_) == 0)
{
lean_object* v_head_164_; uint8_t v___x_165_; lean_object* v___x_166_; 
lean_dec(v_x_161_);
v_head_164_ = lean_ctor_get(v_x_160_, 0);
lean_inc(v_head_164_);
lean_dec_ref_known(v_x_160_, 2);
v___x_165_ = lean_unbox(v_head_164_);
lean_dec(v_head_164_);
v___x_166_ = l_Bool_repr___redArg(v___x_165_);
return v___x_166_;
}
else
{
lean_object* v_head_167_; uint8_t v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; 
lean_inc(v_tail_163_);
v_head_167_ = lean_ctor_get(v_x_160_, 0);
lean_inc(v_head_167_);
lean_dec_ref_known(v_x_160_, 2);
v___x_168_ = lean_unbox(v_head_167_);
lean_dec(v_head_167_);
v___x_169_ = l_Bool_repr___redArg(v___x_168_);
v___x_170_ = lp_p10__core_List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0_spec__0_spec__1(v_x_161_, v___x_169_, v_tail_163_);
return v___x_170_;
}
}
}
}
static lean_object* _init_lp_p10__core_List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0___redArg___closed__5(void){
_start:
{
lean_object* v___x_179_; lean_object* v___x_180_; 
v___x_179_ = ((lean_object*)(lp_p10__core_List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0___redArg___closed__2));
v___x_180_ = lean_string_length(v___x_179_);
return v___x_180_;
}
}
static lean_object* _init_lp_p10__core_List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0___redArg___closed__6(void){
_start:
{
lean_object* v___x_181_; lean_object* v___x_182_; 
v___x_181_ = lean_obj_once(&lp_p10__core_List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0___redArg___closed__5, &lp_p10__core_List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0___redArg___closed__5_once, _init_lp_p10__core_List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0___redArg___closed__5);
v___x_182_ = lean_nat_to_int(v___x_181_);
return v___x_182_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0___redArg(lean_object* v_a_187_){
_start:
{
if (lean_obj_tag(v_a_187_) == 0)
{
lean_object* v___x_188_; 
v___x_188_ = ((lean_object*)(lp_p10__core_List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0___redArg___closed__1));
return v___x_188_;
}
else
{
lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; 
v___x_189_ = ((lean_object*)(lp_p10__core_List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0___redArg___closed__3));
v___x_190_ = lp_p10__core_Std_Format_joinSep___at___00List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0_spec__0(v_a_187_, v___x_189_);
v___x_191_ = lean_obj_once(&lp_p10__core_List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0___redArg___closed__6, &lp_p10__core_List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0___redArg___closed__6_once, _init_lp_p10__core_List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0___redArg___closed__6);
v___x_192_ = ((lean_object*)(lp_p10__core_List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0___redArg___closed__7));
v___x_193_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_193_, 0, v___x_192_);
lean_ctor_set(v___x_193_, 1, v___x_190_);
v___x_194_ = ((lean_object*)(lp_p10__core_List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0___redArg___closed__8));
v___x_195_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_195_, 0, v___x_193_);
lean_ctor_set(v___x_195_, 1, v___x_194_);
v___x_196_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_196_, 0, v___x_191_);
lean_ctor_set(v___x_196_, 1, v___x_195_);
v___x_197_ = l_Std_Format_fill(v___x_196_);
return v___x_197_;
}
}
}
static lean_object* _init_lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_207_; lean_object* v___x_208_; 
v___x_207_ = lean_unsigned_to_nat(11u);
v___x_208_ = lean_nat_to_int(v___x_207_);
return v___x_208_;
}
}
static lean_object* _init_lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_212_; lean_object* v___x_213_; 
v___x_212_ = lean_unsigned_to_nat(17u);
v___x_213_ = lean_nat_to_int(v___x_212_);
return v___x_213_;
}
}
static lean_object* _init_lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_217_; lean_object* v___x_218_; 
v___x_217_ = lean_unsigned_to_nat(14u);
v___x_218_ = lean_nat_to_int(v___x_217_);
return v___x_218_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg(lean_object* v_x_219_){
_start:
{
lean_object* v_entries_220_; uint8_t v_externalReady_221_; uint8_t v_admissible_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; uint8_t v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; 
v_entries_220_ = lean_ctor_get(v_x_219_, 0);
lean_inc(v_entries_220_);
v_externalReady_221_ = lean_ctor_get_uint8(v_x_219_, sizeof(void*)*1);
v_admissible_222_ = lean_ctor_get_uint8(v_x_219_, sizeof(void*)*1 + 1);
lean_dec_ref(v_x_219_);
v___x_223_ = ((lean_object*)(lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__5));
v___x_224_ = ((lean_object*)(lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__3));
v___x_225_ = lean_obj_once(&lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__4, &lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__4_once, _init_lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__4);
v___x_226_ = lp_p10__core_List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0___redArg(v_entries_220_);
v___x_227_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_227_, 0, v___x_225_);
lean_ctor_set(v___x_227_, 1, v___x_226_);
v___x_228_ = 0;
v___x_229_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_229_, 0, v___x_227_);
lean_ctor_set_uint8(v___x_229_, sizeof(void*)*1, v___x_228_);
v___x_230_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_230_, 0, v___x_224_);
lean_ctor_set(v___x_230_, 1, v___x_229_);
v___x_231_ = ((lean_object*)(lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__9));
v___x_232_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_232_, 0, v___x_230_);
lean_ctor_set(v___x_232_, 1, v___x_231_);
v___x_233_ = lean_box(1);
v___x_234_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_234_, 0, v___x_232_);
lean_ctor_set(v___x_234_, 1, v___x_233_);
v___x_235_ = ((lean_object*)(lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__6));
v___x_236_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_236_, 0, v___x_234_);
lean_ctor_set(v___x_236_, 1, v___x_235_);
v___x_237_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_237_, 0, v___x_236_);
lean_ctor_set(v___x_237_, 1, v___x_223_);
v___x_238_ = lean_obj_once(&lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__7, &lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__7_once, _init_lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__7);
v___x_239_ = l_Bool_repr___redArg(v_externalReady_221_);
v___x_240_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_240_, 0, v___x_238_);
lean_ctor_set(v___x_240_, 1, v___x_239_);
v___x_241_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_241_, 0, v___x_240_);
lean_ctor_set_uint8(v___x_241_, sizeof(void*)*1, v___x_228_);
v___x_242_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_242_, 0, v___x_237_);
lean_ctor_set(v___x_242_, 1, v___x_241_);
v___x_243_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_243_, 0, v___x_242_);
lean_ctor_set(v___x_243_, 1, v___x_231_);
v___x_244_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_244_, 0, v___x_243_);
lean_ctor_set(v___x_244_, 1, v___x_233_);
v___x_245_ = ((lean_object*)(lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__9));
v___x_246_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_246_, 0, v___x_244_);
lean_ctor_set(v___x_246_, 1, v___x_245_);
v___x_247_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_247_, 0, v___x_246_);
lean_ctor_set(v___x_247_, 1, v___x_223_);
v___x_248_ = lean_obj_once(&lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__10, &lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__10_once, _init_lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__10);
v___x_249_ = l_Bool_repr___redArg(v_admissible_222_);
v___x_250_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_250_, 0, v___x_248_);
lean_ctor_set(v___x_250_, 1, v___x_249_);
v___x_251_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_251_, 0, v___x_250_);
lean_ctor_set_uint8(v___x_251_, sizeof(void*)*1, v___x_228_);
v___x_252_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_252_, 0, v___x_247_);
lean_ctor_set(v___x_252_, 1, v___x_251_);
v___x_253_ = lean_obj_once(&lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__15, &lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__15_once, _init_lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__15);
v___x_254_ = ((lean_object*)(lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__16));
v___x_255_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_255_, 0, v___x_254_);
lean_ctor_set(v___x_255_, 1, v___x_252_);
v___x_256_ = ((lean_object*)(lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__17));
v___x_257_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_257_, 0, v___x_255_);
lean_ctor_set(v___x_257_, 1, v___x_256_);
v___x_258_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_258_, 0, v___x_253_);
lean_ctor_set(v___x_258_, 1, v___x_257_);
v___x_259_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_259_, 0, v___x_258_);
lean_ctor_set_uint8(v___x_259_, sizeof(void*)*1, v___x_228_);
return v___x_259_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr(lean_object* v_x_260_, lean_object* v_prec_261_){
_start:
{
lean_object* v___x_262_; 
v___x_262_ = lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg(v_x_260_);
return v___x_262_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___boxed(lean_object* v_x_263_, lean_object* v_prec_264_){
_start:
{
lean_object* v_res_265_; 
v_res_265_ = lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr(v_x_263_, v_prec_264_);
lean_dec(v_prec_264_);
return v_res_265_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0(lean_object* v_a_266_, lean_object* v_n_267_){
_start:
{
lean_object* v___x_268_; 
v___x_268_ = lp_p10__core_List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0___redArg(v_a_266_);
return v___x_268_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0___boxed(lean_object* v_a_269_, lean_object* v_n_270_){
_start:
{
lean_object* v_res_271_; 
v_res_271_ = lp_p10__core_List_repr_x27___at___00P10Core_Instances_FourEvidence_instReprEvidence_repr_spec__0(v_a_269_, v_n_270_);
lean_dec(v_n_270_);
return v_res_271_;
}
}
LEAN_EXPORT uint8_t lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqDigest_decEq(lean_object* v_x_274_, lean_object* v_x_275_){
_start:
{
uint8_t v___x_276_; 
v___x_276_ = lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqEvidence_decEq(v_x_274_, v_x_275_);
return v___x_276_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqDigest_decEq___boxed(lean_object* v_x_277_, lean_object* v_x_278_){
_start:
{
uint8_t v_res_279_; lean_object* v_r_280_; 
v_res_279_ = lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqDigest_decEq(v_x_277_, v_x_278_);
v_r_280_ = lean_box(v_res_279_);
return v_r_280_;
}
}
LEAN_EXPORT uint8_t lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqDigest(lean_object* v_x_281_, lean_object* v_x_282_){
_start:
{
uint8_t v___x_283_; 
v___x_283_ = lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqEvidence_decEq(v_x_281_, v_x_282_);
return v___x_283_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqDigest___boxed(lean_object* v_x_284_, lean_object* v_x_285_){
_start:
{
uint8_t v_res_286_; lean_object* v_r_287_; 
v_res_286_ = lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqDigest(v_x_284_, v_x_285_);
v_r_287_ = lean_box(v_res_286_);
return v_r_287_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprDigest_repr___redArg(lean_object* v_x_297_){
_start:
{
lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; uint8_t v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; 
v___x_298_ = ((lean_object*)(lp_p10__core_P10Core_Instances_FourEvidence_instReprDigest_repr___redArg___closed__3));
v___x_299_ = lean_obj_once(&lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__7, &lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__7_once, _init_lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__7);
v___x_300_ = lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg(v_x_297_);
v___x_301_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_301_, 0, v___x_299_);
lean_ctor_set(v___x_301_, 1, v___x_300_);
v___x_302_ = 0;
v___x_303_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_303_, 0, v___x_301_);
lean_ctor_set_uint8(v___x_303_, sizeof(void*)*1, v___x_302_);
v___x_304_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_304_, 0, v___x_298_);
lean_ctor_set(v___x_304_, 1, v___x_303_);
v___x_305_ = lean_obj_once(&lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__15, &lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__15_once, _init_lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__15);
v___x_306_ = ((lean_object*)(lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__16));
v___x_307_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_307_, 0, v___x_306_);
lean_ctor_set(v___x_307_, 1, v___x_304_);
v___x_308_ = ((lean_object*)(lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__17));
v___x_309_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_309_, 0, v___x_307_);
lean_ctor_set(v___x_309_, 1, v___x_308_);
v___x_310_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_310_, 0, v___x_305_);
lean_ctor_set(v___x_310_, 1, v___x_309_);
v___x_311_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_311_, 0, v___x_310_);
lean_ctor_set_uint8(v___x_311_, sizeof(void*)*1, v___x_302_);
return v___x_311_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprDigest_repr(lean_object* v_x_312_, lean_object* v_prec_313_){
_start:
{
lean_object* v___x_314_; 
v___x_314_ = lp_p10__core_P10Core_Instances_FourEvidence_instReprDigest_repr___redArg(v_x_312_);
return v___x_314_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprDigest_repr___boxed(lean_object* v_x_315_, lean_object* v_prec_316_){
_start:
{
lean_object* v_res_317_; 
v_res_317_ = lp_p10__core_P10Core_Instances_FourEvidence_instReprDigest_repr(v_x_315_, v_prec_316_);
lean_dec(v_prec_316_);
return v_res_317_;
}
}
LEAN_EXPORT uint8_t lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqProtocol_decEq(lean_object* v_x_320_, lean_object* v_x_321_){
_start:
{
uint8_t v___x_322_; 
v___x_322_ = lean_nat_dec_eq(v_x_320_, v_x_321_);
return v___x_322_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqProtocol_decEq___boxed(lean_object* v_x_323_, lean_object* v_x_324_){
_start:
{
uint8_t v_res_325_; lean_object* v_r_326_; 
v_res_325_ = lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqProtocol_decEq(v_x_323_, v_x_324_);
lean_dec(v_x_324_);
lean_dec(v_x_323_);
v_r_326_ = lean_box(v_res_325_);
return v_r_326_;
}
}
LEAN_EXPORT uint8_t lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqProtocol(lean_object* v_x_327_, lean_object* v_x_328_){
_start:
{
uint8_t v___x_329_; 
v___x_329_ = lean_nat_dec_eq(v_x_327_, v_x_328_);
return v___x_329_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqProtocol___boxed(lean_object* v_x_330_, lean_object* v_x_331_){
_start:
{
uint8_t v_res_332_; lean_object* v_r_333_; 
v_res_332_ = lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqProtocol(v_x_330_, v_x_331_);
lean_dec(v_x_331_);
lean_dec(v_x_330_);
v_r_333_ = lean_box(v_res_332_);
return v_r_333_;
}
}
static lean_object* _init_lp_p10__core_P10Core_Instances_FourEvidence_instReprProtocol_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_343_; lean_object* v___x_344_; 
v___x_343_ = lean_unsigned_to_nat(6u);
v___x_344_ = lean_nat_to_int(v___x_343_);
return v___x_344_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprProtocol_repr___redArg(lean_object* v_x_345_){
_start:
{
lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; uint8_t v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; 
v___x_346_ = ((lean_object*)(lp_p10__core_P10Core_Instances_FourEvidence_instReprProtocol_repr___redArg___closed__3));
v___x_347_ = lean_obj_once(&lp_p10__core_P10Core_Instances_FourEvidence_instReprProtocol_repr___redArg___closed__4, &lp_p10__core_P10Core_Instances_FourEvidence_instReprProtocol_repr___redArg___closed__4_once, _init_lp_p10__core_P10Core_Instances_FourEvidence_instReprProtocol_repr___redArg___closed__4);
v___x_348_ = l_Nat_reprFast(v_x_345_);
v___x_349_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_349_, 0, v___x_348_);
v___x_350_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_350_, 0, v___x_347_);
lean_ctor_set(v___x_350_, 1, v___x_349_);
v___x_351_ = 0;
v___x_352_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_352_, 0, v___x_350_);
lean_ctor_set_uint8(v___x_352_, sizeof(void*)*1, v___x_351_);
v___x_353_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_353_, 0, v___x_346_);
lean_ctor_set(v___x_353_, 1, v___x_352_);
v___x_354_ = lean_obj_once(&lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__15, &lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__15_once, _init_lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__15);
v___x_355_ = ((lean_object*)(lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__16));
v___x_356_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_356_, 0, v___x_355_);
lean_ctor_set(v___x_356_, 1, v___x_353_);
v___x_357_ = ((lean_object*)(lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__17));
v___x_358_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_358_, 0, v___x_356_);
lean_ctor_set(v___x_358_, 1, v___x_357_);
v___x_359_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_359_, 0, v___x_354_);
lean_ctor_set(v___x_359_, 1, v___x_358_);
v___x_360_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_360_, 0, v___x_359_);
lean_ctor_set_uint8(v___x_360_, sizeof(void*)*1, v___x_351_);
return v___x_360_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprProtocol_repr(lean_object* v_x_361_, lean_object* v_prec_362_){
_start:
{
lean_object* v___x_363_; 
v___x_363_ = lp_p10__core_P10Core_Instances_FourEvidence_instReprProtocol_repr___redArg(v_x_361_);
return v___x_363_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprProtocol_repr___boxed(lean_object* v_x_364_, lean_object* v_prec_365_){
_start:
{
lean_object* v_res_366_; 
v_res_366_ = lp_p10__core_P10Core_Instances_FourEvidence_instReprProtocol_repr(v_x_364_, v_prec_365_);
lean_dec(v_prec_365_);
return v_res_366_;
}
}
LEAN_EXPORT uint8_t lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqFormalTarget_decEq(lean_object* v_x_369_, lean_object* v_x_370_){
_start:
{
uint8_t v___x_371_; 
v___x_371_ = lean_nat_dec_eq(v_x_369_, v_x_370_);
return v___x_371_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqFormalTarget_decEq___boxed(lean_object* v_x_372_, lean_object* v_x_373_){
_start:
{
uint8_t v_res_374_; lean_object* v_r_375_; 
v_res_374_ = lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqFormalTarget_decEq(v_x_372_, v_x_373_);
lean_dec(v_x_373_);
lean_dec(v_x_372_);
v_r_375_ = lean_box(v_res_374_);
return v_r_375_;
}
}
LEAN_EXPORT uint8_t lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqFormalTarget(lean_object* v_x_376_, lean_object* v_x_377_){
_start:
{
uint8_t v___x_378_; 
v___x_378_ = lean_nat_dec_eq(v_x_376_, v_x_377_);
return v___x_378_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqFormalTarget___boxed(lean_object* v_x_379_, lean_object* v_x_380_){
_start:
{
uint8_t v_res_381_; lean_object* v_r_382_; 
v_res_381_ = lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqFormalTarget(v_x_379_, v_x_380_);
lean_dec(v_x_380_);
lean_dec(v_x_379_);
v_r_382_ = lean_box(v_res_381_);
return v_r_382_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprFormalTarget_repr___redArg(lean_object* v_x_383_){
_start:
{
lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; uint8_t v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; 
v___x_384_ = ((lean_object*)(lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__6));
v___x_385_ = lean_obj_once(&lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__7, &lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__7_once, _init_lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__7);
v___x_386_ = l_Nat_reprFast(v_x_383_);
v___x_387_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_387_, 0, v___x_386_);
v___x_388_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_388_, 0, v___x_385_);
lean_ctor_set(v___x_388_, 1, v___x_387_);
v___x_389_ = 0;
v___x_390_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_390_, 0, v___x_388_);
lean_ctor_set_uint8(v___x_390_, sizeof(void*)*1, v___x_389_);
v___x_391_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_391_, 0, v___x_384_);
lean_ctor_set(v___x_391_, 1, v___x_390_);
v___x_392_ = lean_obj_once(&lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__15, &lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__15_once, _init_lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__15);
v___x_393_ = ((lean_object*)(lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__16));
v___x_394_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_394_, 0, v___x_393_);
lean_ctor_set(v___x_394_, 1, v___x_391_);
v___x_395_ = ((lean_object*)(lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__17));
v___x_396_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_396_, 0, v___x_394_);
lean_ctor_set(v___x_396_, 1, v___x_395_);
v___x_397_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_397_, 0, v___x_392_);
lean_ctor_set(v___x_397_, 1, v___x_396_);
v___x_398_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_398_, 0, v___x_397_);
lean_ctor_set_uint8(v___x_398_, sizeof(void*)*1, v___x_389_);
return v___x_398_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprFormalTarget_repr(lean_object* v_x_399_, lean_object* v_prec_400_){
_start:
{
lean_object* v___x_401_; 
v___x_401_ = lp_p10__core_P10Core_Instances_FourEvidence_instReprFormalTarget_repr___redArg(v_x_399_);
return v___x_401_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprFormalTarget_repr___boxed(lean_object* v_x_402_, lean_object* v_prec_403_){
_start:
{
lean_object* v_res_404_; 
v_res_404_ = lp_p10__core_P10Core_Instances_FourEvidence_instReprFormalTarget_repr(v_x_402_, v_prec_403_);
lean_dec(v_prec_403_);
return v_res_404_;
}
}
LEAN_EXPORT uint8_t lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqCheckedEvidence_decEq(lean_object* v_x_407_, lean_object* v_x_408_){
_start:
{
uint8_t v___x_409_; 
v___x_409_ = lean_nat_dec_eq(v_x_407_, v_x_408_);
return v___x_409_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqCheckedEvidence_decEq___boxed(lean_object* v_x_410_, lean_object* v_x_411_){
_start:
{
uint8_t v_res_412_; lean_object* v_r_413_; 
v_res_412_ = lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqCheckedEvidence_decEq(v_x_410_, v_x_411_);
lean_dec(v_x_411_);
lean_dec(v_x_410_);
v_r_413_ = lean_box(v_res_412_);
return v_r_413_;
}
}
LEAN_EXPORT uint8_t lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqCheckedEvidence(lean_object* v_x_414_, lean_object* v_x_415_){
_start:
{
uint8_t v___x_416_; 
v___x_416_ = lean_nat_dec_eq(v_x_414_, v_x_415_);
return v___x_416_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqCheckedEvidence___boxed(lean_object* v_x_417_, lean_object* v_x_418_){
_start:
{
uint8_t v_res_419_; lean_object* v_r_420_; 
v_res_419_ = lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqCheckedEvidence(v_x_417_, v_x_418_);
lean_dec(v_x_418_);
lean_dec(v_x_417_);
v_r_420_ = lean_box(v_res_419_);
return v_r_420_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprCheckedEvidence_repr___redArg(lean_object* v_x_430_){
_start:
{
lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; uint8_t v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; 
v___x_431_ = ((lean_object*)(lp_p10__core_P10Core_Instances_FourEvidence_instReprCheckedEvidence_repr___redArg___closed__3));
v___x_432_ = lean_obj_once(&lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__10, &lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__10_once, _init_lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__10);
v___x_433_ = l_Nat_reprFast(v_x_430_);
v___x_434_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_434_, 0, v___x_433_);
v___x_435_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_435_, 0, v___x_432_);
lean_ctor_set(v___x_435_, 1, v___x_434_);
v___x_436_ = 0;
v___x_437_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_437_, 0, v___x_435_);
lean_ctor_set_uint8(v___x_437_, sizeof(void*)*1, v___x_436_);
v___x_438_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_438_, 0, v___x_431_);
lean_ctor_set(v___x_438_, 1, v___x_437_);
v___x_439_ = lean_obj_once(&lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__15, &lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__15_once, _init_lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__15);
v___x_440_ = ((lean_object*)(lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__16));
v___x_441_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_441_, 0, v___x_440_);
lean_ctor_set(v___x_441_, 1, v___x_438_);
v___x_442_ = ((lean_object*)(lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__17));
v___x_443_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_443_, 0, v___x_441_);
lean_ctor_set(v___x_443_, 1, v___x_442_);
v___x_444_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_444_, 0, v___x_439_);
lean_ctor_set(v___x_444_, 1, v___x_443_);
v___x_445_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_445_, 0, v___x_444_);
lean_ctor_set_uint8(v___x_445_, sizeof(void*)*1, v___x_436_);
return v___x_445_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprCheckedEvidence_repr(lean_object* v_x_446_, lean_object* v_prec_447_){
_start:
{
lean_object* v___x_448_; 
v___x_448_ = lp_p10__core_P10Core_Instances_FourEvidence_instReprCheckedEvidence_repr___redArg(v_x_446_);
return v___x_448_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprCheckedEvidence_repr___boxed(lean_object* v_x_449_, lean_object* v_prec_450_){
_start:
{
lean_object* v_res_451_; 
v_res_451_ = lp_p10__core_P10Core_Instances_FourEvidence_instReprCheckedEvidence_repr(v_x_449_, v_prec_450_);
lean_dec(v_prec_450_);
return v_res_451_;
}
}
LEAN_EXPORT uint8_t lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqPreflightResult_decEq(uint8_t v_x_454_, uint8_t v_x_455_){
_start:
{
if (v_x_454_ == 0)
{
if (v_x_455_ == 0)
{
uint8_t v___x_456_; 
v___x_456_ = 1;
return v___x_456_;
}
else
{
return v_x_454_;
}
}
else
{
return v_x_455_;
}
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqPreflightResult_decEq___boxed(lean_object* v_x_457_, lean_object* v_x_458_){
_start:
{
uint8_t v_x_49__boxed_459_; uint8_t v_x_50__boxed_460_; uint8_t v_res_461_; lean_object* v_r_462_; 
v_x_49__boxed_459_ = lean_unbox(v_x_457_);
v_x_50__boxed_460_ = lean_unbox(v_x_458_);
v_res_461_ = lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqPreflightResult_decEq(v_x_49__boxed_459_, v_x_50__boxed_460_);
v_r_462_ = lean_box(v_res_461_);
return v_r_462_;
}
}
LEAN_EXPORT uint8_t lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqPreflightResult(uint8_t v_x_463_, uint8_t v_x_464_){
_start:
{
uint8_t v___x_465_; 
v___x_465_ = lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqPreflightResult_decEq(v_x_463_, v_x_464_);
return v___x_465_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqPreflightResult___boxed(lean_object* v_x_466_, lean_object* v_x_467_){
_start:
{
uint8_t v_x_5__boxed_468_; uint8_t v_x_6__boxed_469_; uint8_t v_res_470_; lean_object* v_r_471_; 
v_x_5__boxed_468_ = lean_unbox(v_x_466_);
v_x_6__boxed_469_ = lean_unbox(v_x_467_);
v_res_470_ = lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqPreflightResult(v_x_5__boxed_468_, v_x_6__boxed_469_);
v_r_471_ = lean_box(v_res_470_);
return v_r_471_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprPreflightResult_repr___redArg(uint8_t v_x_481_){
_start:
{
lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; uint8_t v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; 
v___x_482_ = ((lean_object*)(lp_p10__core_P10Core_Instances_FourEvidence_instReprPreflightResult_repr___redArg___closed__3));
v___x_483_ = lean_obj_once(&lp_p10__core_P10Core_Instances_FourEvidence_instReprProtocol_repr___redArg___closed__4, &lp_p10__core_P10Core_Instances_FourEvidence_instReprProtocol_repr___redArg___closed__4_once, _init_lp_p10__core_P10Core_Instances_FourEvidence_instReprProtocol_repr___redArg___closed__4);
v___x_484_ = l_Bool_repr___redArg(v_x_481_);
v___x_485_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_485_, 0, v___x_483_);
lean_ctor_set(v___x_485_, 1, v___x_484_);
v___x_486_ = 0;
v___x_487_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_487_, 0, v___x_485_);
lean_ctor_set_uint8(v___x_487_, sizeof(void*)*1, v___x_486_);
v___x_488_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_488_, 0, v___x_482_);
lean_ctor_set(v___x_488_, 1, v___x_487_);
v___x_489_ = lean_obj_once(&lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__15, &lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__15_once, _init_lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__15);
v___x_490_ = ((lean_object*)(lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__16));
v___x_491_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_491_, 0, v___x_490_);
lean_ctor_set(v___x_491_, 1, v___x_488_);
v___x_492_ = ((lean_object*)(lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__17));
v___x_493_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_493_, 0, v___x_491_);
lean_ctor_set(v___x_493_, 1, v___x_492_);
v___x_494_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_494_, 0, v___x_489_);
lean_ctor_set(v___x_494_, 1, v___x_493_);
v___x_495_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_495_, 0, v___x_494_);
lean_ctor_set_uint8(v___x_495_, sizeof(void*)*1, v___x_486_);
return v___x_495_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprPreflightResult_repr___redArg___boxed(lean_object* v_x_496_){
_start:
{
uint8_t v_x_109__boxed_497_; lean_object* v_res_498_; 
v_x_109__boxed_497_ = lean_unbox(v_x_496_);
v_res_498_ = lp_p10__core_P10Core_Instances_FourEvidence_instReprPreflightResult_repr___redArg(v_x_109__boxed_497_);
return v_res_498_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprPreflightResult_repr(uint8_t v_x_499_, lean_object* v_prec_500_){
_start:
{
lean_object* v___x_501_; 
v___x_501_ = lp_p10__core_P10Core_Instances_FourEvidence_instReprPreflightResult_repr___redArg(v_x_499_);
return v___x_501_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprPreflightResult_repr___boxed(lean_object* v_x_502_, lean_object* v_prec_503_){
_start:
{
uint8_t v_x_149__boxed_504_; lean_object* v_res_505_; 
v_x_149__boxed_504_ = lean_unbox(v_x_502_);
v_res_505_ = lp_p10__core_P10Core_Instances_FourEvidence_instReprPreflightResult_repr(v_x_149__boxed_504_, v_prec_503_);
lean_dec(v_prec_503_);
return v_res_505_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_Blocker_ofNat(lean_object* v_n_508_){
_start:
{
lean_object* v___x_509_; 
v___x_509_ = lean_box(0);
return v___x_509_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_Blocker_ofNat___boxed(lean_object* v_n_510_){
_start:
{
lean_object* v_res_511_; 
v_res_511_ = lp_p10__core_P10Core_Instances_FourEvidence_Blocker_ofNat(v_n_510_);
lean_dec(v_n_510_);
return v_res_511_;
}
}
LEAN_EXPORT uint8_t lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqBlocker(lean_object* v_x_512_, lean_object* v_y_513_){
_start:
{
uint8_t v___x_514_; 
v___x_514_ = 1;
return v___x_514_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqBlocker___boxed(lean_object* v_x_515_, lean_object* v_y_516_){
_start:
{
uint8_t v_res_517_; lean_object* v_r_518_; 
v_res_517_ = lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqBlocker(v_x_515_, v_y_516_);
v_r_518_ = lean_box(v_res_517_);
return v_r_518_;
}
}
static lean_object* _init_lp_p10__core_P10Core_Instances_FourEvidence_instReprBlocker_repr___redArg___closed__2(void){
_start:
{
lean_object* v___x_522_; lean_object* v___x_523_; 
v___x_522_ = lean_unsigned_to_nat(2u);
v___x_523_ = lean_nat_to_int(v___x_522_);
return v___x_523_;
}
}
static lean_object* _init_lp_p10__core_P10Core_Instances_FourEvidence_instReprBlocker_repr___redArg___closed__3(void){
_start:
{
lean_object* v___x_524_; lean_object* v___x_525_; 
v___x_524_ = lean_unsigned_to_nat(1u);
v___x_525_ = lean_nat_to_int(v___x_524_);
return v___x_525_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprBlocker_repr___redArg(lean_object* v_prec_526_){
_start:
{
lean_object* v___y_528_; lean_object* v___x_534_; uint8_t v___x_535_; 
v___x_534_ = lean_unsigned_to_nat(1024u);
v___x_535_ = lean_nat_dec_le(v___x_534_, v_prec_526_);
if (v___x_535_ == 0)
{
lean_object* v___x_536_; 
v___x_536_ = lean_obj_once(&lp_p10__core_P10Core_Instances_FourEvidence_instReprBlocker_repr___redArg___closed__2, &lp_p10__core_P10Core_Instances_FourEvidence_instReprBlocker_repr___redArg___closed__2_once, _init_lp_p10__core_P10Core_Instances_FourEvidence_instReprBlocker_repr___redArg___closed__2);
v___y_528_ = v___x_536_;
goto v___jp_527_;
}
else
{
lean_object* v___x_537_; 
v___x_537_ = lean_obj_once(&lp_p10__core_P10Core_Instances_FourEvidence_instReprBlocker_repr___redArg___closed__3, &lp_p10__core_P10Core_Instances_FourEvidence_instReprBlocker_repr___redArg___closed__3_once, _init_lp_p10__core_P10Core_Instances_FourEvidence_instReprBlocker_repr___redArg___closed__3);
v___y_528_ = v___x_537_;
goto v___jp_527_;
}
v___jp_527_:
{
lean_object* v___x_529_; lean_object* v___x_530_; uint8_t v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; 
v___x_529_ = ((lean_object*)(lp_p10__core_P10Core_Instances_FourEvidence_instReprBlocker_repr___redArg___closed__1));
lean_inc(v___y_528_);
v___x_530_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_530_, 0, v___y_528_);
lean_ctor_set(v___x_530_, 1, v___x_529_);
v___x_531_ = 0;
v___x_532_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_532_, 0, v___x_530_);
lean_ctor_set_uint8(v___x_532_, sizeof(void*)*1, v___x_531_);
v___x_533_ = l_Repr_addAppParen(v___x_532_, v_prec_526_);
return v___x_533_;
}
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprBlocker_repr___redArg___boxed(lean_object* v_prec_538_){
_start:
{
lean_object* v_res_539_; 
v_res_539_ = lp_p10__core_P10Core_Instances_FourEvidence_instReprBlocker_repr___redArg(v_prec_538_);
lean_dec(v_prec_538_);
return v_res_539_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprBlocker_repr(lean_object* v_x_540_, lean_object* v_prec_541_){
_start:
{
lean_object* v___x_542_; 
v___x_542_ = lp_p10__core_P10Core_Instances_FourEvidence_instReprBlocker_repr___redArg(v_prec_541_);
return v___x_542_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprBlocker_repr___boxed(lean_object* v_x_543_, lean_object* v_prec_544_){
_start:
{
lean_object* v_res_545_; 
v_res_545_ = lp_p10__core_P10Core_Instances_FourEvidence_instReprBlocker_repr(v_x_543_, v_prec_544_);
lean_dec(v_prec_544_);
return v_res_545_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_concreteDigestModel___lam__0(lean_object* v_e_548_){
_start:
{
lean_inc_ref(v_e_548_);
return v_e_548_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_concreteDigestModel___lam__0___boxed(lean_object* v_e_549_){
_start:
{
lean_object* v_res_550_; 
v_res_550_ = lp_p10__core_P10Core_Instances_FourEvidence_concreteDigestModel___lam__0(v_e_549_);
lean_dec_ref(v_e_549_);
return v_res_550_;
}
}
LEAN_EXPORT uint8_t lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqCertificate_decEq(lean_object* v_x_553_, lean_object* v_x_554_){
_start:
{
lean_object* v_protocolId_555_; lean_object* v_boundClaim_556_; lean_object* v_boundEvidence_557_; uint8_t v_preflight_558_; lean_object* v_target_559_; lean_object* v_checked_560_; uint8_t v_verdict_561_; lean_object* v_protocolId_562_; lean_object* v_boundClaim_563_; lean_object* v_boundEvidence_564_; uint8_t v_preflight_565_; lean_object* v_target_566_; lean_object* v_checked_567_; uint8_t v_verdict_568_; uint8_t v___x_569_; 
v_protocolId_555_ = lean_ctor_get(v_x_553_, 0);
lean_inc(v_protocolId_555_);
v_boundClaim_556_ = lean_ctor_get(v_x_553_, 1);
lean_inc_ref(v_boundClaim_556_);
v_boundEvidence_557_ = lean_ctor_get(v_x_553_, 2);
lean_inc_ref(v_boundEvidence_557_);
v_preflight_558_ = lean_ctor_get_uint8(v_x_553_, sizeof(void*)*5);
v_target_559_ = lean_ctor_get(v_x_553_, 3);
lean_inc(v_target_559_);
v_checked_560_ = lean_ctor_get(v_x_553_, 4);
lean_inc(v_checked_560_);
v_verdict_561_ = lean_ctor_get_uint8(v_x_553_, sizeof(void*)*5 + 1);
lean_dec_ref(v_x_553_);
v_protocolId_562_ = lean_ctor_get(v_x_554_, 0);
lean_inc(v_protocolId_562_);
v_boundClaim_563_ = lean_ctor_get(v_x_554_, 1);
lean_inc_ref(v_boundClaim_563_);
v_boundEvidence_564_ = lean_ctor_get(v_x_554_, 2);
lean_inc_ref(v_boundEvidence_564_);
v_preflight_565_ = lean_ctor_get_uint8(v_x_554_, sizeof(void*)*5);
v_target_566_ = lean_ctor_get(v_x_554_, 3);
lean_inc(v_target_566_);
v_checked_567_ = lean_ctor_get(v_x_554_, 4);
lean_inc(v_checked_567_);
v_verdict_568_ = lean_ctor_get_uint8(v_x_554_, sizeof(void*)*5 + 1);
lean_dec_ref(v_x_554_);
v___x_569_ = lean_nat_dec_eq(v_protocolId_555_, v_protocolId_562_);
lean_dec(v_protocolId_562_);
lean_dec(v_protocolId_555_);
if (v___x_569_ == 0)
{
lean_dec(v_checked_567_);
lean_dec(v_target_566_);
lean_dec_ref(v_boundEvidence_564_);
lean_dec_ref(v_boundClaim_563_);
lean_dec(v_checked_560_);
lean_dec(v_target_559_);
lean_dec_ref(v_boundEvidence_557_);
lean_dec_ref(v_boundClaim_556_);
return v___x_569_;
}
else
{
uint8_t v___x_570_; 
v___x_570_ = lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqClaim_decEq(v_boundClaim_556_, v_boundClaim_563_);
lean_dec_ref(v_boundClaim_563_);
lean_dec_ref(v_boundClaim_556_);
if (v___x_570_ == 0)
{
lean_dec(v_checked_567_);
lean_dec(v_target_566_);
lean_dec_ref(v_boundEvidence_564_);
lean_dec(v_checked_560_);
lean_dec(v_target_559_);
lean_dec_ref(v_boundEvidence_557_);
return v___x_570_;
}
else
{
uint8_t v___x_571_; 
v___x_571_ = lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqEvidence_decEq(v_boundEvidence_557_, v_boundEvidence_564_);
if (v___x_571_ == 0)
{
lean_dec(v_checked_567_);
lean_dec(v_target_566_);
lean_dec(v_checked_560_);
lean_dec(v_target_559_);
return v___x_571_;
}
else
{
uint8_t v___x_572_; 
v___x_572_ = lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqPreflightResult_decEq(v_preflight_558_, v_preflight_565_);
if (v___x_572_ == 0)
{
lean_dec(v_checked_567_);
lean_dec(v_target_566_);
lean_dec(v_checked_560_);
lean_dec(v_target_559_);
return v___x_572_;
}
else
{
uint8_t v___x_573_; 
v___x_573_ = lean_nat_dec_eq(v_target_559_, v_target_566_);
lean_dec(v_target_566_);
lean_dec(v_target_559_);
if (v___x_573_ == 0)
{
lean_dec(v_checked_567_);
lean_dec(v_checked_560_);
return v___x_573_;
}
else
{
uint8_t v___x_574_; 
v___x_574_ = lean_nat_dec_eq(v_checked_560_, v_checked_567_);
lean_dec(v_checked_567_);
lean_dec(v_checked_560_);
if (v___x_574_ == 0)
{
return v___x_574_;
}
else
{
uint8_t v___x_575_; 
v___x_575_ = lp_p10__core_P10Core_Spec_instDecidableEqVerdict(v_verdict_561_, v_verdict_568_);
return v___x_575_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqCertificate_decEq___boxed(lean_object* v_x_576_, lean_object* v_x_577_){
_start:
{
uint8_t v_res_578_; lean_object* v_r_579_; 
v_res_578_ = lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqCertificate_decEq(v_x_576_, v_x_577_);
v_r_579_ = lean_box(v_res_578_);
return v_r_579_;
}
}
LEAN_EXPORT uint8_t lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqCertificate(lean_object* v_x_580_, lean_object* v_x_581_){
_start:
{
uint8_t v___x_582_; 
v___x_582_ = lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqCertificate_decEq(v_x_580_, v_x_581_);
return v___x_582_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqCertificate___boxed(lean_object* v_x_583_, lean_object* v_x_584_){
_start:
{
uint8_t v_res_585_; lean_object* v_r_586_; 
v_res_585_ = lp_p10__core_P10Core_Instances_FourEvidence_instDecidableEqCertificate(v_x_583_, v_x_584_);
v_r_586_ = lean_box(v_res_585_);
return v_r_586_;
}
}
static lean_object* _init_lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_605_; lean_object* v___x_606_; 
v___x_605_ = lean_unsigned_to_nat(13u);
v___x_606_ = lean_nat_to_int(v___x_605_);
return v___x_606_;
}
}
static lean_object* _init_lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__13(void){
_start:
{
lean_object* v___x_610_; lean_object* v___x_611_; 
v___x_610_ = lean_unsigned_to_nat(10u);
v___x_611_ = lean_nat_to_int(v___x_610_);
return v___x_611_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg(lean_object* v_x_618_){
_start:
{
lean_object* v_protocolId_619_; lean_object* v_boundClaim_620_; lean_object* v_boundEvidence_621_; uint8_t v_preflight_622_; lean_object* v_target_623_; lean_object* v_checked_624_; uint8_t v_verdict_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; uint8_t v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; 
v_protocolId_619_ = lean_ctor_get(v_x_618_, 0);
lean_inc(v_protocolId_619_);
v_boundClaim_620_ = lean_ctor_get(v_x_618_, 1);
lean_inc_ref(v_boundClaim_620_);
v_boundEvidence_621_ = lean_ctor_get(v_x_618_, 2);
lean_inc_ref(v_boundEvidence_621_);
v_preflight_622_ = lean_ctor_get_uint8(v_x_618_, sizeof(void*)*5);
v_target_623_ = lean_ctor_get(v_x_618_, 3);
lean_inc(v_target_623_);
v_checked_624_ = lean_ctor_get(v_x_618_, 4);
lean_inc(v_checked_624_);
v_verdict_625_ = lean_ctor_get_uint8(v_x_618_, sizeof(void*)*5 + 1);
lean_dec_ref(v_x_618_);
v___x_626_ = ((lean_object*)(lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__5));
v___x_627_ = ((lean_object*)(lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__3));
v___x_628_ = lean_obj_once(&lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__10, &lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__10_once, _init_lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__10);
v___x_629_ = l_Nat_reprFast(v_protocolId_619_);
v___x_630_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_630_, 0, v___x_629_);
v___x_631_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_631_, 0, v___x_628_);
lean_ctor_set(v___x_631_, 1, v___x_630_);
v___x_632_ = 0;
v___x_633_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_633_, 0, v___x_631_);
lean_ctor_set_uint8(v___x_633_, sizeof(void*)*1, v___x_632_);
v___x_634_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_634_, 0, v___x_627_);
lean_ctor_set(v___x_634_, 1, v___x_633_);
v___x_635_ = ((lean_object*)(lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__9));
v___x_636_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_636_, 0, v___x_634_);
lean_ctor_set(v___x_636_, 1, v___x_635_);
v___x_637_ = lean_box(1);
v___x_638_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_638_, 0, v___x_636_);
lean_ctor_set(v___x_638_, 1, v___x_637_);
v___x_639_ = ((lean_object*)(lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__5));
v___x_640_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_640_, 0, v___x_638_);
lean_ctor_set(v___x_640_, 1, v___x_639_);
v___x_641_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_641_, 0, v___x_640_);
lean_ctor_set(v___x_641_, 1, v___x_626_);
v___x_642_ = lean_unsigned_to_nat(0u);
v___x_643_ = lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg(v_boundClaim_620_);
v___x_644_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_644_, 0, v___x_628_);
lean_ctor_set(v___x_644_, 1, v___x_643_);
v___x_645_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_645_, 0, v___x_644_);
lean_ctor_set_uint8(v___x_645_, sizeof(void*)*1, v___x_632_);
v___x_646_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_646_, 0, v___x_641_);
lean_ctor_set(v___x_646_, 1, v___x_645_);
v___x_647_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_647_, 0, v___x_646_);
lean_ctor_set(v___x_647_, 1, v___x_635_);
v___x_648_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_648_, 0, v___x_647_);
lean_ctor_set(v___x_648_, 1, v___x_637_);
v___x_649_ = ((lean_object*)(lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__7));
v___x_650_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_650_, 0, v___x_648_);
lean_ctor_set(v___x_650_, 1, v___x_649_);
v___x_651_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_651_, 0, v___x_650_);
lean_ctor_set(v___x_651_, 1, v___x_626_);
v___x_652_ = lean_obj_once(&lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__7, &lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__7_once, _init_lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__7);
v___x_653_ = lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg(v_boundEvidence_621_);
v___x_654_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_654_, 0, v___x_652_);
lean_ctor_set(v___x_654_, 1, v___x_653_);
v___x_655_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_655_, 0, v___x_654_);
lean_ctor_set_uint8(v___x_655_, sizeof(void*)*1, v___x_632_);
v___x_656_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_656_, 0, v___x_651_);
lean_ctor_set(v___x_656_, 1, v___x_655_);
v___x_657_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_657_, 0, v___x_656_);
lean_ctor_set(v___x_657_, 1, v___x_635_);
v___x_658_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_658_, 0, v___x_657_);
lean_ctor_set(v___x_658_, 1, v___x_637_);
v___x_659_ = ((lean_object*)(lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__9));
v___x_660_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_660_, 0, v___x_658_);
lean_ctor_set(v___x_660_, 1, v___x_659_);
v___x_661_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_661_, 0, v___x_660_);
lean_ctor_set(v___x_661_, 1, v___x_626_);
v___x_662_ = lean_obj_once(&lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__10, &lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__10_once, _init_lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__10);
v___x_663_ = lp_p10__core_P10Core_Instances_FourEvidence_instReprPreflightResult_repr___redArg(v_preflight_622_);
v___x_664_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_664_, 0, v___x_662_);
lean_ctor_set(v___x_664_, 1, v___x_663_);
v___x_665_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_665_, 0, v___x_664_);
lean_ctor_set_uint8(v___x_665_, sizeof(void*)*1, v___x_632_);
v___x_666_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_666_, 0, v___x_661_);
lean_ctor_set(v___x_666_, 1, v___x_665_);
v___x_667_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_667_, 0, v___x_666_);
lean_ctor_set(v___x_667_, 1, v___x_635_);
v___x_668_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_668_, 0, v___x_667_);
lean_ctor_set(v___x_668_, 1, v___x_637_);
v___x_669_ = ((lean_object*)(lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__12));
v___x_670_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_670_, 0, v___x_668_);
lean_ctor_set(v___x_670_, 1, v___x_669_);
v___x_671_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_671_, 0, v___x_670_);
lean_ctor_set(v___x_671_, 1, v___x_626_);
v___x_672_ = lean_obj_once(&lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__13, &lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__13_once, _init_lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__13);
v___x_673_ = lp_p10__core_P10Core_Instances_FourEvidence_instReprFormalTarget_repr___redArg(v_target_623_);
v___x_674_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_674_, 0, v___x_672_);
lean_ctor_set(v___x_674_, 1, v___x_673_);
v___x_675_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_675_, 0, v___x_674_);
lean_ctor_set_uint8(v___x_675_, sizeof(void*)*1, v___x_632_);
v___x_676_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_676_, 0, v___x_671_);
lean_ctor_set(v___x_676_, 1, v___x_675_);
v___x_677_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_677_, 0, v___x_676_);
lean_ctor_set(v___x_677_, 1, v___x_635_);
v___x_678_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_678_, 0, v___x_677_);
lean_ctor_set(v___x_678_, 1, v___x_637_);
v___x_679_ = ((lean_object*)(lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__15));
v___x_680_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_680_, 0, v___x_678_);
lean_ctor_set(v___x_680_, 1, v___x_679_);
v___x_681_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_681_, 0, v___x_680_);
lean_ctor_set(v___x_681_, 1, v___x_626_);
v___x_682_ = lean_obj_once(&lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__4, &lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__4_once, _init_lp_p10__core_P10Core_Instances_FourEvidence_instReprEvidence_repr___redArg___closed__4);
v___x_683_ = lp_p10__core_P10Core_Instances_FourEvidence_instReprCheckedEvidence_repr___redArg(v_checked_624_);
v___x_684_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_684_, 0, v___x_682_);
lean_ctor_set(v___x_684_, 1, v___x_683_);
v___x_685_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_685_, 0, v___x_684_);
lean_ctor_set_uint8(v___x_685_, sizeof(void*)*1, v___x_632_);
v___x_686_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_686_, 0, v___x_681_);
lean_ctor_set(v___x_686_, 1, v___x_685_);
v___x_687_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_687_, 0, v___x_686_);
lean_ctor_set(v___x_687_, 1, v___x_635_);
v___x_688_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_688_, 0, v___x_687_);
lean_ctor_set(v___x_688_, 1, v___x_637_);
v___x_689_ = ((lean_object*)(lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg___closed__17));
v___x_690_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_690_, 0, v___x_688_);
lean_ctor_set(v___x_690_, 1, v___x_689_);
v___x_691_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_691_, 0, v___x_690_);
lean_ctor_set(v___x_691_, 1, v___x_626_);
v___x_692_ = lp_p10__core_P10Core_Spec_instReprVerdict_repr(v_verdict_625_, v___x_642_);
v___x_693_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_693_, 0, v___x_682_);
lean_ctor_set(v___x_693_, 1, v___x_692_);
v___x_694_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_694_, 0, v___x_693_);
lean_ctor_set_uint8(v___x_694_, sizeof(void*)*1, v___x_632_);
v___x_695_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_695_, 0, v___x_691_);
lean_ctor_set(v___x_695_, 1, v___x_694_);
v___x_696_ = lean_obj_once(&lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__15, &lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__15_once, _init_lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__15);
v___x_697_ = ((lean_object*)(lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__16));
v___x_698_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_698_, 0, v___x_697_);
lean_ctor_set(v___x_698_, 1, v___x_695_);
v___x_699_ = ((lean_object*)(lp_p10__core_P10Core_Instances_FourEvidence_instReprClaim_repr___redArg___closed__17));
v___x_700_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_700_, 0, v___x_698_);
lean_ctor_set(v___x_700_, 1, v___x_699_);
v___x_701_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_701_, 0, v___x_696_);
lean_ctor_set(v___x_701_, 1, v___x_700_);
v___x_702_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_702_, 0, v___x_701_);
lean_ctor_set_uint8(v___x_702_, sizeof(void*)*1, v___x_632_);
return v___x_702_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr(lean_object* v_x_703_, lean_object* v_prec_704_){
_start:
{
lean_object* v___x_705_; 
v___x_705_ = lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___redArg(v_x_703_);
return v___x_705_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr___boxed(lean_object* v_x_706_, lean_object* v_prec_707_){
_start:
{
lean_object* v_res_708_; 
v_res_708_ = lp_p10__core_P10Core_Instances_FourEvidence_instReprCertificate_repr(v_x_706_, v_prec_707_);
lean_dec(v_prec_707_);
return v_res_708_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_formalize(lean_object* v_c_711_){
_start:
{
lean_object* v_expected_712_; 
v_expected_712_ = lean_ctor_get(v_c_711_, 0);
lean_inc(v_expected_712_);
return v_expected_712_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_formalize___boxed(lean_object* v_c_713_){
_start:
{
lean_object* v_res_714_; 
v_res_714_ = lp_p10__core_P10Core_Instances_FourEvidence_formalize(v_c_713_);
lean_dec_ref(v_c_713_);
return v_res_714_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_List_countP_go___at___00P10Core_Instances_FourEvidence_inspect_spec__0(lean_object* v_a_715_, lean_object* v_a_716_){
_start:
{
if (lean_obj_tag(v_a_715_) == 0)
{
return v_a_716_;
}
else
{
lean_object* v_head_717_; uint8_t v___x_718_; 
v_head_717_ = lean_ctor_get(v_a_715_, 0);
v___x_718_ = lean_unbox(v_head_717_);
if (v___x_718_ == 0)
{
lean_object* v_tail_719_; 
v_tail_719_ = lean_ctor_get(v_a_715_, 1);
v_a_715_ = v_tail_719_;
goto _start;
}
else
{
lean_object* v_tail_721_; lean_object* v___x_722_; lean_object* v___x_723_; 
v_tail_721_ = lean_ctor_get(v_a_715_, 1);
v___x_722_ = lean_unsigned_to_nat(1u);
v___x_723_ = lean_nat_add(v_a_716_, v___x_722_);
lean_dec(v_a_716_);
v_a_715_ = v_tail_721_;
v_a_716_ = v___x_723_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_p10__core_List_countP_go___at___00P10Core_Instances_FourEvidence_inspect_spec__0___boxed(lean_object* v_a_725_, lean_object* v_a_726_){
_start:
{
lean_object* v_res_727_; 
v_res_727_ = lp_p10__core_List_countP_go___at___00P10Core_Instances_FourEvidence_inspect_spec__0(v_a_725_, v_a_726_);
lean_dec(v_a_725_);
return v_res_727_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_inspect(lean_object* v_e_728_){
_start:
{
lean_object* v_entries_729_; lean_object* v___x_730_; lean_object* v___x_731_; 
v_entries_729_ = lean_ctor_get(v_e_728_, 0);
v___x_730_ = lean_unsigned_to_nat(0u);
v___x_731_ = lp_p10__core_List_countP_go___at___00P10Core_Instances_FourEvidence_inspect_spec__0(v_entries_729_, v___x_730_);
return v___x_731_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_inspect___boxed(lean_object* v_e_732_){
_start:
{
lean_object* v_res_733_; 
v_res_733_ = lp_p10__core_P10Core_Instances_FourEvidence_inspect(v_e_732_);
lean_dec_ref(v_e_732_);
return v_res_733_;
}
}
LEAN_EXPORT uint8_t lp_p10__core_P10Core_Instances_FourEvidence_verifiedRule___lam__0(lean_object* v_input_734_){
_start:
{
lean_object* v_fst_735_; lean_object* v_snd_736_; lean_object* v_expected_737_; lean_object* v___x_738_; uint8_t v___x_739_; 
v_fst_735_ = lean_ctor_get(v_input_734_, 0);
v_snd_736_ = lean_ctor_get(v_input_734_, 1);
v_expected_737_ = lean_ctor_get(v_fst_735_, 0);
v___x_738_ = lp_p10__core_P10Core_Instances_FourEvidence_inspect(v_snd_736_);
v___x_739_ = lean_nat_dec_eq(v___x_738_, v_expected_737_);
lean_dec(v___x_738_);
return v___x_739_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_verifiedRule___lam__0___boxed(lean_object* v_input_740_){
_start:
{
uint8_t v_res_741_; lean_object* v_r_742_; 
v_res_741_ = lp_p10__core_P10Core_Instances_FourEvidence_verifiedRule___lam__0(v_input_740_);
lean_dec_ref(v_input_740_);
v_r_742_ = lean_box(v_res_741_);
return v_r_742_;
}
}
LEAN_EXPORT uint8_t lp_p10__core_P10Core_Instances_FourEvidence_decideVerdict(lean_object* v_c_745_, lean_object* v_e_746_){
_start:
{
uint8_t v_operationalizable_747_; 
v_operationalizable_747_ = lean_ctor_get_uint8(v_c_745_, sizeof(void*)*1);
if (v_operationalizable_747_ == 0)
{
uint8_t v___x_748_; 
lean_dec_ref(v_e_746_);
lean_dec_ref(v_c_745_);
v___x_748_ = 2;
return v___x_748_;
}
else
{
uint8_t v_externalReady_749_; 
v_externalReady_749_ = lean_ctor_get_uint8(v_e_746_, sizeof(void*)*1);
if (v_externalReady_749_ == 0)
{
uint8_t v___x_750_; 
lean_dec_ref(v_e_746_);
lean_dec_ref(v_c_745_);
v___x_750_ = 3;
return v___x_750_;
}
else
{
lean_object* v___x_751_; uint8_t v___x_752_; 
v___x_751_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_751_, 0, v_c_745_);
lean_ctor_set(v___x_751_, 1, v_e_746_);
v___x_752_ = lp_p10__core_P10Core_Instances_FourEvidence_verifiedRule___lam__0(v___x_751_);
lean_dec_ref_known(v___x_751_, 2);
if (v___x_752_ == 0)
{
uint8_t v___x_753_; 
v___x_753_ = 1;
return v___x_753_;
}
else
{
uint8_t v___x_754_; 
v___x_754_ = 0;
return v___x_754_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_decideVerdict___boxed(lean_object* v_c_755_, lean_object* v_e_756_){
_start:
{
uint8_t v_res_757_; lean_object* v_r_758_; 
v_res_757_ = lp_p10__core_P10Core_Instances_FourEvidence_decideVerdict(v_c_755_, v_e_756_);
v_r_758_ = lean_box(v_res_757_);
return v_r_758_;
}
}
LEAN_EXPORT uint8_t lp_p10__core_P10Core_Instances_FourEvidence_runPreflight(lean_object* v_e_759_){
_start:
{
uint8_t v_admissible_760_; 
v_admissible_760_ = lean_ctor_get_uint8(v_e_759_, sizeof(void*)*1 + 1);
return v_admissible_760_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_runPreflight___boxed(lean_object* v_e_761_){
_start:
{
uint8_t v_res_762_; lean_object* v_r_763_; 
v_res_762_ = lp_p10__core_P10Core_Instances_FourEvidence_runPreflight(v_e_761_);
lean_dec_ref(v_e_761_);
v_r_763_ = lean_box(v_res_762_);
return v_r_763_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_semantics(lean_object* v_P_764_){
_start:
{
lean_object* v___x_765_; 
v___x_765_ = lean_box(0);
return v___x_765_;
}
}
LEAN_EXPORT lean_object* lp_p10__core_P10Core_Instances_FourEvidence_semantics___boxed(lean_object* v_P_766_){
_start:
{
lean_object* v_res_767_; 
v_res_767_ = lp_p10__core_P10Core_Instances_FourEvidence_semantics(v_P_766_);
lean_dec(v_P_766_);
return v_res_767_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_p10__core_P10Core_Model_Calculus(uint8_t builtin);
lean_object* initialize_p10__core_P10Core_Model_Rules(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_p10__core_P10Core_Instances_FourEvidence_Model(uint8_t builtin) {
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
res = initialize_p10__core_P10Core_Model_Calculus(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_p10__core_P10Core_Model_Rules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
