/* This file is generated using gencheck. Do not edit. */

#ifndef GCC_TREE_CHECK_H
#define GCC_TREE_CHECK_H

#define ERROR_MARK_CHECK(t)	TREE_CHECK (t, ERROR_MARK)
#define IDENTIFIER_NODE_CHECK(t)	TREE_CHECK (t, IDENTIFIER_NODE)
#define TREE_LIST_CHECK(t)	TREE_CHECK (t, TREE_LIST)
#define TREE_VEC_CHECK(t)	TREE_CHECK (t, TREE_VEC)
#define BLOCK_CHECK(t)	TREE_CHECK (t, BLOCK)
#define OFFSET_TYPE_CHECK(t)	TREE_CHECK (t, OFFSET_TYPE)
#define ENUMERAL_TYPE_CHECK(t)	TREE_CHECK (t, ENUMERAL_TYPE)
#define BOOLEAN_TYPE_CHECK(t)	TREE_CHECK (t, BOOLEAN_TYPE)
#define INTEGER_TYPE_CHECK(t)	TREE_CHECK (t, INTEGER_TYPE)
#define REAL_TYPE_CHECK(t)	TREE_CHECK (t, REAL_TYPE)
#define POINTER_TYPE_CHECK(t)	TREE_CHECK (t, POINTER_TYPE)
#define REFERENCE_TYPE_CHECK(t)	TREE_CHECK (t, REFERENCE_TYPE)
#define NULLPTR_TYPE_CHECK(t)	TREE_CHECK (t, NULLPTR_TYPE)
#define FIXED_POINT_TYPE_CHECK(t)	TREE_CHECK (t, FIXED_POINT_TYPE)
#define COMPLEX_TYPE_CHECK(t)	TREE_CHECK (t, COMPLEX_TYPE)
#define VECTOR_TYPE_CHECK(t)	TREE_CHECK (t, VECTOR_TYPE)
#define ARRAY_TYPE_CHECK(t)	TREE_CHECK (t, ARRAY_TYPE)
#define RECORD_TYPE_CHECK(t)	TREE_CHECK (t, RECORD_TYPE)
#define UNION_TYPE_CHECK(t)	TREE_CHECK (t, UNION_TYPE)
#define QUAL_UNION_TYPE_CHECK(t)	TREE_CHECK (t, QUAL_UNION_TYPE)
#define VOID_TYPE_CHECK(t)	TREE_CHECK (t, VOID_TYPE)
#define POINTER_BOUNDS_TYPE_CHECK(t)	TREE_CHECK (t, POINTER_BOUNDS_TYPE)
#define FUNCTION_TYPE_CHECK(t)	TREE_CHECK (t, FUNCTION_TYPE)
#define METHOD_TYPE_CHECK(t)	TREE_CHECK (t, METHOD_TYPE)
#define LANG_TYPE_CHECK(t)	TREE_CHECK (t, LANG_TYPE)
#define VOID_CST_CHECK(t)	TREE_CHECK (t, VOID_CST)
#define INTEGER_CST_CHECK(t)	TREE_CHECK (t, INTEGER_CST)
#define REAL_CST_CHECK(t)	TREE_CHECK (t, REAL_CST)
#define FIXED_CST_CHECK(t)	TREE_CHECK (t, FIXED_CST)
#define COMPLEX_CST_CHECK(t)	TREE_CHECK (t, COMPLEX_CST)
#define VECTOR_CST_CHECK(t)	TREE_CHECK (t, VECTOR_CST)
#define STRING_CST_CHECK(t)	TREE_CHECK (t, STRING_CST)
#define FUNCTION_DECL_CHECK(t)	TREE_CHECK (t, FUNCTION_DECL)
#define LABEL_DECL_CHECK(t)	TREE_CHECK (t, LABEL_DECL)
#define FIELD_DECL_CHECK(t)	TREE_CHECK (t, FIELD_DECL)
#define VAR_DECL_CHECK(t)	TREE_CHECK (t, VAR_DECL)
#define CONST_DECL_CHECK(t)	TREE_CHECK (t, CONST_DECL)
#define PARM_DECL_CHECK(t)	TREE_CHECK (t, PARM_DECL)
#define TYPE_DECL_CHECK(t)	TREE_CHECK (t, TYPE_DECL)
#define RESULT_DECL_CHECK(t)	TREE_CHECK (t, RESULT_DECL)
#define DEBUG_EXPR_DECL_CHECK(t)	TREE_CHECK (t, DEBUG_EXPR_DECL)
#define NAMESPACE_DECL_CHECK(t)	TREE_CHECK (t, NAMESPACE_DECL)
#define IMPORTED_DECL_CHECK(t)	TREE_CHECK (t, IMPORTED_DECL)
#define NAMELIST_DECL_CHECK(t)	TREE_CHECK (t, NAMELIST_DECL)
#define TRANSLATION_UNIT_DECL_CHECK(t)	TREE_CHECK (t, TRANSLATION_UNIT_DECL)
#define COMPONENT_REF_CHECK(t)	TREE_CHECK (t, COMPONENT_REF)
#define BIT_FIELD_REF_CHECK(t)	TREE_CHECK (t, BIT_FIELD_REF)
#define ARRAY_REF_CHECK(t)	TREE_CHECK (t, ARRAY_REF)
#define ARRAY_RANGE_REF_CHECK(t)	TREE_CHECK (t, ARRAY_RANGE_REF)
#define REALPART_EXPR_CHECK(t)	TREE_CHECK (t, REALPART_EXPR)
#define IMAGPART_EXPR_CHECK(t)	TREE_CHECK (t, IMAGPART_EXPR)
#define VIEW_CONVERT_EXPR_CHECK(t)	TREE_CHECK (t, VIEW_CONVERT_EXPR)
#define INDIRECT_REF_CHECK(t)	TREE_CHECK (t, INDIRECT_REF)
#define OBJ_TYPE_REF_CHECK(t)	TREE_CHECK (t, OBJ_TYPE_REF)
#define CONSTRUCTOR_CHECK(t)	TREE_CHECK (t, CONSTRUCTOR)
#define COMPOUND_EXPR_CHECK(t)	TREE_CHECK (t, COMPOUND_EXPR)
#define MODIFY_EXPR_CHECK(t)	TREE_CHECK (t, MODIFY_EXPR)
#define INIT_EXPR_CHECK(t)	TREE_CHECK (t, INIT_EXPR)
#define TARGET_EXPR_CHECK(t)	TREE_CHECK (t, TARGET_EXPR)
#define COND_EXPR_CHECK(t)	TREE_CHECK (t, COND_EXPR)
#define VEC_COND_EXPR_CHECK(t)	TREE_CHECK (t, VEC_COND_EXPR)
#define VEC_PERM_EXPR_CHECK(t)	TREE_CHECK (t, VEC_PERM_EXPR)
#define BIND_EXPR_CHECK(t)	TREE_CHECK (t, BIND_EXPR)
#define CALL_EXPR_CHECK(t)	TREE_CHECK (t, CALL_EXPR)
#define WITH_CLEANUP_EXPR_CHECK(t)	TREE_CHECK (t, WITH_CLEANUP_EXPR)
#define CLEANUP_POINT_EXPR_CHECK(t)	TREE_CHECK (t, CLEANUP_POINT_EXPR)
#define PLACEHOLDER_EXPR_CHECK(t)	TREE_CHECK (t, PLACEHOLDER_EXPR)
#define PLUS_EXPR_CHECK(t)	TREE_CHECK (t, PLUS_EXPR)
#define MINUS_EXPR_CHECK(t)	TREE_CHECK (t, MINUS_EXPR)
#define MULT_EXPR_CHECK(t)	TREE_CHECK (t, MULT_EXPR)
#define POINTER_PLUS_EXPR_CHECK(t)	TREE_CHECK (t, POINTER_PLUS_EXPR)
#define MULT_HIGHPART_EXPR_CHECK(t)	TREE_CHECK (t, MULT_HIGHPART_EXPR)
#define TRUNC_DIV_EXPR_CHECK(t)	TREE_CHECK (t, TRUNC_DIV_EXPR)
#define CEIL_DIV_EXPR_CHECK(t)	TREE_CHECK (t, CEIL_DIV_EXPR)
#define FLOOR_DIV_EXPR_CHECK(t)	TREE_CHECK (t, FLOOR_DIV_EXPR)
#define ROUND_DIV_EXPR_CHECK(t)	TREE_CHECK (t, ROUND_DIV_EXPR)
#define TRUNC_MOD_EXPR_CHECK(t)	TREE_CHECK (t, TRUNC_MOD_EXPR)
#define CEIL_MOD_EXPR_CHECK(t)	TREE_CHECK (t, CEIL_MOD_EXPR)
#define FLOOR_MOD_EXPR_CHECK(t)	TREE_CHECK (t, FLOOR_MOD_EXPR)
#define ROUND_MOD_EXPR_CHECK(t)	TREE_CHECK (t, ROUND_MOD_EXPR)
#define RDIV_EXPR_CHECK(t)	TREE_CHECK (t, RDIV_EXPR)
#define EXACT_DIV_EXPR_CHECK(t)	TREE_CHECK (t, EXACT_DIV_EXPR)
#define FIX_TRUNC_EXPR_CHECK(t)	TREE_CHECK (t, FIX_TRUNC_EXPR)
#define FLOAT_EXPR_CHECK(t)	TREE_CHECK (t, FLOAT_EXPR)
#define NEGATE_EXPR_CHECK(t)	TREE_CHECK (t, NEGATE_EXPR)
#define MIN_EXPR_CHECK(t)	TREE_CHECK (t, MIN_EXPR)
#define MAX_EXPR_CHECK(t)	TREE_CHECK (t, MAX_EXPR)
#define ABS_EXPR_CHECK(t)	TREE_CHECK (t, ABS_EXPR)
#define LSHIFT_EXPR_CHECK(t)	TREE_CHECK (t, LSHIFT_EXPR)
#define RSHIFT_EXPR_CHECK(t)	TREE_CHECK (t, RSHIFT_EXPR)
#define LROTATE_EXPR_CHECK(t)	TREE_CHECK (t, LROTATE_EXPR)
#define RROTATE_EXPR_CHECK(t)	TREE_CHECK (t, RROTATE_EXPR)
#define BIT_IOR_EXPR_CHECK(t)	TREE_CHECK (t, BIT_IOR_EXPR)
#define BIT_XOR_EXPR_CHECK(t)	TREE_CHECK (t, BIT_XOR_EXPR)
#define BIT_AND_EXPR_CHECK(t)	TREE_CHECK (t, BIT_AND_EXPR)
#define BIT_NOT_EXPR_CHECK(t)	TREE_CHECK (t, BIT_NOT_EXPR)
#define TRUTH_ANDIF_EXPR_CHECK(t)	TREE_CHECK (t, TRUTH_ANDIF_EXPR)
#define TRUTH_ORIF_EXPR_CHECK(t)	TREE_CHECK (t, TRUTH_ORIF_EXPR)
#define TRUTH_AND_EXPR_CHECK(t)	TREE_CHECK (t, TRUTH_AND_EXPR)
#define TRUTH_OR_EXPR_CHECK(t)	TREE_CHECK (t, TRUTH_OR_EXPR)
#define TRUTH_XOR_EXPR_CHECK(t)	TREE_CHECK (t, TRUTH_XOR_EXPR)
#define TRUTH_NOT_EXPR_CHECK(t)	TREE_CHECK (t, TRUTH_NOT_EXPR)
#define LT_EXPR_CHECK(t)	TREE_CHECK (t, LT_EXPR)
#define LE_EXPR_CHECK(t)	TREE_CHECK (t, LE_EXPR)
#define GT_EXPR_CHECK(t)	TREE_CHECK (t, GT_EXPR)
#define GE_EXPR_CHECK(t)	TREE_CHECK (t, GE_EXPR)
#define EQ_EXPR_CHECK(t)	TREE_CHECK (t, EQ_EXPR)
#define NE_EXPR_CHECK(t)	TREE_CHECK (t, NE_EXPR)
#define UNORDERED_EXPR_CHECK(t)	TREE_CHECK (t, UNORDERED_EXPR)
#define ORDERED_EXPR_CHECK(t)	TREE_CHECK (t, ORDERED_EXPR)
#define UNLT_EXPR_CHECK(t)	TREE_CHECK (t, UNLT_EXPR)
#define UNLE_EXPR_CHECK(t)	TREE_CHECK (t, UNLE_EXPR)
#define UNGT_EXPR_CHECK(t)	TREE_CHECK (t, UNGT_EXPR)
#define UNGE_EXPR_CHECK(t)	TREE_CHECK (t, UNGE_EXPR)
#define UNEQ_EXPR_CHECK(t)	TREE_CHECK (t, UNEQ_EXPR)
#define LTGT_EXPR_CHECK(t)	TREE_CHECK (t, LTGT_EXPR)
#define RANGE_EXPR_CHECK(t)	TREE_CHECK (t, RANGE_EXPR)
#define PAREN_EXPR_CHECK(t)	TREE_CHECK (t, PAREN_EXPR)
#define CONVERT_EXPR_CHECK(t)	TREE_CHECK (t, CONVERT_EXPR)
#define ADDR_SPACE_CONVERT_EXPR_CHECK(t)	TREE_CHECK (t, ADDR_SPACE_CONVERT_EXPR)
#define FIXED_CONVERT_EXPR_CHECK(t)	TREE_CHECK (t, FIXED_CONVERT_EXPR)
#define NOP_EXPR_CHECK(t)	TREE_CHECK (t, NOP_EXPR)
#define NON_LVALUE_EXPR_CHECK(t)	TREE_CHECK (t, NON_LVALUE_EXPR)
#define COMPOUND_LITERAL_EXPR_CHECK(t)	TREE_CHECK (t, COMPOUND_LITERAL_EXPR)
#define SAVE_EXPR_CHECK(t)	TREE_CHECK (t, SAVE_EXPR)
#define ADDR_EXPR_CHECK(t)	TREE_CHECK (t, ADDR_EXPR)
#define FDESC_EXPR_CHECK(t)	TREE_CHECK (t, FDESC_EXPR)
#define BIT_INSERT_EXPR_CHECK(t)	TREE_CHECK (t, BIT_INSERT_EXPR)
#define COMPLEX_EXPR_CHECK(t)	TREE_CHECK (t, COMPLEX_EXPR)
#define CONJ_EXPR_CHECK(t)	TREE_CHECK (t, CONJ_EXPR)
#define PREDECREMENT_EXPR_CHECK(t)	TREE_CHECK (t, PREDECREMENT_EXPR)
#define PREINCREMENT_EXPR_CHECK(t)	TREE_CHECK (t, PREINCREMENT_EXPR)
#define POSTDECREMENT_EXPR_CHECK(t)	TREE_CHECK (t, POSTDECREMENT_EXPR)
#define POSTINCREMENT_EXPR_CHECK(t)	TREE_CHECK (t, POSTINCREMENT_EXPR)
#define VA_ARG_EXPR_CHECK(t)	TREE_CHECK (t, VA_ARG_EXPR)
#define TRY_CATCH_EXPR_CHECK(t)	TREE_CHECK (t, TRY_CATCH_EXPR)
#define TRY_FINALLY_EXPR_CHECK(t)	TREE_CHECK (t, TRY_FINALLY_EXPR)
#define DECL_EXPR_CHECK(t)	TREE_CHECK (t, DECL_EXPR)
#define LABEL_EXPR_CHECK(t)	TREE_CHECK (t, LABEL_EXPR)
#define GOTO_EXPR_CHECK(t)	TREE_CHECK (t, GOTO_EXPR)
#define RETURN_EXPR_CHECK(t)	TREE_CHECK (t, RETURN_EXPR)
#define EXIT_EXPR_CHECK(t)	TREE_CHECK (t, EXIT_EXPR)
#define LOOP_EXPR_CHECK(t)	TREE_CHECK (t, LOOP_EXPR)
#define SWITCH_EXPR_CHECK(t)	TREE_CHECK (t, SWITCH_EXPR)
#define CASE_LABEL_EXPR_CHECK(t)	TREE_CHECK (t, CASE_LABEL_EXPR)
#define ASM_EXPR_CHECK(t)	TREE_CHECK (t, ASM_EXPR)
#define SSA_NAME_CHECK(t)	TREE_CHECK (t, SSA_NAME)
#define CATCH_EXPR_CHECK(t)	TREE_CHECK (t, CATCH_EXPR)
#define EH_FILTER_EXPR_CHECK(t)	TREE_CHECK (t, EH_FILTER_EXPR)
#define SCEV_KNOWN_CHECK(t)	TREE_CHECK (t, SCEV_KNOWN)
#define SCEV_NOT_KNOWN_CHECK(t)	TREE_CHECK (t, SCEV_NOT_KNOWN)
#define POLYNOMIAL_CHREC_CHECK(t)	TREE_CHECK (t, POLYNOMIAL_CHREC)
#define STATEMENT_LIST_CHECK(t)	TREE_CHECK (t, STATEMENT_LIST)
#define ASSERT_EXPR_CHECK(t)	TREE_CHECK (t, ASSERT_EXPR)
#define TREE_BINFO_CHECK(t)	TREE_CHECK (t, TREE_BINFO)
#define WITH_SIZE_EXPR_CHECK(t)	TREE_CHECK (t, WITH_SIZE_EXPR)
#define REALIGN_LOAD_EXPR_CHECK(t)	TREE_CHECK (t, REALIGN_LOAD_EXPR)
#define TARGET_MEM_REF_CHECK(t)	TREE_CHECK (t, TARGET_MEM_REF)
#define MEM_REF_CHECK(t)	TREE_CHECK (t, MEM_REF)
#define OACC_PARALLEL_CHECK(t)	TREE_CHECK (t, OACC_PARALLEL)
#define OACC_KERNELS_CHECK(t)	TREE_CHECK (t, OACC_KERNELS)
#define OACC_DATA_CHECK(t)	TREE_CHECK (t, OACC_DATA)
#define OACC_HOST_DATA_CHECK(t)	TREE_CHECK (t, OACC_HOST_DATA)
#define OMP_PARALLEL_CHECK(t)	TREE_CHECK (t, OMP_PARALLEL)
#define OMP_TASK_CHECK(t)	TREE_CHECK (t, OMP_TASK)
#define OMP_FOR_CHECK(t)	TREE_CHECK (t, OMP_FOR)
#define OMP_SIMD_CHECK(t)	TREE_CHECK (t, OMP_SIMD)
#define CILK_SIMD_CHECK(t)	TREE_CHECK (t, CILK_SIMD)
#define CILK_FOR_CHECK(t)	TREE_CHECK (t, CILK_FOR)
#define OMP_DISTRIBUTE_CHECK(t)	TREE_CHECK (t, OMP_DISTRIBUTE)
#define OMP_TASKLOOP_CHECK(t)	TREE_CHECK (t, OMP_TASKLOOP)
#define OACC_LOOP_CHECK(t)	TREE_CHECK (t, OACC_LOOP)
#define OMP_TEAMS_CHECK(t)	TREE_CHECK (t, OMP_TEAMS)
#define OMP_TARGET_DATA_CHECK(t)	TREE_CHECK (t, OMP_TARGET_DATA)
#define OMP_TARGET_CHECK(t)	TREE_CHECK (t, OMP_TARGET)
#define OMP_SECTIONS_CHECK(t)	TREE_CHECK (t, OMP_SECTIONS)
#define OMP_ORDERED_CHECK(t)	TREE_CHECK (t, OMP_ORDERED)
#define OMP_CRITICAL_CHECK(t)	TREE_CHECK (t, OMP_CRITICAL)
#define OMP_SINGLE_CHECK(t)	TREE_CHECK (t, OMP_SINGLE)
#define OMP_SECTION_CHECK(t)	TREE_CHECK (t, OMP_SECTION)
#define OMP_MASTER_CHECK(t)	TREE_CHECK (t, OMP_MASTER)
#define OMP_TASKGROUP_CHECK(t)	TREE_CHECK (t, OMP_TASKGROUP)
#define OACC_CACHE_CHECK(t)	TREE_CHECK (t, OACC_CACHE)
#define OACC_DECLARE_CHECK(t)	TREE_CHECK (t, OACC_DECLARE)
#define OACC_ENTER_DATA_CHECK(t)	TREE_CHECK (t, OACC_ENTER_DATA)
#define OACC_EXIT_DATA_CHECK(t)	TREE_CHECK (t, OACC_EXIT_DATA)
#define OACC_UPDATE_CHECK(t)	TREE_CHECK (t, OACC_UPDATE)
#define OMP_TARGET_UPDATE_CHECK(t)	TREE_CHECK (t, OMP_TARGET_UPDATE)
#define OMP_TARGET_ENTER_DATA_CHECK(t)	TREE_CHECK (t, OMP_TARGET_ENTER_DATA)
#define OMP_TARGET_EXIT_DATA_CHECK(t)	TREE_CHECK (t, OMP_TARGET_EXIT_DATA)
#define OMP_ATOMIC_CHECK(t)	TREE_CHECK (t, OMP_ATOMIC)
#define OMP_ATOMIC_READ_CHECK(t)	TREE_CHECK (t, OMP_ATOMIC_READ)
#define OMP_ATOMIC_CAPTURE_OLD_CHECK(t)	TREE_CHECK (t, OMP_ATOMIC_CAPTURE_OLD)
#define OMP_ATOMIC_CAPTURE_NEW_CHECK(t)	TREE_CHECK (t, OMP_ATOMIC_CAPTURE_NEW)
#define OMP_CLAUSE_CHECK(t)	TREE_CHECK (t, OMP_CLAUSE)
#define TRANSACTION_EXPR_CHECK(t)	TREE_CHECK (t, TRANSACTION_EXPR)
#define REDUC_MAX_EXPR_CHECK(t)	TREE_CHECK (t, REDUC_MAX_EXPR)
#define REDUC_MIN_EXPR_CHECK(t)	TREE_CHECK (t, REDUC_MIN_EXPR)
#define REDUC_PLUS_EXPR_CHECK(t)	TREE_CHECK (t, REDUC_PLUS_EXPR)
#define DOT_PROD_EXPR_CHECK(t)	TREE_CHECK (t, DOT_PROD_EXPR)
#define WIDEN_SUM_EXPR_CHECK(t)	TREE_CHECK (t, WIDEN_SUM_EXPR)
#define SAD_EXPR_CHECK(t)	TREE_CHECK (t, SAD_EXPR)
#define WIDEN_MULT_EXPR_CHECK(t)	TREE_CHECK (t, WIDEN_MULT_EXPR)
#define WIDEN_MULT_PLUS_EXPR_CHECK(t)	TREE_CHECK (t, WIDEN_MULT_PLUS_EXPR)
#define WIDEN_MULT_MINUS_EXPR_CHECK(t)	TREE_CHECK (t, WIDEN_MULT_MINUS_EXPR)
#define WIDEN_LSHIFT_EXPR_CHECK(t)	TREE_CHECK (t, WIDEN_LSHIFT_EXPR)
#define FMA_EXPR_CHECK(t)	TREE_CHECK (t, FMA_EXPR)
#define VEC_WIDEN_MULT_HI_EXPR_CHECK(t)	TREE_CHECK (t, VEC_WIDEN_MULT_HI_EXPR)
#define VEC_WIDEN_MULT_LO_EXPR_CHECK(t)	TREE_CHECK (t, VEC_WIDEN_MULT_LO_EXPR)
#define VEC_WIDEN_MULT_EVEN_EXPR_CHECK(t)	TREE_CHECK (t, VEC_WIDEN_MULT_EVEN_EXPR)
#define VEC_WIDEN_MULT_ODD_EXPR_CHECK(t)	TREE_CHECK (t, VEC_WIDEN_MULT_ODD_EXPR)
#define VEC_UNPACK_HI_EXPR_CHECK(t)	TREE_CHECK (t, VEC_UNPACK_HI_EXPR)
#define VEC_UNPACK_LO_EXPR_CHECK(t)	TREE_CHECK (t, VEC_UNPACK_LO_EXPR)
#define VEC_UNPACK_FLOAT_HI_EXPR_CHECK(t)	TREE_CHECK (t, VEC_UNPACK_FLOAT_HI_EXPR)
#define VEC_UNPACK_FLOAT_LO_EXPR_CHECK(t)	TREE_CHECK (t, VEC_UNPACK_FLOAT_LO_EXPR)
#define VEC_PACK_TRUNC_EXPR_CHECK(t)	TREE_CHECK (t, VEC_PACK_TRUNC_EXPR)
#define VEC_PACK_SAT_EXPR_CHECK(t)	TREE_CHECK (t, VEC_PACK_SAT_EXPR)
#define VEC_PACK_FIX_TRUNC_EXPR_CHECK(t)	TREE_CHECK (t, VEC_PACK_FIX_TRUNC_EXPR)
#define VEC_WIDEN_LSHIFT_HI_EXPR_CHECK(t)	TREE_CHECK (t, VEC_WIDEN_LSHIFT_HI_EXPR)
#define VEC_WIDEN_LSHIFT_LO_EXPR_CHECK(t)	TREE_CHECK (t, VEC_WIDEN_LSHIFT_LO_EXPR)
#define PREDICT_EXPR_CHECK(t)	TREE_CHECK (t, PREDICT_EXPR)
#define OPTIMIZATION_NODE_CHECK(t)	TREE_CHECK (t, OPTIMIZATION_NODE)
#define TARGET_OPTION_NODE_CHECK(t)	TREE_CHECK (t, TARGET_OPTION_NODE)
#define ANNOTATE_EXPR_CHECK(t)	TREE_CHECK (t, ANNOTATE_EXPR)
#define CILK_SPAWN_STMT_CHECK(t)	TREE_CHECK (t, CILK_SPAWN_STMT)
#define CILK_SYNC_STMT_CHECK(t)	TREE_CHECK (t, CILK_SYNC_STMT)
#define C_MAYBE_CONST_EXPR_CHECK(t)	TREE_CHECK (t, C_MAYBE_CONST_EXPR)
#define EXCESS_PRECISION_EXPR_CHECK(t)	TREE_CHECK (t, EXCESS_PRECISION_EXPR)
#define USERDEF_LITERAL_CHECK(t)	TREE_CHECK (t, USERDEF_LITERAL)
#define SIZEOF_EXPR_CHECK(t)	TREE_CHECK (t, SIZEOF_EXPR)
#define ARRAY_NOTATION_REF_CHECK(t)	TREE_CHECK (t, ARRAY_NOTATION_REF)
#define UNCONSTRAINED_ARRAY_TYPE_CHECK(t)	TREE_CHECK (t, UNCONSTRAINED_ARRAY_TYPE)
#define UNCONSTRAINED_ARRAY_REF_CHECK(t)	TREE_CHECK (t, UNCONSTRAINED_ARRAY_REF)
#define NULL_EXPR_CHECK(t)	TREE_CHECK (t, NULL_EXPR)
#define PLUS_NOMOD_EXPR_CHECK(t)	TREE_CHECK (t, PLUS_NOMOD_EXPR)
#define MINUS_NOMOD_EXPR_CHECK(t)	TREE_CHECK (t, MINUS_NOMOD_EXPR)
#define POWER_EXPR_CHECK(t)	TREE_CHECK (t, POWER_EXPR)
#define ATTR_ADDR_EXPR_CHECK(t)	TREE_CHECK (t, ATTR_ADDR_EXPR)
#define STMT_STMT_CHECK(t)	TREE_CHECK (t, STMT_STMT)
#define LOOP_STMT_CHECK(t)	TREE_CHECK (t, LOOP_STMT)
#define EXIT_STMT_CHECK(t)	TREE_CHECK (t, EXIT_STMT)
#define OFFSET_REF_CHECK(t)	TREE_CHECK (t, OFFSET_REF)
#define PTRMEM_CST_CHECK(t)	TREE_CHECK (t, PTRMEM_CST)
#define NEW_EXPR_CHECK(t)	TREE_CHECK (t, NEW_EXPR)
#define VEC_NEW_EXPR_CHECK(t)	TREE_CHECK (t, VEC_NEW_EXPR)
#define DELETE_EXPR_CHECK(t)	TREE_CHECK (t, DELETE_EXPR)
#define VEC_DELETE_EXPR_CHECK(t)	TREE_CHECK (t, VEC_DELETE_EXPR)
#define SCOPE_REF_CHECK(t)	TREE_CHECK (t, SCOPE_REF)
#define MEMBER_REF_CHECK(t)	TREE_CHECK (t, MEMBER_REF)
#define TYPE_EXPR_CHECK(t)	TREE_CHECK (t, TYPE_EXPR)
#define AGGR_INIT_EXPR_CHECK(t)	TREE_CHECK (t, AGGR_INIT_EXPR)
#define VEC_INIT_EXPR_CHECK(t)	TREE_CHECK (t, VEC_INIT_EXPR)
#define THROW_EXPR_CHECK(t)	TREE_CHECK (t, THROW_EXPR)
#define EMPTY_CLASS_EXPR_CHECK(t)	TREE_CHECK (t, EMPTY_CLASS_EXPR)
#define BASELINK_CHECK(t)	TREE_CHECK (t, BASELINK)
#define TEMPLATE_DECL_CHECK(t)	TREE_CHECK (t, TEMPLATE_DECL)
#define TEMPLATE_PARM_INDEX_CHECK(t)	TREE_CHECK (t, TEMPLATE_PARM_INDEX)
#define TEMPLATE_TEMPLATE_PARM_CHECK(t)	TREE_CHECK (t, TEMPLATE_TEMPLATE_PARM)
#define TEMPLATE_TYPE_PARM_CHECK(t)	TREE_CHECK (t, TEMPLATE_TYPE_PARM)
#define TYPENAME_TYPE_CHECK(t)	TREE_CHECK (t, TYPENAME_TYPE)
#define TYPEOF_TYPE_CHECK(t)	TREE_CHECK (t, TYPEOF_TYPE)
#define BOUND_TEMPLATE_TEMPLATE_PARM_CHECK(t)	TREE_CHECK (t, BOUND_TEMPLATE_TEMPLATE_PARM)
#define UNBOUND_CLASS_TEMPLATE_CHECK(t)	TREE_CHECK (t, UNBOUND_CLASS_TEMPLATE)
#define USING_DECL_CHECK(t)	TREE_CHECK (t, USING_DECL)
#define USING_STMT_CHECK(t)	TREE_CHECK (t, USING_STMT)
#define DEFAULT_ARG_CHECK(t)	TREE_CHECK (t, DEFAULT_ARG)
#define DEFERRED_NOEXCEPT_CHECK(t)	TREE_CHECK (t, DEFERRED_NOEXCEPT)
#define TEMPLATE_ID_EXPR_CHECK(t)	TREE_CHECK (t, TEMPLATE_ID_EXPR)
#define OVERLOAD_CHECK(t)	TREE_CHECK (t, OVERLOAD)
#define PSEUDO_DTOR_EXPR_CHECK(t)	TREE_CHECK (t, PSEUDO_DTOR_EXPR)
#define MODOP_EXPR_CHECK(t)	TREE_CHECK (t, MODOP_EXPR)
#define CAST_EXPR_CHECK(t)	TREE_CHECK (t, CAST_EXPR)
#define REINTERPRET_CAST_EXPR_CHECK(t)	TREE_CHECK (t, REINTERPRET_CAST_EXPR)
#define CONST_CAST_EXPR_CHECK(t)	TREE_CHECK (t, CONST_CAST_EXPR)
#define STATIC_CAST_EXPR_CHECK(t)	TREE_CHECK (t, STATIC_CAST_EXPR)
#define DYNAMIC_CAST_EXPR_CHECK(t)	TREE_CHECK (t, DYNAMIC_CAST_EXPR)
#define IMPLICIT_CONV_EXPR_CHECK(t)	TREE_CHECK (t, IMPLICIT_CONV_EXPR)
#define DOTSTAR_EXPR_CHECK(t)	TREE_CHECK (t, DOTSTAR_EXPR)
#define TYPEID_EXPR_CHECK(t)	TREE_CHECK (t, TYPEID_EXPR)
#define NOEXCEPT_EXPR_CHECK(t)	TREE_CHECK (t, NOEXCEPT_EXPR)
#define NON_DEPENDENT_EXPR_CHECK(t)	TREE_CHECK (t, NON_DEPENDENT_EXPR)
#define CTOR_INITIALIZER_CHECK(t)	TREE_CHECK (t, CTOR_INITIALIZER)
#define TRY_BLOCK_CHECK(t)	TREE_CHECK (t, TRY_BLOCK)
#define EH_SPEC_BLOCK_CHECK(t)	TREE_CHECK (t, EH_SPEC_BLOCK)
#define HANDLER_CHECK(t)	TREE_CHECK (t, HANDLER)
#define MUST_NOT_THROW_EXPR_CHECK(t)	TREE_CHECK (t, MUST_NOT_THROW_EXPR)
#define CLEANUP_STMT_CHECK(t)	TREE_CHECK (t, CLEANUP_STMT)
#define IF_STMT_CHECK(t)	TREE_CHECK (t, IF_STMT)
#define FOR_STMT_CHECK(t)	TREE_CHECK (t, FOR_STMT)
#define RANGE_FOR_STMT_CHECK(t)	TREE_CHECK (t, RANGE_FOR_STMT)
#define WHILE_STMT_CHECK(t)	TREE_CHECK (t, WHILE_STMT)
#define DO_STMT_CHECK(t)	TREE_CHECK (t, DO_STMT)
#define BREAK_STMT_CHECK(t)	TREE_CHECK (t, BREAK_STMT)
#define CONTINUE_STMT_CHECK(t)	TREE_CHECK (t, CONTINUE_STMT)
#define SWITCH_STMT_CHECK(t)	TREE_CHECK (t, SWITCH_STMT)
#define EXPR_STMT_CHECK(t)	TREE_CHECK (t, EXPR_STMT)
#define TAG_DEFN_CHECK(t)	TREE_CHECK (t, TAG_DEFN)
#define OFFSETOF_EXPR_CHECK(t)	TREE_CHECK (t, OFFSETOF_EXPR)
#define ADDRESSOF_EXPR_CHECK(t)	TREE_CHECK (t, ADDRESSOF_EXPR)
#define ARROW_EXPR_CHECK(t)	TREE_CHECK (t, ARROW_EXPR)
#define ALIGNOF_EXPR_CHECK(t)	TREE_CHECK (t, ALIGNOF_EXPR)
#define AT_ENCODE_EXPR_CHECK(t)	TREE_CHECK (t, AT_ENCODE_EXPR)
#define STMT_EXPR_CHECK(t)	TREE_CHECK (t, STMT_EXPR)
#define UNARY_PLUS_EXPR_CHECK(t)	TREE_CHECK (t, UNARY_PLUS_EXPR)
#define STATIC_ASSERT_CHECK(t)	TREE_CHECK (t, STATIC_ASSERT)
#define TYPE_ARGUMENT_PACK_CHECK(t)	TREE_CHECK (t, TYPE_ARGUMENT_PACK)
#define NONTYPE_ARGUMENT_PACK_CHECK(t)	TREE_CHECK (t, NONTYPE_ARGUMENT_PACK)
#define TYPE_PACK_EXPANSION_CHECK(t)	TREE_CHECK (t, TYPE_PACK_EXPANSION)
#define EXPR_PACK_EXPANSION_CHECK(t)	TREE_CHECK (t, EXPR_PACK_EXPANSION)
#define ARGUMENT_PACK_SELECT_CHECK(t)	TREE_CHECK (t, ARGUMENT_PACK_SELECT)
#define UNARY_LEFT_FOLD_EXPR_CHECK(t)	TREE_CHECK (t, UNARY_LEFT_FOLD_EXPR)
#define UNARY_RIGHT_FOLD_EXPR_CHECK(t)	TREE_CHECK (t, UNARY_RIGHT_FOLD_EXPR)
#define BINARY_LEFT_FOLD_EXPR_CHECK(t)	TREE_CHECK (t, BINARY_LEFT_FOLD_EXPR)
#define BINARY_RIGHT_FOLD_EXPR_CHECK(t)	TREE_CHECK (t, BINARY_RIGHT_FOLD_EXPR)
#define TRAIT_EXPR_CHECK(t)	TREE_CHECK (t, TRAIT_EXPR)
#define LAMBDA_EXPR_CHECK(t)	TREE_CHECK (t, LAMBDA_EXPR)
#define DECLTYPE_TYPE_CHECK(t)	TREE_CHECK (t, DECLTYPE_TYPE)
#define UNDERLYING_TYPE_CHECK(t)	TREE_CHECK (t, UNDERLYING_TYPE)
#define BASES_CHECK(t)	TREE_CHECK (t, BASES)
#define TEMPLATE_INFO_CHECK(t)	TREE_CHECK (t, TEMPLATE_INFO)
#define CONSTRAINT_INFO_CHECK(t)	TREE_CHECK (t, CONSTRAINT_INFO)
#define WILDCARD_DECL_CHECK(t)	TREE_CHECK (t, WILDCARD_DECL)
#define REQUIRES_EXPR_CHECK(t)	TREE_CHECK (t, REQUIRES_EXPR)
#define SIMPLE_REQ_CHECK(t)	TREE_CHECK (t, SIMPLE_REQ)
#define TYPE_REQ_CHECK(t)	TREE_CHECK (t, TYPE_REQ)
#define COMPOUND_REQ_CHECK(t)	TREE_CHECK (t, COMPOUND_REQ)
#define NESTED_REQ_CHECK(t)	TREE_CHECK (t, NESTED_REQ)
#define PRED_CONSTR_CHECK(t)	TREE_CHECK (t, PRED_CONSTR)
#define CHECK_CONSTR_CHECK(t)	TREE_CHECK (t, CHECK_CONSTR)
#define EXPR_CONSTR_CHECK(t)	TREE_CHECK (t, EXPR_CONSTR)
#define TYPE_CONSTR_CHECK(t)	TREE_CHECK (t, TYPE_CONSTR)
#define ICONV_CONSTR_CHECK(t)	TREE_CHECK (t, ICONV_CONSTR)
#define DEDUCT_CONSTR_CHECK(t)	TREE_CHECK (t, DEDUCT_CONSTR)
#define EXCEPT_CONSTR_CHECK(t)	TREE_CHECK (t, EXCEPT_CONSTR)
#define PARM_CONSTR_CHECK(t)	TREE_CHECK (t, PARM_CONSTR)
#define CONJ_CONSTR_CHECK(t)	TREE_CHECK (t, CONJ_CONSTR)
#define DISJ_CONSTR_CHECK(t)	TREE_CHECK (t, DISJ_CONSTR)
#define CLASS_INTERFACE_TYPE_CHECK(t)	TREE_CHECK (t, CLASS_INTERFACE_TYPE)
#define CLASS_IMPLEMENTATION_TYPE_CHECK(t)	TREE_CHECK (t, CLASS_IMPLEMENTATION_TYPE)
#define CATEGORY_INTERFACE_TYPE_CHECK(t)	TREE_CHECK (t, CATEGORY_INTERFACE_TYPE)
#define CATEGORY_IMPLEMENTATION_TYPE_CHECK(t)	TREE_CHECK (t, CATEGORY_IMPLEMENTATION_TYPE)
#define PROTOCOL_INTERFACE_TYPE_CHECK(t)	TREE_CHECK (t, PROTOCOL_INTERFACE_TYPE)
#define KEYWORD_DECL_CHECK(t)	TREE_CHECK (t, KEYWORD_DECL)
#define INSTANCE_METHOD_DECL_CHECK(t)	TREE_CHECK (t, INSTANCE_METHOD_DECL)
#define CLASS_METHOD_DECL_CHECK(t)	TREE_CHECK (t, CLASS_METHOD_DECL)
#define PROPERTY_DECL_CHECK(t)	TREE_CHECK (t, PROPERTY_DECL)
#define MESSAGE_SEND_EXPR_CHECK(t)	TREE_CHECK (t, MESSAGE_SEND_EXPR)
#define CLASS_REFERENCE_EXPR_CHECK(t)	TREE_CHECK (t, CLASS_REFERENCE_EXPR)
#define PROPERTY_REF_CHECK(t)	TREE_CHECK (t, PROPERTY_REF)

#endif /* GCC_TREE_CHECK_H */
