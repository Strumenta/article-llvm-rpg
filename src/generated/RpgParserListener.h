
// Generated from src/antlr/RpgParser.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "RpgParser.h"


namespace antlrcpprpg {

/**
 * This interface defines an abstract listener for a parse tree produced by RpgParser.
 */
class  RpgParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterR(RpgParser::RContext *ctx) = 0;
  virtual void exitR(RpgParser::RContext *ctx) = 0;

  virtual void enterStatement(RpgParser::StatementContext *ctx) = 0;
  virtual void exitStatement(RpgParser::StatementContext *ctx) = 0;

  virtual void enterEndSourceBlock(RpgParser::EndSourceBlockContext *ctx) = 0;
  virtual void exitEndSourceBlock(RpgParser::EndSourceBlockContext *ctx) = 0;

  virtual void enterEndSource(RpgParser::EndSourceContext *ctx) = 0;
  virtual void exitEndSource(RpgParser::EndSourceContext *ctx) = 0;

  virtual void enterEndSourceHead(RpgParser::EndSourceHeadContext *ctx) = 0;
  virtual void exitEndSourceHead(RpgParser::EndSourceHeadContext *ctx) = 0;

  virtual void enterEndSourceLine(RpgParser::EndSourceLineContext *ctx) = 0;
  virtual void exitEndSourceLine(RpgParser::EndSourceLineContext *ctx) = 0;

  virtual void enterEndSourceLineText(RpgParser::EndSourceLineTextContext *ctx) = 0;
  virtual void exitEndSourceLineText(RpgParser::EndSourceLineTextContext *ctx) = 0;

  virtual void enterStar_comments(RpgParser::Star_commentsContext *ctx) = 0;
  virtual void exitStar_comments(RpgParser::Star_commentsContext *ctx) = 0;

  virtual void enterFree_comments(RpgParser::Free_commentsContext *ctx) = 0;
  virtual void exitFree_comments(RpgParser::Free_commentsContext *ctx) = 0;

  virtual void enterFree_linecomments(RpgParser::Free_linecommentsContext *ctx) = 0;
  virtual void exitFree_linecomments(RpgParser::Free_linecommentsContext *ctx) = 0;

  virtual void enterComments(RpgParser::CommentsContext *ctx) = 0;
  virtual void exitComments(RpgParser::CommentsContext *ctx) = 0;

  virtual void enterDspec(RpgParser::DspecContext *ctx) = 0;
  virtual void exitDspec(RpgParser::DspecContext *ctx) = 0;

  virtual void enterDspecConstant(RpgParser::DspecConstantContext *ctx) = 0;
  virtual void exitDspecConstant(RpgParser::DspecConstantContext *ctx) = 0;

  virtual void enterDatatype(RpgParser::DatatypeContext *ctx) = 0;
  virtual void exitDatatype(RpgParser::DatatypeContext *ctx) = 0;

  virtual void enterKeyword(RpgParser::KeywordContext *ctx) = 0;
  virtual void exitKeyword(RpgParser::KeywordContext *ctx) = 0;

  virtual void enterDspec_bif(RpgParser::Dspec_bifContext *ctx) = 0;
  virtual void exitDspec_bif(RpgParser::Dspec_bifContext *ctx) = 0;

  virtual void enterKeyword_alias(RpgParser::Keyword_aliasContext *ctx) = 0;
  virtual void exitKeyword_alias(RpgParser::Keyword_aliasContext *ctx) = 0;

  virtual void enterKeyword_align(RpgParser::Keyword_alignContext *ctx) = 0;
  virtual void exitKeyword_align(RpgParser::Keyword_alignContext *ctx) = 0;

  virtual void enterKeyword_alt(RpgParser::Keyword_altContext *ctx) = 0;
  virtual void exitKeyword_alt(RpgParser::Keyword_altContext *ctx) = 0;

  virtual void enterKeyword_altseq(RpgParser::Keyword_altseqContext *ctx) = 0;
  virtual void exitKeyword_altseq(RpgParser::Keyword_altseqContext *ctx) = 0;

  virtual void enterKeyword_ascend(RpgParser::Keyword_ascendContext *ctx) = 0;
  virtual void exitKeyword_ascend(RpgParser::Keyword_ascendContext *ctx) = 0;

  virtual void enterKeyword_based(RpgParser::Keyword_basedContext *ctx) = 0;
  virtual void exitKeyword_based(RpgParser::Keyword_basedContext *ctx) = 0;

  virtual void enterKeyword_ccsid(RpgParser::Keyword_ccsidContext *ctx) = 0;
  virtual void exitKeyword_ccsid(RpgParser::Keyword_ccsidContext *ctx) = 0;

  virtual void enterKeyword_class(RpgParser::Keyword_classContext *ctx) = 0;
  virtual void exitKeyword_class(RpgParser::Keyword_classContext *ctx) = 0;

  virtual void enterKeyword_const(RpgParser::Keyword_constContext *ctx) = 0;
  virtual void exitKeyword_const(RpgParser::Keyword_constContext *ctx) = 0;

  virtual void enterKeyword_ctdata(RpgParser::Keyword_ctdataContext *ctx) = 0;
  virtual void exitKeyword_ctdata(RpgParser::Keyword_ctdataContext *ctx) = 0;

  virtual void enterKeyword_datfmt(RpgParser::Keyword_datfmtContext *ctx) = 0;
  virtual void exitKeyword_datfmt(RpgParser::Keyword_datfmtContext *ctx) = 0;

  virtual void enterDateSeparator(RpgParser::DateSeparatorContext *ctx) = 0;
  virtual void exitDateSeparator(RpgParser::DateSeparatorContext *ctx) = 0;

  virtual void enterKeyword_descend(RpgParser::Keyword_descendContext *ctx) = 0;
  virtual void exitKeyword_descend(RpgParser::Keyword_descendContext *ctx) = 0;

  virtual void enterKeyword_dim(RpgParser::Keyword_dimContext *ctx) = 0;
  virtual void exitKeyword_dim(RpgParser::Keyword_dimContext *ctx) = 0;

  virtual void enterKeyword_dtaara(RpgParser::Keyword_dtaaraContext *ctx) = 0;
  virtual void exitKeyword_dtaara(RpgParser::Keyword_dtaaraContext *ctx) = 0;

  virtual void enterKeyword_export(RpgParser::Keyword_exportContext *ctx) = 0;
  virtual void exitKeyword_export(RpgParser::Keyword_exportContext *ctx) = 0;

  virtual void enterKeyword_ext(RpgParser::Keyword_extContext *ctx) = 0;
  virtual void exitKeyword_ext(RpgParser::Keyword_extContext *ctx) = 0;

  virtual void enterKeyword_extfld(RpgParser::Keyword_extfldContext *ctx) = 0;
  virtual void exitKeyword_extfld(RpgParser::Keyword_extfldContext *ctx) = 0;

  virtual void enterKeyword_extfmt(RpgParser::Keyword_extfmtContext *ctx) = 0;
  virtual void exitKeyword_extfmt(RpgParser::Keyword_extfmtContext *ctx) = 0;

  virtual void enterKeyword_extname(RpgParser::Keyword_extnameContext *ctx) = 0;
  virtual void exitKeyword_extname(RpgParser::Keyword_extnameContext *ctx) = 0;

  virtual void enterKeyword_extpgm(RpgParser::Keyword_extpgmContext *ctx) = 0;
  virtual void exitKeyword_extpgm(RpgParser::Keyword_extpgmContext *ctx) = 0;

  virtual void enterKeyword_extproc(RpgParser::Keyword_extprocContext *ctx) = 0;
  virtual void exitKeyword_extproc(RpgParser::Keyword_extprocContext *ctx) = 0;

  virtual void enterKeyword_fromfile(RpgParser::Keyword_fromfileContext *ctx) = 0;
  virtual void exitKeyword_fromfile(RpgParser::Keyword_fromfileContext *ctx) = 0;

  virtual void enterKeyword_import(RpgParser::Keyword_importContext *ctx) = 0;
  virtual void exitKeyword_import(RpgParser::Keyword_importContext *ctx) = 0;

  virtual void enterKeyword_inz(RpgParser::Keyword_inzContext *ctx) = 0;
  virtual void exitKeyword_inz(RpgParser::Keyword_inzContext *ctx) = 0;

  virtual void enterKeyword_len(RpgParser::Keyword_lenContext *ctx) = 0;
  virtual void exitKeyword_len(RpgParser::Keyword_lenContext *ctx) = 0;

  virtual void enterKeyword_like(RpgParser::Keyword_likeContext *ctx) = 0;
  virtual void exitKeyword_like(RpgParser::Keyword_likeContext *ctx) = 0;

  virtual void enterKeyword_likeds(RpgParser::Keyword_likedsContext *ctx) = 0;
  virtual void exitKeyword_likeds(RpgParser::Keyword_likedsContext *ctx) = 0;

  virtual void enterKeyword_likefile(RpgParser::Keyword_likefileContext *ctx) = 0;
  virtual void exitKeyword_likefile(RpgParser::Keyword_likefileContext *ctx) = 0;

  virtual void enterKeyword_likerec(RpgParser::Keyword_likerecContext *ctx) = 0;
  virtual void exitKeyword_likerec(RpgParser::Keyword_likerecContext *ctx) = 0;

  virtual void enterKeyword_noopt(RpgParser::Keyword_nooptContext *ctx) = 0;
  virtual void exitKeyword_noopt(RpgParser::Keyword_nooptContext *ctx) = 0;

  virtual void enterKeyword_occurs(RpgParser::Keyword_occursContext *ctx) = 0;
  virtual void exitKeyword_occurs(RpgParser::Keyword_occursContext *ctx) = 0;

  virtual void enterKeyword_opdesc(RpgParser::Keyword_opdescContext *ctx) = 0;
  virtual void exitKeyword_opdesc(RpgParser::Keyword_opdescContext *ctx) = 0;

  virtual void enterKeyword_options(RpgParser::Keyword_optionsContext *ctx) = 0;
  virtual void exitKeyword_options(RpgParser::Keyword_optionsContext *ctx) = 0;

  virtual void enterKeyword_overlay(RpgParser::Keyword_overlayContext *ctx) = 0;
  virtual void exitKeyword_overlay(RpgParser::Keyword_overlayContext *ctx) = 0;

  virtual void enterKeyword_packeven(RpgParser::Keyword_packevenContext *ctx) = 0;
  virtual void exitKeyword_packeven(RpgParser::Keyword_packevenContext *ctx) = 0;

  virtual void enterKeyword_perrcd(RpgParser::Keyword_perrcdContext *ctx) = 0;
  virtual void exitKeyword_perrcd(RpgParser::Keyword_perrcdContext *ctx) = 0;

  virtual void enterKeyword_prefix(RpgParser::Keyword_prefixContext *ctx) = 0;
  virtual void exitKeyword_prefix(RpgParser::Keyword_prefixContext *ctx) = 0;

  virtual void enterKeyword_pos(RpgParser::Keyword_posContext *ctx) = 0;
  virtual void exitKeyword_pos(RpgParser::Keyword_posContext *ctx) = 0;

  virtual void enterKeyword_procptr(RpgParser::Keyword_procptrContext *ctx) = 0;
  virtual void exitKeyword_procptr(RpgParser::Keyword_procptrContext *ctx) = 0;

  virtual void enterKeyword_qualified(RpgParser::Keyword_qualifiedContext *ctx) = 0;
  virtual void exitKeyword_qualified(RpgParser::Keyword_qualifiedContext *ctx) = 0;

  virtual void enterKeyword_rtnparm(RpgParser::Keyword_rtnparmContext *ctx) = 0;
  virtual void exitKeyword_rtnparm(RpgParser::Keyword_rtnparmContext *ctx) = 0;

  virtual void enterKeyword_static(RpgParser::Keyword_staticContext *ctx) = 0;
  virtual void exitKeyword_static(RpgParser::Keyword_staticContext *ctx) = 0;

  virtual void enterKeyword_sqltype(RpgParser::Keyword_sqltypeContext *ctx) = 0;
  virtual void exitKeyword_sqltype(RpgParser::Keyword_sqltypeContext *ctx) = 0;

  virtual void enterKeyword_template(RpgParser::Keyword_templateContext *ctx) = 0;
  virtual void exitKeyword_template(RpgParser::Keyword_templateContext *ctx) = 0;

  virtual void enterKeyword_timfmt(RpgParser::Keyword_timfmtContext *ctx) = 0;
  virtual void exitKeyword_timfmt(RpgParser::Keyword_timfmtContext *ctx) = 0;

  virtual void enterKeyword_tofile(RpgParser::Keyword_tofileContext *ctx) = 0;
  virtual void exitKeyword_tofile(RpgParser::Keyword_tofileContext *ctx) = 0;

  virtual void enterKeyword_value(RpgParser::Keyword_valueContext *ctx) = 0;
  virtual void exitKeyword_value(RpgParser::Keyword_valueContext *ctx) = 0;

  virtual void enterKeyword_varying(RpgParser::Keyword_varyingContext *ctx) = 0;
  virtual void exitKeyword_varying(RpgParser::Keyword_varyingContext *ctx) = 0;

  virtual void enterKeyword_psds(RpgParser::Keyword_psdsContext *ctx) = 0;
  virtual void exitKeyword_psds(RpgParser::Keyword_psdsContext *ctx) = 0;

  virtual void enterKeyword_block(RpgParser::Keyword_blockContext *ctx) = 0;
  virtual void exitKeyword_block(RpgParser::Keyword_blockContext *ctx) = 0;

  virtual void enterKeyword_commit(RpgParser::Keyword_commitContext *ctx) = 0;
  virtual void exitKeyword_commit(RpgParser::Keyword_commitContext *ctx) = 0;

  virtual void enterKeyword_devid(RpgParser::Keyword_devidContext *ctx) = 0;
  virtual void exitKeyword_devid(RpgParser::Keyword_devidContext *ctx) = 0;

  virtual void enterKeyword_extdesc(RpgParser::Keyword_extdescContext *ctx) = 0;
  virtual void exitKeyword_extdesc(RpgParser::Keyword_extdescContext *ctx) = 0;

  virtual void enterKeyword_extfile(RpgParser::Keyword_extfileContext *ctx) = 0;
  virtual void exitKeyword_extfile(RpgParser::Keyword_extfileContext *ctx) = 0;

  virtual void enterKeyword_extind(RpgParser::Keyword_extindContext *ctx) = 0;
  virtual void exitKeyword_extind(RpgParser::Keyword_extindContext *ctx) = 0;

  virtual void enterKeyword_extmbr(RpgParser::Keyword_extmbrContext *ctx) = 0;
  virtual void exitKeyword_extmbr(RpgParser::Keyword_extmbrContext *ctx) = 0;

  virtual void enterKeyword_formlen(RpgParser::Keyword_formlenContext *ctx) = 0;
  virtual void exitKeyword_formlen(RpgParser::Keyword_formlenContext *ctx) = 0;

  virtual void enterKeyword_formofl(RpgParser::Keyword_formoflContext *ctx) = 0;
  virtual void exitKeyword_formofl(RpgParser::Keyword_formoflContext *ctx) = 0;

  virtual void enterKeyword_ignore(RpgParser::Keyword_ignoreContext *ctx) = 0;
  virtual void exitKeyword_ignore(RpgParser::Keyword_ignoreContext *ctx) = 0;

  virtual void enterKeyword_include(RpgParser::Keyword_includeContext *ctx) = 0;
  virtual void exitKeyword_include(RpgParser::Keyword_includeContext *ctx) = 0;

  virtual void enterKeyword_indds(RpgParser::Keyword_inddsContext *ctx) = 0;
  virtual void exitKeyword_indds(RpgParser::Keyword_inddsContext *ctx) = 0;

  virtual void enterKeyword_infds(RpgParser::Keyword_infdsContext *ctx) = 0;
  virtual void exitKeyword_infds(RpgParser::Keyword_infdsContext *ctx) = 0;

  virtual void enterKeyword_infsr(RpgParser::Keyword_infsrContext *ctx) = 0;
  virtual void exitKeyword_infsr(RpgParser::Keyword_infsrContext *ctx) = 0;

  virtual void enterKeyword_keyloc(RpgParser::Keyword_keylocContext *ctx) = 0;
  virtual void exitKeyword_keyloc(RpgParser::Keyword_keylocContext *ctx) = 0;

  virtual void enterKeyword_maxdev(RpgParser::Keyword_maxdevContext *ctx) = 0;
  virtual void exitKeyword_maxdev(RpgParser::Keyword_maxdevContext *ctx) = 0;

  virtual void enterKeyword_oflind(RpgParser::Keyword_oflindContext *ctx) = 0;
  virtual void exitKeyword_oflind(RpgParser::Keyword_oflindContext *ctx) = 0;

  virtual void enterKeyword_pass(RpgParser::Keyword_passContext *ctx) = 0;
  virtual void exitKeyword_pass(RpgParser::Keyword_passContext *ctx) = 0;

  virtual void enterKeyword_pgmname(RpgParser::Keyword_pgmnameContext *ctx) = 0;
  virtual void exitKeyword_pgmname(RpgParser::Keyword_pgmnameContext *ctx) = 0;

  virtual void enterKeyword_plist(RpgParser::Keyword_plistContext *ctx) = 0;
  virtual void exitKeyword_plist(RpgParser::Keyword_plistContext *ctx) = 0;

  virtual void enterKeyword_prtctl(RpgParser::Keyword_prtctlContext *ctx) = 0;
  virtual void exitKeyword_prtctl(RpgParser::Keyword_prtctlContext *ctx) = 0;

  virtual void enterKeyword_rafdata(RpgParser::Keyword_rafdataContext *ctx) = 0;
  virtual void exitKeyword_rafdata(RpgParser::Keyword_rafdataContext *ctx) = 0;

  virtual void enterKeyword_recno(RpgParser::Keyword_recnoContext *ctx) = 0;
  virtual void exitKeyword_recno(RpgParser::Keyword_recnoContext *ctx) = 0;

  virtual void enterKeyword_rename(RpgParser::Keyword_renameContext *ctx) = 0;
  virtual void exitKeyword_rename(RpgParser::Keyword_renameContext *ctx) = 0;

  virtual void enterKeyword_saveds(RpgParser::Keyword_savedsContext *ctx) = 0;
  virtual void exitKeyword_saveds(RpgParser::Keyword_savedsContext *ctx) = 0;

  virtual void enterKeyword_saveind(RpgParser::Keyword_saveindContext *ctx) = 0;
  virtual void exitKeyword_saveind(RpgParser::Keyword_saveindContext *ctx) = 0;

  virtual void enterKeyword_sfile(RpgParser::Keyword_sfileContext *ctx) = 0;
  virtual void exitKeyword_sfile(RpgParser::Keyword_sfileContext *ctx) = 0;

  virtual void enterKeyword_sln(RpgParser::Keyword_slnContext *ctx) = 0;
  virtual void exitKeyword_sln(RpgParser::Keyword_slnContext *ctx) = 0;

  virtual void enterKeyword_usropn(RpgParser::Keyword_usropnContext *ctx) = 0;
  virtual void exitKeyword_usropn(RpgParser::Keyword_usropnContext *ctx) = 0;

  virtual void enterKeyword_disk(RpgParser::Keyword_diskContext *ctx) = 0;
  virtual void exitKeyword_disk(RpgParser::Keyword_diskContext *ctx) = 0;

  virtual void enterKeyword_workstn(RpgParser::Keyword_workstnContext *ctx) = 0;
  virtual void exitKeyword_workstn(RpgParser::Keyword_workstnContext *ctx) = 0;

  virtual void enterKeyword_printer(RpgParser::Keyword_printerContext *ctx) = 0;
  virtual void exitKeyword_printer(RpgParser::Keyword_printerContext *ctx) = 0;

  virtual void enterKeyword_special(RpgParser::Keyword_specialContext *ctx) = 0;
  virtual void exitKeyword_special(RpgParser::Keyword_specialContext *ctx) = 0;

  virtual void enterKeyword_keyed(RpgParser::Keyword_keyedContext *ctx) = 0;
  virtual void exitKeyword_keyed(RpgParser::Keyword_keyedContext *ctx) = 0;

  virtual void enterKeyword_usage(RpgParser::Keyword_usageContext *ctx) = 0;
  virtual void exitKeyword_usage(RpgParser::Keyword_usageContext *ctx) = 0;

  virtual void enterLike_lengthAdjustment(RpgParser::Like_lengthAdjustmentContext *ctx) = 0;
  virtual void exitLike_lengthAdjustment(RpgParser::Like_lengthAdjustmentContext *ctx) = 0;

  virtual void enterSign(RpgParser::SignContext *ctx) = 0;
  virtual void exitSign(RpgParser::SignContext *ctx) = 0;

  virtual void enterDcl_ds(RpgParser::Dcl_dsContext *ctx) = 0;
  virtual void exitDcl_ds(RpgParser::Dcl_dsContext *ctx) = 0;

  virtual void enterDcl_ds_field(RpgParser::Dcl_ds_fieldContext *ctx) = 0;
  virtual void exitDcl_ds_field(RpgParser::Dcl_ds_fieldContext *ctx) = 0;

  virtual void enterEnd_dcl_ds(RpgParser::End_dcl_dsContext *ctx) = 0;
  virtual void exitEnd_dcl_ds(RpgParser::End_dcl_dsContext *ctx) = 0;

  virtual void enterDcl_pr(RpgParser::Dcl_prContext *ctx) = 0;
  virtual void exitDcl_pr(RpgParser::Dcl_prContext *ctx) = 0;

  virtual void enterDcl_pr_field(RpgParser::Dcl_pr_fieldContext *ctx) = 0;
  virtual void exitDcl_pr_field(RpgParser::Dcl_pr_fieldContext *ctx) = 0;

  virtual void enterEnd_dcl_pr(RpgParser::End_dcl_prContext *ctx) = 0;
  virtual void exitEnd_dcl_pr(RpgParser::End_dcl_prContext *ctx) = 0;

  virtual void enterDcl_pi(RpgParser::Dcl_piContext *ctx) = 0;
  virtual void exitDcl_pi(RpgParser::Dcl_piContext *ctx) = 0;

  virtual void enterDcl_pi_field(RpgParser::Dcl_pi_fieldContext *ctx) = 0;
  virtual void exitDcl_pi_field(RpgParser::Dcl_pi_fieldContext *ctx) = 0;

  virtual void enterEnd_dcl_pi(RpgParser::End_dcl_piContext *ctx) = 0;
  virtual void exitEnd_dcl_pi(RpgParser::End_dcl_piContext *ctx) = 0;

  virtual void enterDcl_c(RpgParser::Dcl_cContext *ctx) = 0;
  virtual void exitDcl_c(RpgParser::Dcl_cContext *ctx) = 0;

  virtual void enterCtl_opt(RpgParser::Ctl_optContext *ctx) = 0;
  virtual void exitCtl_opt(RpgParser::Ctl_optContext *ctx) = 0;

  virtual void enterDatatypeName(RpgParser::DatatypeNameContext *ctx) = 0;
  virtual void exitDatatypeName(RpgParser::DatatypeNameContext *ctx) = 0;

  virtual void enterBlock(RpgParser::BlockContext *ctx) = 0;
  virtual void exitBlock(RpgParser::BlockContext *ctx) = 0;

  virtual void enterIfstatement(RpgParser::IfstatementContext *ctx) = 0;
  virtual void exitIfstatement(RpgParser::IfstatementContext *ctx) = 0;

  virtual void enterElseIfClause(RpgParser::ElseIfClauseContext *ctx) = 0;
  virtual void exitElseIfClause(RpgParser::ElseIfClauseContext *ctx) = 0;

  virtual void enterElseClause(RpgParser::ElseClauseContext *ctx) = 0;
  virtual void exitElseClause(RpgParser::ElseClauseContext *ctx) = 0;

  virtual void enterCasestatement(RpgParser::CasestatementContext *ctx) = 0;
  virtual void exitCasestatement(RpgParser::CasestatementContext *ctx) = 0;

  virtual void enterCasestatementend(RpgParser::CasestatementendContext *ctx) = 0;
  virtual void exitCasestatementend(RpgParser::CasestatementendContext *ctx) = 0;

  virtual void enterMonitorstatement(RpgParser::MonitorstatementContext *ctx) = 0;
  virtual void exitMonitorstatement(RpgParser::MonitorstatementContext *ctx) = 0;

  virtual void enterBeginmonitor(RpgParser::BeginmonitorContext *ctx) = 0;
  virtual void exitBeginmonitor(RpgParser::BeginmonitorContext *ctx) = 0;

  virtual void enterEndmonitor(RpgParser::EndmonitorContext *ctx) = 0;
  virtual void exitEndmonitor(RpgParser::EndmonitorContext *ctx) = 0;

  virtual void enterOnError(RpgParser::OnErrorContext *ctx) = 0;
  virtual void exitOnError(RpgParser::OnErrorContext *ctx) = 0;

  virtual void enterSelectstatement(RpgParser::SelectstatementContext *ctx) = 0;
  virtual void exitSelectstatement(RpgParser::SelectstatementContext *ctx) = 0;

  virtual void enterOther(RpgParser::OtherContext *ctx) = 0;
  virtual void exitOther(RpgParser::OtherContext *ctx) = 0;

  virtual void enterBeginselect(RpgParser::BeginselectContext *ctx) = 0;
  virtual void exitBeginselect(RpgParser::BeginselectContext *ctx) = 0;

  virtual void enterWhenstatement(RpgParser::WhenstatementContext *ctx) = 0;
  virtual void exitWhenstatement(RpgParser::WhenstatementContext *ctx) = 0;

  virtual void enterWhen(RpgParser::WhenContext *ctx) = 0;
  virtual void exitWhen(RpgParser::WhenContext *ctx) = 0;

  virtual void enterCsWHENxx(RpgParser::CsWHENxxContext *ctx) = 0;
  virtual void exitCsWHENxx(RpgParser::CsWHENxxContext *ctx) = 0;

  virtual void enterEndselect(RpgParser::EndselectContext *ctx) = 0;
  virtual void exitEndselect(RpgParser::EndselectContext *ctx) = 0;

  virtual void enterBeginif(RpgParser::BeginifContext *ctx) = 0;
  virtual void exitBeginif(RpgParser::BeginifContext *ctx) = 0;

  virtual void enterBegindou(RpgParser::BegindouContext *ctx) = 0;
  virtual void exitBegindou(RpgParser::BegindouContext *ctx) = 0;

  virtual void enterBegindow(RpgParser::BegindowContext *ctx) = 0;
  virtual void exitBegindow(RpgParser::BegindowContext *ctx) = 0;

  virtual void enterBegindo(RpgParser::BegindoContext *ctx) = 0;
  virtual void exitBegindo(RpgParser::BegindoContext *ctx) = 0;

  virtual void enterElseifstmt(RpgParser::ElseifstmtContext *ctx) = 0;
  virtual void exitElseifstmt(RpgParser::ElseifstmtContext *ctx) = 0;

  virtual void enterElsestmt(RpgParser::ElsestmtContext *ctx) = 0;
  virtual void exitElsestmt(RpgParser::ElsestmtContext *ctx) = 0;

  virtual void enterCsIFxx(RpgParser::CsIFxxContext *ctx) = 0;
  virtual void exitCsIFxx(RpgParser::CsIFxxContext *ctx) = 0;

  virtual void enterCsDOUxx(RpgParser::CsDOUxxContext *ctx) = 0;
  virtual void exitCsDOUxx(RpgParser::CsDOUxxContext *ctx) = 0;

  virtual void enterCsDOWxx(RpgParser::CsDOWxxContext *ctx) = 0;
  virtual void exitCsDOWxx(RpgParser::CsDOWxxContext *ctx) = 0;

  virtual void enterComplexCondxx(RpgParser::ComplexCondxxContext *ctx) = 0;
  virtual void exitComplexCondxx(RpgParser::ComplexCondxxContext *ctx) = 0;

  virtual void enterCsANDxx(RpgParser::CsANDxxContext *ctx) = 0;
  virtual void exitCsANDxx(RpgParser::CsANDxxContext *ctx) = 0;

  virtual void enterCsORxx(RpgParser::CsORxxContext *ctx) = 0;
  virtual void exitCsORxx(RpgParser::CsORxxContext *ctx) = 0;

  virtual void enterForstatement(RpgParser::ForstatementContext *ctx) = 0;
  virtual void exitForstatement(RpgParser::ForstatementContext *ctx) = 0;

  virtual void enterBeginfor(RpgParser::BeginforContext *ctx) = 0;
  virtual void exitBeginfor(RpgParser::BeginforContext *ctx) = 0;

  virtual void enterEndif(RpgParser::EndifContext *ctx) = 0;
  virtual void exitEndif(RpgParser::EndifContext *ctx) = 0;

  virtual void enterEnddo(RpgParser::EnddoContext *ctx) = 0;
  virtual void exitEnddo(RpgParser::EnddoContext *ctx) = 0;

  virtual void enterEndfor(RpgParser::EndforContext *ctx) = 0;
  virtual void exitEndfor(RpgParser::EndforContext *ctx) = 0;

  virtual void enterDspec_fixed(RpgParser::Dspec_fixedContext *ctx) = 0;
  virtual void exitDspec_fixed(RpgParser::Dspec_fixedContext *ctx) = 0;

  virtual void enterDs_name(RpgParser::Ds_nameContext *ctx) = 0;
  virtual void exitDs_name(RpgParser::Ds_nameContext *ctx) = 0;

  virtual void enterOspec_fixed(RpgParser::Ospec_fixedContext *ctx) = 0;
  virtual void exitOspec_fixed(RpgParser::Ospec_fixedContext *ctx) = 0;

  virtual void enterOs_fixed_pgmdesc1(RpgParser::Os_fixed_pgmdesc1Context *ctx) = 0;
  virtual void exitOs_fixed_pgmdesc1(RpgParser::Os_fixed_pgmdesc1Context *ctx) = 0;

  virtual void enterOutputConditioningOnOffIndicator(RpgParser::OutputConditioningOnOffIndicatorContext *ctx) = 0;
  virtual void exitOutputConditioningOnOffIndicator(RpgParser::OutputConditioningOnOffIndicatorContext *ctx) = 0;

  virtual void enterOutputConditioningIndicator(RpgParser::OutputConditioningIndicatorContext *ctx) = 0;
  virtual void exitOutputConditioningIndicator(RpgParser::OutputConditioningIndicatorContext *ctx) = 0;

  virtual void enterOs_fixed_pgmdesc_compound(RpgParser::Os_fixed_pgmdesc_compoundContext *ctx) = 0;
  virtual void exitOs_fixed_pgmdesc_compound(RpgParser::Os_fixed_pgmdesc_compoundContext *ctx) = 0;

  virtual void enterOs_fixed_pgmdesc2(RpgParser::Os_fixed_pgmdesc2Context *ctx) = 0;
  virtual void exitOs_fixed_pgmdesc2(RpgParser::Os_fixed_pgmdesc2Context *ctx) = 0;

  virtual void enterOs_fixed_pgmfield(RpgParser::Os_fixed_pgmfieldContext *ctx) = 0;
  virtual void exitOs_fixed_pgmfield(RpgParser::Os_fixed_pgmfieldContext *ctx) = 0;

  virtual void enterPs_name(RpgParser::Ps_nameContext *ctx) = 0;
  virtual void exitPs_name(RpgParser::Ps_nameContext *ctx) = 0;

  virtual void enterFspec(RpgParser::FspecContext *ctx) = 0;
  virtual void exitFspec(RpgParser::FspecContext *ctx) = 0;

  virtual void enterFilename(RpgParser::FilenameContext *ctx) = 0;
  virtual void exitFilename(RpgParser::FilenameContext *ctx) = 0;

  virtual void enterFs_parm(RpgParser::Fs_parmContext *ctx) = 0;
  virtual void exitFs_parm(RpgParser::Fs_parmContext *ctx) = 0;

  virtual void enterFs_string(RpgParser::Fs_stringContext *ctx) = 0;
  virtual void exitFs_string(RpgParser::Fs_stringContext *ctx) = 0;

  virtual void enterFs_keyword(RpgParser::Fs_keywordContext *ctx) = 0;
  virtual void exitFs_keyword(RpgParser::Fs_keywordContext *ctx) = 0;

  virtual void enterFspec_fixed(RpgParser::Fspec_fixedContext *ctx) = 0;
  virtual void exitFspec_fixed(RpgParser::Fspec_fixedContext *ctx) = 0;

  virtual void enterCspec_fixed(RpgParser::Cspec_fixedContext *ctx) = 0;
  virtual void exitCspec_fixed(RpgParser::Cspec_fixedContext *ctx) = 0;

  virtual void enterCspec_continuedIndicators(RpgParser::Cspec_continuedIndicatorsContext *ctx) = 0;
  virtual void exitCspec_continuedIndicators(RpgParser::Cspec_continuedIndicatorsContext *ctx) = 0;

  virtual void enterCspec_blank(RpgParser::Cspec_blankContext *ctx) = 0;
  virtual void exitCspec_blank(RpgParser::Cspec_blankContext *ctx) = 0;

  virtual void enterBlank_spec(RpgParser::Blank_specContext *ctx) = 0;
  virtual void exitBlank_spec(RpgParser::Blank_specContext *ctx) = 0;

  virtual void enterPiBegin(RpgParser::PiBeginContext *ctx) = 0;
  virtual void exitPiBegin(RpgParser::PiBeginContext *ctx) = 0;

  virtual void enterParm_fixed(RpgParser::Parm_fixedContext *ctx) = 0;
  virtual void exitParm_fixed(RpgParser::Parm_fixedContext *ctx) = 0;

  virtual void enterPr_parm_fixed(RpgParser::Pr_parm_fixedContext *ctx) = 0;
  virtual void exitPr_parm_fixed(RpgParser::Pr_parm_fixedContext *ctx) = 0;

  virtual void enterPi_parm_fixed(RpgParser::Pi_parm_fixedContext *ctx) = 0;
  virtual void exitPi_parm_fixed(RpgParser::Pi_parm_fixedContext *ctx) = 0;

  virtual void enterProcedure(RpgParser::ProcedureContext *ctx) = 0;
  virtual void exitProcedure(RpgParser::ProcedureContext *ctx) = 0;

  virtual void enterBeginProcedure(RpgParser::BeginProcedureContext *ctx) = 0;
  virtual void exitBeginProcedure(RpgParser::BeginProcedureContext *ctx) = 0;

  virtual void enterEndProcedure(RpgParser::EndProcedureContext *ctx) = 0;
  virtual void exitEndProcedure(RpgParser::EndProcedureContext *ctx) = 0;

  virtual void enterPsBegin(RpgParser::PsBeginContext *ctx) = 0;
  virtual void exitPsBegin(RpgParser::PsBeginContext *ctx) = 0;

  virtual void enterFreeBeginProcedure(RpgParser::FreeBeginProcedureContext *ctx) = 0;
  virtual void exitFreeBeginProcedure(RpgParser::FreeBeginProcedureContext *ctx) = 0;

  virtual void enterPsEnd(RpgParser::PsEndContext *ctx) = 0;
  virtual void exitPsEnd(RpgParser::PsEndContext *ctx) = 0;

  virtual void enterFreeEndProcedure(RpgParser::FreeEndProcedureContext *ctx) = 0;
  virtual void exitFreeEndProcedure(RpgParser::FreeEndProcedureContext *ctx) = 0;

  virtual void enterPrBegin(RpgParser::PrBeginContext *ctx) = 0;
  virtual void exitPrBegin(RpgParser::PrBeginContext *ctx) = 0;

  virtual void enterSubroutine(RpgParser::SubroutineContext *ctx) = 0;
  virtual void exitSubroutine(RpgParser::SubroutineContext *ctx) = 0;

  virtual void enterSubprocedurestatement(RpgParser::SubprocedurestatementContext *ctx) = 0;
  virtual void exitSubprocedurestatement(RpgParser::SubprocedurestatementContext *ctx) = 0;

  virtual void enterBegsr(RpgParser::BegsrContext *ctx) = 0;
  virtual void exitBegsr(RpgParser::BegsrContext *ctx) = 0;

  virtual void enterEndsr(RpgParser::EndsrContext *ctx) = 0;
  virtual void exitEndsr(RpgParser::EndsrContext *ctx) = 0;

  virtual void enterCsBEGSR(RpgParser::CsBEGSRContext *ctx) = 0;
  virtual void exitCsBEGSR(RpgParser::CsBEGSRContext *ctx) = 0;

  virtual void enterFreeBEGSR(RpgParser::FreeBEGSRContext *ctx) = 0;
  virtual void exitFreeBEGSR(RpgParser::FreeBEGSRContext *ctx) = 0;

  virtual void enterCsENDSR(RpgParser::CsENDSRContext *ctx) = 0;
  virtual void exitCsENDSR(RpgParser::CsENDSRContext *ctx) = 0;

  virtual void enterFreeENDSR(RpgParser::FreeENDSRContext *ctx) = 0;
  virtual void exitFreeENDSR(RpgParser::FreeENDSRContext *ctx) = 0;

  virtual void enterOnOffIndicatorsFlag(RpgParser::OnOffIndicatorsFlagContext *ctx) = 0;
  virtual void exitOnOffIndicatorsFlag(RpgParser::OnOffIndicatorsFlagContext *ctx) = 0;

  virtual void enterCs_controlLevel(RpgParser::Cs_controlLevelContext *ctx) = 0;
  virtual void exitCs_controlLevel(RpgParser::Cs_controlLevelContext *ctx) = 0;

  virtual void enterCs_indicators(RpgParser::Cs_indicatorsContext *ctx) = 0;
  virtual void exitCs_indicators(RpgParser::Cs_indicatorsContext *ctx) = 0;

  virtual void enterResultIndicator(RpgParser::ResultIndicatorContext *ctx) = 0;
  virtual void exitResultIndicator(RpgParser::ResultIndicatorContext *ctx) = 0;

  virtual void enterCspec_fixed_sql(RpgParser::Cspec_fixed_sqlContext *ctx) = 0;
  virtual void exitCspec_fixed_sql(RpgParser::Cspec_fixed_sqlContext *ctx) = 0;

  virtual void enterCspec_fixed_standard(RpgParser::Cspec_fixed_standardContext *ctx) = 0;
  virtual void exitCspec_fixed_standard(RpgParser::Cspec_fixed_standardContext *ctx) = 0;

  virtual void enterCspec_fixed_standard_parts(RpgParser::Cspec_fixed_standard_partsContext *ctx) = 0;
  virtual void exitCspec_fixed_standard_parts(RpgParser::Cspec_fixed_standard_partsContext *ctx) = 0;

  virtual void enterCsACQ(RpgParser::CsACQContext *ctx) = 0;
  virtual void exitCsACQ(RpgParser::CsACQContext *ctx) = 0;

  virtual void enterCsADD(RpgParser::CsADDContext *ctx) = 0;
  virtual void exitCsADD(RpgParser::CsADDContext *ctx) = 0;

  virtual void enterCsADDDUR(RpgParser::CsADDDURContext *ctx) = 0;
  virtual void exitCsADDDUR(RpgParser::CsADDDURContext *ctx) = 0;

  virtual void enterCsALLOC(RpgParser::CsALLOCContext *ctx) = 0;
  virtual void exitCsALLOC(RpgParser::CsALLOCContext *ctx) = 0;

  virtual void enterCsANDEQ(RpgParser::CsANDEQContext *ctx) = 0;
  virtual void exitCsANDEQ(RpgParser::CsANDEQContext *ctx) = 0;

  virtual void enterCsANDNE(RpgParser::CsANDNEContext *ctx) = 0;
  virtual void exitCsANDNE(RpgParser::CsANDNEContext *ctx) = 0;

  virtual void enterCsANDLE(RpgParser::CsANDLEContext *ctx) = 0;
  virtual void exitCsANDLE(RpgParser::CsANDLEContext *ctx) = 0;

  virtual void enterCsANDLT(RpgParser::CsANDLTContext *ctx) = 0;
  virtual void exitCsANDLT(RpgParser::CsANDLTContext *ctx) = 0;

  virtual void enterCsANDGE(RpgParser::CsANDGEContext *ctx) = 0;
  virtual void exitCsANDGE(RpgParser::CsANDGEContext *ctx) = 0;

  virtual void enterCsANDGT(RpgParser::CsANDGTContext *ctx) = 0;
  virtual void exitCsANDGT(RpgParser::CsANDGTContext *ctx) = 0;

  virtual void enterCsBITOFF(RpgParser::CsBITOFFContext *ctx) = 0;
  virtual void exitCsBITOFF(RpgParser::CsBITOFFContext *ctx) = 0;

  virtual void enterCsBITON(RpgParser::CsBITONContext *ctx) = 0;
  virtual void exitCsBITON(RpgParser::CsBITONContext *ctx) = 0;

  virtual void enterCsCABxx(RpgParser::CsCABxxContext *ctx) = 0;
  virtual void exitCsCABxx(RpgParser::CsCABxxContext *ctx) = 0;

  virtual void enterCsCABEQ(RpgParser::CsCABEQContext *ctx) = 0;
  virtual void exitCsCABEQ(RpgParser::CsCABEQContext *ctx) = 0;

  virtual void enterCsCABNE(RpgParser::CsCABNEContext *ctx) = 0;
  virtual void exitCsCABNE(RpgParser::CsCABNEContext *ctx) = 0;

  virtual void enterCsCABLE(RpgParser::CsCABLEContext *ctx) = 0;
  virtual void exitCsCABLE(RpgParser::CsCABLEContext *ctx) = 0;

  virtual void enterCsCABLT(RpgParser::CsCABLTContext *ctx) = 0;
  virtual void exitCsCABLT(RpgParser::CsCABLTContext *ctx) = 0;

  virtual void enterCsCABGE(RpgParser::CsCABGEContext *ctx) = 0;
  virtual void exitCsCABGE(RpgParser::CsCABGEContext *ctx) = 0;

  virtual void enterCsCABGT(RpgParser::CsCABGTContext *ctx) = 0;
  virtual void exitCsCABGT(RpgParser::CsCABGTContext *ctx) = 0;

  virtual void enterCsCALL(RpgParser::CsCALLContext *ctx) = 0;
  virtual void exitCsCALL(RpgParser::CsCALLContext *ctx) = 0;

  virtual void enterCsCALLB(RpgParser::CsCALLBContext *ctx) = 0;
  virtual void exitCsCALLB(RpgParser::CsCALLBContext *ctx) = 0;

  virtual void enterCsCALLP(RpgParser::CsCALLPContext *ctx) = 0;
  virtual void exitCsCALLP(RpgParser::CsCALLPContext *ctx) = 0;

  virtual void enterCsCASEQ(RpgParser::CsCASEQContext *ctx) = 0;
  virtual void exitCsCASEQ(RpgParser::CsCASEQContext *ctx) = 0;

  virtual void enterCsCASNE(RpgParser::CsCASNEContext *ctx) = 0;
  virtual void exitCsCASNE(RpgParser::CsCASNEContext *ctx) = 0;

  virtual void enterCsCASLE(RpgParser::CsCASLEContext *ctx) = 0;
  virtual void exitCsCASLE(RpgParser::CsCASLEContext *ctx) = 0;

  virtual void enterCsCASLT(RpgParser::CsCASLTContext *ctx) = 0;
  virtual void exitCsCASLT(RpgParser::CsCASLTContext *ctx) = 0;

  virtual void enterCsCASGE(RpgParser::CsCASGEContext *ctx) = 0;
  virtual void exitCsCASGE(RpgParser::CsCASGEContext *ctx) = 0;

  virtual void enterCsCASGT(RpgParser::CsCASGTContext *ctx) = 0;
  virtual void exitCsCASGT(RpgParser::CsCASGTContext *ctx) = 0;

  virtual void enterCsCAS(RpgParser::CsCASContext *ctx) = 0;
  virtual void exitCsCAS(RpgParser::CsCASContext *ctx) = 0;

  virtual void enterCsCAT(RpgParser::CsCATContext *ctx) = 0;
  virtual void exitCsCAT(RpgParser::CsCATContext *ctx) = 0;

  virtual void enterCsCHAIN(RpgParser::CsCHAINContext *ctx) = 0;
  virtual void exitCsCHAIN(RpgParser::CsCHAINContext *ctx) = 0;

  virtual void enterCsCHECK(RpgParser::CsCHECKContext *ctx) = 0;
  virtual void exitCsCHECK(RpgParser::CsCHECKContext *ctx) = 0;

  virtual void enterCsCHECKR(RpgParser::CsCHECKRContext *ctx) = 0;
  virtual void exitCsCHECKR(RpgParser::CsCHECKRContext *ctx) = 0;

  virtual void enterCsCLEAR(RpgParser::CsCLEARContext *ctx) = 0;
  virtual void exitCsCLEAR(RpgParser::CsCLEARContext *ctx) = 0;

  virtual void enterCsCLOSE(RpgParser::CsCLOSEContext *ctx) = 0;
  virtual void exitCsCLOSE(RpgParser::CsCLOSEContext *ctx) = 0;

  virtual void enterCsCOMMIT(RpgParser::CsCOMMITContext *ctx) = 0;
  virtual void exitCsCOMMIT(RpgParser::CsCOMMITContext *ctx) = 0;

  virtual void enterCsCOMP(RpgParser::CsCOMPContext *ctx) = 0;
  virtual void exitCsCOMP(RpgParser::CsCOMPContext *ctx) = 0;

  virtual void enterCsDEALLOC(RpgParser::CsDEALLOCContext *ctx) = 0;
  virtual void exitCsDEALLOC(RpgParser::CsDEALLOCContext *ctx) = 0;

  virtual void enterCsDEFINE(RpgParser::CsDEFINEContext *ctx) = 0;
  virtual void exitCsDEFINE(RpgParser::CsDEFINEContext *ctx) = 0;

  virtual void enterCsDELETE(RpgParser::CsDELETEContext *ctx) = 0;
  virtual void exitCsDELETE(RpgParser::CsDELETEContext *ctx) = 0;

  virtual void enterCsDIV(RpgParser::CsDIVContext *ctx) = 0;
  virtual void exitCsDIV(RpgParser::CsDIVContext *ctx) = 0;

  virtual void enterCsDO(RpgParser::CsDOContext *ctx) = 0;
  virtual void exitCsDO(RpgParser::CsDOContext *ctx) = 0;

  virtual void enterCsDOU(RpgParser::CsDOUContext *ctx) = 0;
  virtual void exitCsDOU(RpgParser::CsDOUContext *ctx) = 0;

  virtual void enterCsDOUEQ(RpgParser::CsDOUEQContext *ctx) = 0;
  virtual void exitCsDOUEQ(RpgParser::CsDOUEQContext *ctx) = 0;

  virtual void enterCsDOUNE(RpgParser::CsDOUNEContext *ctx) = 0;
  virtual void exitCsDOUNE(RpgParser::CsDOUNEContext *ctx) = 0;

  virtual void enterCsDOULE(RpgParser::CsDOULEContext *ctx) = 0;
  virtual void exitCsDOULE(RpgParser::CsDOULEContext *ctx) = 0;

  virtual void enterCsDOULT(RpgParser::CsDOULTContext *ctx) = 0;
  virtual void exitCsDOULT(RpgParser::CsDOULTContext *ctx) = 0;

  virtual void enterCsDOUGE(RpgParser::CsDOUGEContext *ctx) = 0;
  virtual void exitCsDOUGE(RpgParser::CsDOUGEContext *ctx) = 0;

  virtual void enterCsDOUGT(RpgParser::CsDOUGTContext *ctx) = 0;
  virtual void exitCsDOUGT(RpgParser::CsDOUGTContext *ctx) = 0;

  virtual void enterCsDOW(RpgParser::CsDOWContext *ctx) = 0;
  virtual void exitCsDOW(RpgParser::CsDOWContext *ctx) = 0;

  virtual void enterCsDOWEQ(RpgParser::CsDOWEQContext *ctx) = 0;
  virtual void exitCsDOWEQ(RpgParser::CsDOWEQContext *ctx) = 0;

  virtual void enterCsDOWNE(RpgParser::CsDOWNEContext *ctx) = 0;
  virtual void exitCsDOWNE(RpgParser::CsDOWNEContext *ctx) = 0;

  virtual void enterCsDOWLE(RpgParser::CsDOWLEContext *ctx) = 0;
  virtual void exitCsDOWLE(RpgParser::CsDOWLEContext *ctx) = 0;

  virtual void enterCsDOWLT(RpgParser::CsDOWLTContext *ctx) = 0;
  virtual void exitCsDOWLT(RpgParser::CsDOWLTContext *ctx) = 0;

  virtual void enterCsDOWGE(RpgParser::CsDOWGEContext *ctx) = 0;
  virtual void exitCsDOWGE(RpgParser::CsDOWGEContext *ctx) = 0;

  virtual void enterCsDOWGT(RpgParser::CsDOWGTContext *ctx) = 0;
  virtual void exitCsDOWGT(RpgParser::CsDOWGTContext *ctx) = 0;

  virtual void enterCsDSPLY(RpgParser::CsDSPLYContext *ctx) = 0;
  virtual void exitCsDSPLY(RpgParser::CsDSPLYContext *ctx) = 0;

  virtual void enterCsDUMP(RpgParser::CsDUMPContext *ctx) = 0;
  virtual void exitCsDUMP(RpgParser::CsDUMPContext *ctx) = 0;

  virtual void enterCsELSE(RpgParser::CsELSEContext *ctx) = 0;
  virtual void exitCsELSE(RpgParser::CsELSEContext *ctx) = 0;

  virtual void enterCsELSEIF(RpgParser::CsELSEIFContext *ctx) = 0;
  virtual void exitCsELSEIF(RpgParser::CsELSEIFContext *ctx) = 0;

  virtual void enterCsEND(RpgParser::CsENDContext *ctx) = 0;
  virtual void exitCsEND(RpgParser::CsENDContext *ctx) = 0;

  virtual void enterCsENDCS(RpgParser::CsENDCSContext *ctx) = 0;
  virtual void exitCsENDCS(RpgParser::CsENDCSContext *ctx) = 0;

  virtual void enterCsENDDO(RpgParser::CsENDDOContext *ctx) = 0;
  virtual void exitCsENDDO(RpgParser::CsENDDOContext *ctx) = 0;

  virtual void enterCsENDFOR(RpgParser::CsENDFORContext *ctx) = 0;
  virtual void exitCsENDFOR(RpgParser::CsENDFORContext *ctx) = 0;

  virtual void enterCsENDIF(RpgParser::CsENDIFContext *ctx) = 0;
  virtual void exitCsENDIF(RpgParser::CsENDIFContext *ctx) = 0;

  virtual void enterCsENDMON(RpgParser::CsENDMONContext *ctx) = 0;
  virtual void exitCsENDMON(RpgParser::CsENDMONContext *ctx) = 0;

  virtual void enterCsENDSL(RpgParser::CsENDSLContext *ctx) = 0;
  virtual void exitCsENDSL(RpgParser::CsENDSLContext *ctx) = 0;

  virtual void enterCsEVAL(RpgParser::CsEVALContext *ctx) = 0;
  virtual void exitCsEVAL(RpgParser::CsEVALContext *ctx) = 0;

  virtual void enterCsEVAL_CORR(RpgParser::CsEVAL_CORRContext *ctx) = 0;
  virtual void exitCsEVAL_CORR(RpgParser::CsEVAL_CORRContext *ctx) = 0;

  virtual void enterCsEVALR(RpgParser::CsEVALRContext *ctx) = 0;
  virtual void exitCsEVALR(RpgParser::CsEVALRContext *ctx) = 0;

  virtual void enterCsEXCEPT(RpgParser::CsEXCEPTContext *ctx) = 0;
  virtual void exitCsEXCEPT(RpgParser::CsEXCEPTContext *ctx) = 0;

  virtual void enterCsEXFMT(RpgParser::CsEXFMTContext *ctx) = 0;
  virtual void exitCsEXFMT(RpgParser::CsEXFMTContext *ctx) = 0;

  virtual void enterCsEXSR(RpgParser::CsEXSRContext *ctx) = 0;
  virtual void exitCsEXSR(RpgParser::CsEXSRContext *ctx) = 0;

  virtual void enterCsEXTRCT(RpgParser::CsEXTRCTContext *ctx) = 0;
  virtual void exitCsEXTRCT(RpgParser::CsEXTRCTContext *ctx) = 0;

  virtual void enterCsFEOD(RpgParser::CsFEODContext *ctx) = 0;
  virtual void exitCsFEOD(RpgParser::CsFEODContext *ctx) = 0;

  virtual void enterCsFOR(RpgParser::CsFORContext *ctx) = 0;
  virtual void exitCsFOR(RpgParser::CsFORContext *ctx) = 0;

  virtual void enterByExpression(RpgParser::ByExpressionContext *ctx) = 0;
  virtual void exitByExpression(RpgParser::ByExpressionContext *ctx) = 0;

  virtual void enterStopExpression(RpgParser::StopExpressionContext *ctx) = 0;
  virtual void exitStopExpression(RpgParser::StopExpressionContext *ctx) = 0;

  virtual void enterCsFORCE(RpgParser::CsFORCEContext *ctx) = 0;
  virtual void exitCsFORCE(RpgParser::CsFORCEContext *ctx) = 0;

  virtual void enterCsGOTO(RpgParser::CsGOTOContext *ctx) = 0;
  virtual void exitCsGOTO(RpgParser::CsGOTOContext *ctx) = 0;

  virtual void enterCsIF(RpgParser::CsIFContext *ctx) = 0;
  virtual void exitCsIF(RpgParser::CsIFContext *ctx) = 0;

  virtual void enterCsIFEQ(RpgParser::CsIFEQContext *ctx) = 0;
  virtual void exitCsIFEQ(RpgParser::CsIFEQContext *ctx) = 0;

  virtual void enterCsIFNE(RpgParser::CsIFNEContext *ctx) = 0;
  virtual void exitCsIFNE(RpgParser::CsIFNEContext *ctx) = 0;

  virtual void enterCsIFLE(RpgParser::CsIFLEContext *ctx) = 0;
  virtual void exitCsIFLE(RpgParser::CsIFLEContext *ctx) = 0;

  virtual void enterCsIFLT(RpgParser::CsIFLTContext *ctx) = 0;
  virtual void exitCsIFLT(RpgParser::CsIFLTContext *ctx) = 0;

  virtual void enterCsIFGE(RpgParser::CsIFGEContext *ctx) = 0;
  virtual void exitCsIFGE(RpgParser::CsIFGEContext *ctx) = 0;

  virtual void enterCsIFGT(RpgParser::CsIFGTContext *ctx) = 0;
  virtual void exitCsIFGT(RpgParser::CsIFGTContext *ctx) = 0;

  virtual void enterCsIN(RpgParser::CsINContext *ctx) = 0;
  virtual void exitCsIN(RpgParser::CsINContext *ctx) = 0;

  virtual void enterCsITER(RpgParser::CsITERContext *ctx) = 0;
  virtual void exitCsITER(RpgParser::CsITERContext *ctx) = 0;

  virtual void enterCsKLIST(RpgParser::CsKLISTContext *ctx) = 0;
  virtual void exitCsKLIST(RpgParser::CsKLISTContext *ctx) = 0;

  virtual void enterCsKFLD(RpgParser::CsKFLDContext *ctx) = 0;
  virtual void exitCsKFLD(RpgParser::CsKFLDContext *ctx) = 0;

  virtual void enterCsLEAVE(RpgParser::CsLEAVEContext *ctx) = 0;
  virtual void exitCsLEAVE(RpgParser::CsLEAVEContext *ctx) = 0;

  virtual void enterCsLEAVESR(RpgParser::CsLEAVESRContext *ctx) = 0;
  virtual void exitCsLEAVESR(RpgParser::CsLEAVESRContext *ctx) = 0;

  virtual void enterCsLOOKUP(RpgParser::CsLOOKUPContext *ctx) = 0;
  virtual void exitCsLOOKUP(RpgParser::CsLOOKUPContext *ctx) = 0;

  virtual void enterCsMHHZO(RpgParser::CsMHHZOContext *ctx) = 0;
  virtual void exitCsMHHZO(RpgParser::CsMHHZOContext *ctx) = 0;

  virtual void enterCsMHLZO(RpgParser::CsMHLZOContext *ctx) = 0;
  virtual void exitCsMHLZO(RpgParser::CsMHLZOContext *ctx) = 0;

  virtual void enterCsMLHZO(RpgParser::CsMLHZOContext *ctx) = 0;
  virtual void exitCsMLHZO(RpgParser::CsMLHZOContext *ctx) = 0;

  virtual void enterCsMLLZO(RpgParser::CsMLLZOContext *ctx) = 0;
  virtual void exitCsMLLZO(RpgParser::CsMLLZOContext *ctx) = 0;

  virtual void enterCsMONITOR(RpgParser::CsMONITORContext *ctx) = 0;
  virtual void exitCsMONITOR(RpgParser::CsMONITORContext *ctx) = 0;

  virtual void enterCsMOVE(RpgParser::CsMOVEContext *ctx) = 0;
  virtual void exitCsMOVE(RpgParser::CsMOVEContext *ctx) = 0;

  virtual void enterCsMOVEA(RpgParser::CsMOVEAContext *ctx) = 0;
  virtual void exitCsMOVEA(RpgParser::CsMOVEAContext *ctx) = 0;

  virtual void enterCsMOVEL(RpgParser::CsMOVELContext *ctx) = 0;
  virtual void exitCsMOVEL(RpgParser::CsMOVELContext *ctx) = 0;

  virtual void enterCsMULT(RpgParser::CsMULTContext *ctx) = 0;
  virtual void exitCsMULT(RpgParser::CsMULTContext *ctx) = 0;

  virtual void enterCsMVR(RpgParser::CsMVRContext *ctx) = 0;
  virtual void exitCsMVR(RpgParser::CsMVRContext *ctx) = 0;

  virtual void enterCsNEXT(RpgParser::CsNEXTContext *ctx) = 0;
  virtual void exitCsNEXT(RpgParser::CsNEXTContext *ctx) = 0;

  virtual void enterCsOCCUR(RpgParser::CsOCCURContext *ctx) = 0;
  virtual void exitCsOCCUR(RpgParser::CsOCCURContext *ctx) = 0;

  virtual void enterCsON_ERROR(RpgParser::CsON_ERRORContext *ctx) = 0;
  virtual void exitCsON_ERROR(RpgParser::CsON_ERRORContext *ctx) = 0;

  virtual void enterOnErrorCode(RpgParser::OnErrorCodeContext *ctx) = 0;
  virtual void exitOnErrorCode(RpgParser::OnErrorCodeContext *ctx) = 0;

  virtual void enterCsOPEN(RpgParser::CsOPENContext *ctx) = 0;
  virtual void exitCsOPEN(RpgParser::CsOPENContext *ctx) = 0;

  virtual void enterCsOREQ(RpgParser::CsOREQContext *ctx) = 0;
  virtual void exitCsOREQ(RpgParser::CsOREQContext *ctx) = 0;

  virtual void enterCsORNE(RpgParser::CsORNEContext *ctx) = 0;
  virtual void exitCsORNE(RpgParser::CsORNEContext *ctx) = 0;

  virtual void enterCsORLE(RpgParser::CsORLEContext *ctx) = 0;
  virtual void exitCsORLE(RpgParser::CsORLEContext *ctx) = 0;

  virtual void enterCsORLT(RpgParser::CsORLTContext *ctx) = 0;
  virtual void exitCsORLT(RpgParser::CsORLTContext *ctx) = 0;

  virtual void enterCsORGE(RpgParser::CsORGEContext *ctx) = 0;
  virtual void exitCsORGE(RpgParser::CsORGEContext *ctx) = 0;

  virtual void enterCsORGT(RpgParser::CsORGTContext *ctx) = 0;
  virtual void exitCsORGT(RpgParser::CsORGTContext *ctx) = 0;

  virtual void enterCsOTHER(RpgParser::CsOTHERContext *ctx) = 0;
  virtual void exitCsOTHER(RpgParser::CsOTHERContext *ctx) = 0;

  virtual void enterCsOUT(RpgParser::CsOUTContext *ctx) = 0;
  virtual void exitCsOUT(RpgParser::CsOUTContext *ctx) = 0;

  virtual void enterCsPARM(RpgParser::CsPARMContext *ctx) = 0;
  virtual void exitCsPARM(RpgParser::CsPARMContext *ctx) = 0;

  virtual void enterCsPLIST(RpgParser::CsPLISTContext *ctx) = 0;
  virtual void exitCsPLIST(RpgParser::CsPLISTContext *ctx) = 0;

  virtual void enterCsPOST(RpgParser::CsPOSTContext *ctx) = 0;
  virtual void exitCsPOST(RpgParser::CsPOSTContext *ctx) = 0;

  virtual void enterCsREAD(RpgParser::CsREADContext *ctx) = 0;
  virtual void exitCsREAD(RpgParser::CsREADContext *ctx) = 0;

  virtual void enterCsREADC(RpgParser::CsREADCContext *ctx) = 0;
  virtual void exitCsREADC(RpgParser::CsREADCContext *ctx) = 0;

  virtual void enterCsREADE(RpgParser::CsREADEContext *ctx) = 0;
  virtual void exitCsREADE(RpgParser::CsREADEContext *ctx) = 0;

  virtual void enterCsREADP(RpgParser::CsREADPContext *ctx) = 0;
  virtual void exitCsREADP(RpgParser::CsREADPContext *ctx) = 0;

  virtual void enterCsREADPE(RpgParser::CsREADPEContext *ctx) = 0;
  virtual void exitCsREADPE(RpgParser::CsREADPEContext *ctx) = 0;

  virtual void enterCsREALLOC(RpgParser::CsREALLOCContext *ctx) = 0;
  virtual void exitCsREALLOC(RpgParser::CsREALLOCContext *ctx) = 0;

  virtual void enterCsREL(RpgParser::CsRELContext *ctx) = 0;
  virtual void exitCsREL(RpgParser::CsRELContext *ctx) = 0;

  virtual void enterCsRESET(RpgParser::CsRESETContext *ctx) = 0;
  virtual void exitCsRESET(RpgParser::CsRESETContext *ctx) = 0;

  virtual void enterCsRETURN(RpgParser::CsRETURNContext *ctx) = 0;
  virtual void exitCsRETURN(RpgParser::CsRETURNContext *ctx) = 0;

  virtual void enterCsROLBK(RpgParser::CsROLBKContext *ctx) = 0;
  virtual void exitCsROLBK(RpgParser::CsROLBKContext *ctx) = 0;

  virtual void enterCsSCAN(RpgParser::CsSCANContext *ctx) = 0;
  virtual void exitCsSCAN(RpgParser::CsSCANContext *ctx) = 0;

  virtual void enterCsSELECT(RpgParser::CsSELECTContext *ctx) = 0;
  virtual void exitCsSELECT(RpgParser::CsSELECTContext *ctx) = 0;

  virtual void enterCsSETGT(RpgParser::CsSETGTContext *ctx) = 0;
  virtual void exitCsSETGT(RpgParser::CsSETGTContext *ctx) = 0;

  virtual void enterCsSETLL(RpgParser::CsSETLLContext *ctx) = 0;
  virtual void exitCsSETLL(RpgParser::CsSETLLContext *ctx) = 0;

  virtual void enterCsSETOFF(RpgParser::CsSETOFFContext *ctx) = 0;
  virtual void exitCsSETOFF(RpgParser::CsSETOFFContext *ctx) = 0;

  virtual void enterCsSETON(RpgParser::CsSETONContext *ctx) = 0;
  virtual void exitCsSETON(RpgParser::CsSETONContext *ctx) = 0;

  virtual void enterCsSHTDN(RpgParser::CsSHTDNContext *ctx) = 0;
  virtual void exitCsSHTDN(RpgParser::CsSHTDNContext *ctx) = 0;

  virtual void enterCsSORTA(RpgParser::CsSORTAContext *ctx) = 0;
  virtual void exitCsSORTA(RpgParser::CsSORTAContext *ctx) = 0;

  virtual void enterCsSQRT(RpgParser::CsSQRTContext *ctx) = 0;
  virtual void exitCsSQRT(RpgParser::CsSQRTContext *ctx) = 0;

  virtual void enterCsSUB(RpgParser::CsSUBContext *ctx) = 0;
  virtual void exitCsSUB(RpgParser::CsSUBContext *ctx) = 0;

  virtual void enterCsSUBDUR(RpgParser::CsSUBDURContext *ctx) = 0;
  virtual void exitCsSUBDUR(RpgParser::CsSUBDURContext *ctx) = 0;

  virtual void enterCsSUBST(RpgParser::CsSUBSTContext *ctx) = 0;
  virtual void exitCsSUBST(RpgParser::CsSUBSTContext *ctx) = 0;

  virtual void enterCsTAG(RpgParser::CsTAGContext *ctx) = 0;
  virtual void exitCsTAG(RpgParser::CsTAGContext *ctx) = 0;

  virtual void enterCsTEST(RpgParser::CsTESTContext *ctx) = 0;
  virtual void exitCsTEST(RpgParser::CsTESTContext *ctx) = 0;

  virtual void enterCsTESTB(RpgParser::CsTESTBContext *ctx) = 0;
  virtual void exitCsTESTB(RpgParser::CsTESTBContext *ctx) = 0;

  virtual void enterCsTESTN(RpgParser::CsTESTNContext *ctx) = 0;
  virtual void exitCsTESTN(RpgParser::CsTESTNContext *ctx) = 0;

  virtual void enterCsTESTZ(RpgParser::CsTESTZContext *ctx) = 0;
  virtual void exitCsTESTZ(RpgParser::CsTESTZContext *ctx) = 0;

  virtual void enterCsTIME(RpgParser::CsTIMEContext *ctx) = 0;
  virtual void exitCsTIME(RpgParser::CsTIMEContext *ctx) = 0;

  virtual void enterCsUNLOCK(RpgParser::CsUNLOCKContext *ctx) = 0;
  virtual void exitCsUNLOCK(RpgParser::CsUNLOCKContext *ctx) = 0;

  virtual void enterCsUPDATE(RpgParser::CsUPDATEContext *ctx) = 0;
  virtual void exitCsUPDATE(RpgParser::CsUPDATEContext *ctx) = 0;

  virtual void enterCsWHEN(RpgParser::CsWHENContext *ctx) = 0;
  virtual void exitCsWHEN(RpgParser::CsWHENContext *ctx) = 0;

  virtual void enterCsWHENEQ(RpgParser::CsWHENEQContext *ctx) = 0;
  virtual void exitCsWHENEQ(RpgParser::CsWHENEQContext *ctx) = 0;

  virtual void enterCsWHENNE(RpgParser::CsWHENNEContext *ctx) = 0;
  virtual void exitCsWHENNE(RpgParser::CsWHENNEContext *ctx) = 0;

  virtual void enterCsWHENLE(RpgParser::CsWHENLEContext *ctx) = 0;
  virtual void exitCsWHENLE(RpgParser::CsWHENLEContext *ctx) = 0;

  virtual void enterCsWHENLT(RpgParser::CsWHENLTContext *ctx) = 0;
  virtual void exitCsWHENLT(RpgParser::CsWHENLTContext *ctx) = 0;

  virtual void enterCsWHENGE(RpgParser::CsWHENGEContext *ctx) = 0;
  virtual void exitCsWHENGE(RpgParser::CsWHENGEContext *ctx) = 0;

  virtual void enterCsWHENGT(RpgParser::CsWHENGTContext *ctx) = 0;
  virtual void exitCsWHENGT(RpgParser::CsWHENGTContext *ctx) = 0;

  virtual void enterCsWRITE(RpgParser::CsWRITEContext *ctx) = 0;
  virtual void exitCsWRITE(RpgParser::CsWRITEContext *ctx) = 0;

  virtual void enterCsXFOOT(RpgParser::CsXFOOTContext *ctx) = 0;
  virtual void exitCsXFOOT(RpgParser::CsXFOOTContext *ctx) = 0;

  virtual void enterCsXLATE(RpgParser::CsXLATEContext *ctx) = 0;
  virtual void exitCsXLATE(RpgParser::CsXLATEContext *ctx) = 0;

  virtual void enterCsXML_INTO(RpgParser::CsXML_INTOContext *ctx) = 0;
  virtual void exitCsXML_INTO(RpgParser::CsXML_INTOContext *ctx) = 0;

  virtual void enterCsXML_SAX(RpgParser::CsXML_SAXContext *ctx) = 0;
  virtual void exitCsXML_SAX(RpgParser::CsXML_SAXContext *ctx) = 0;

  virtual void enterCsZ_ADD(RpgParser::CsZ_ADDContext *ctx) = 0;
  virtual void exitCsZ_ADD(RpgParser::CsZ_ADDContext *ctx) = 0;

  virtual void enterCsZ_SUB(RpgParser::CsZ_SUBContext *ctx) = 0;
  virtual void exitCsZ_SUB(RpgParser::CsZ_SUBContext *ctx) = 0;

  virtual void enterCs_operationExtender(RpgParser::Cs_operationExtenderContext *ctx) = 0;
  virtual void exitCs_operationExtender(RpgParser::Cs_operationExtenderContext *ctx) = 0;

  virtual void enterFactor(RpgParser::FactorContext *ctx) = 0;
  virtual void exitFactor(RpgParser::FactorContext *ctx) = 0;

  virtual void enterFactorContent(RpgParser::FactorContentContext *ctx) = 0;
  virtual void exitFactorContent(RpgParser::FactorContentContext *ctx) = 0;

  virtual void enterResultType(RpgParser::ResultTypeContext *ctx) = 0;
  virtual void exitResultType(RpgParser::ResultTypeContext *ctx) = 0;

  virtual void enterCs_fixed_comments(RpgParser::Cs_fixed_commentsContext *ctx) = 0;
  virtual void exitCs_fixed_comments(RpgParser::Cs_fixed_commentsContext *ctx) = 0;

  virtual void enterCspec_fixed_x2(RpgParser::Cspec_fixed_x2Context *ctx) = 0;
  virtual void exitCspec_fixed_x2(RpgParser::Cspec_fixed_x2Context *ctx) = 0;

  virtual void enterCsOperationAndExtendedFactor2(RpgParser::CsOperationAndExtendedFactor2Context *ctx) = 0;
  virtual void exitCsOperationAndExtendedFactor2(RpgParser::CsOperationAndExtendedFactor2Context *ctx) = 0;

  virtual void enterIspec_fixed(RpgParser::Ispec_fixedContext *ctx) = 0;
  virtual void exitIspec_fixed(RpgParser::Ispec_fixedContext *ctx) = 0;

  virtual void enterFieldRecordRelation(RpgParser::FieldRecordRelationContext *ctx) = 0;
  virtual void exitFieldRecordRelation(RpgParser::FieldRecordRelationContext *ctx) = 0;

  virtual void enterFieldIndicator(RpgParser::FieldIndicatorContext *ctx) = 0;
  virtual void exitFieldIndicator(RpgParser::FieldIndicatorContext *ctx) = 0;

  virtual void enterIs_external_rec(RpgParser::Is_external_recContext *ctx) = 0;
  virtual void exitIs_external_rec(RpgParser::Is_external_recContext *ctx) = 0;

  virtual void enterIs_rec(RpgParser::Is_recContext *ctx) = 0;
  virtual void exitIs_rec(RpgParser::Is_recContext *ctx) = 0;

  virtual void enterRecordIdIndicator(RpgParser::RecordIdIndicatorContext *ctx) = 0;
  virtual void exitRecordIdIndicator(RpgParser::RecordIdIndicatorContext *ctx) = 0;

  virtual void enterIs_external_field(RpgParser::Is_external_fieldContext *ctx) = 0;
  virtual void exitIs_external_field(RpgParser::Is_external_fieldContext *ctx) = 0;

  virtual void enterControlLevelIndicator(RpgParser::ControlLevelIndicatorContext *ctx) = 0;
  virtual void exitControlLevelIndicator(RpgParser::ControlLevelIndicatorContext *ctx) = 0;

  virtual void enterMatchingFieldsIndicator(RpgParser::MatchingFieldsIndicatorContext *ctx) = 0;
  virtual void exitMatchingFieldsIndicator(RpgParser::MatchingFieldsIndicatorContext *ctx) = 0;

  virtual void enterHspec_fixed(RpgParser::Hspec_fixedContext *ctx) = 0;
  virtual void exitHspec_fixed(RpgParser::Hspec_fixedContext *ctx) = 0;

  virtual void enterSetDecedit(RpgParser::SetDeceditContext *ctx) = 0;
  virtual void exitSetDecedit(RpgParser::SetDeceditContext *ctx) = 0;

  virtual void enterHspecExpressions(RpgParser::HspecExpressionsContext *ctx) = 0;
  virtual void exitHspecExpressions(RpgParser::HspecExpressionsContext *ctx) = 0;

  virtual void enterHs_decedit_set(RpgParser::Hs_decedit_setContext *ctx) = 0;
  virtual void exitHs_decedit_set(RpgParser::Hs_decedit_setContext *ctx) = 0;

  virtual void enterHs_expression(RpgParser::Hs_expressionContext *ctx) = 0;
  virtual void exitHs_expression(RpgParser::Hs_expressionContext *ctx) = 0;

  virtual void enterHs_parm(RpgParser::Hs_parmContext *ctx) = 0;
  virtual void exitHs_parm(RpgParser::Hs_parmContext *ctx) = 0;

  virtual void enterHs_string(RpgParser::Hs_stringContext *ctx) = 0;
  virtual void exitHs_string(RpgParser::Hs_stringContext *ctx) = 0;

  virtual void enterBlank_line(RpgParser::Blank_lineContext *ctx) = 0;
  virtual void exitBlank_line(RpgParser::Blank_lineContext *ctx) = 0;

  virtual void enterDirective(RpgParser::DirectiveContext *ctx) = 0;
  virtual void exitDirective(RpgParser::DirectiveContext *ctx) = 0;

  virtual void enterSpace_directive(RpgParser::Space_directiveContext *ctx) = 0;
  virtual void exitSpace_directive(RpgParser::Space_directiveContext *ctx) = 0;

  virtual void enterDir_copy(RpgParser::Dir_copyContext *ctx) = 0;
  virtual void exitDir_copy(RpgParser::Dir_copyContext *ctx) = 0;

  virtual void enterDir_include(RpgParser::Dir_includeContext *ctx) = 0;
  virtual void exitDir_include(RpgParser::Dir_includeContext *ctx) = 0;

  virtual void enterDir_if(RpgParser::Dir_ifContext *ctx) = 0;
  virtual void exitDir_if(RpgParser::Dir_ifContext *ctx) = 0;

  virtual void enterDir_elseif(RpgParser::Dir_elseifContext *ctx) = 0;
  virtual void exitDir_elseif(RpgParser::Dir_elseifContext *ctx) = 0;

  virtual void enterDir_else(RpgParser::Dir_elseContext *ctx) = 0;
  virtual void exitDir_else(RpgParser::Dir_elseContext *ctx) = 0;

  virtual void enterDir_endif(RpgParser::Dir_endifContext *ctx) = 0;
  virtual void exitDir_endif(RpgParser::Dir_endifContext *ctx) = 0;

  virtual void enterDir_define(RpgParser::Dir_defineContext *ctx) = 0;
  virtual void exitDir_define(RpgParser::Dir_defineContext *ctx) = 0;

  virtual void enterDir_undefine(RpgParser::Dir_undefineContext *ctx) = 0;
  virtual void exitDir_undefine(RpgParser::Dir_undefineContext *ctx) = 0;

  virtual void enterDir_eof(RpgParser::Dir_eofContext *ctx) = 0;
  virtual void exitDir_eof(RpgParser::Dir_eofContext *ctx) = 0;

  virtual void enterBeginfree_directive(RpgParser::Beginfree_directiveContext *ctx) = 0;
  virtual void exitBeginfree_directive(RpgParser::Beginfree_directiveContext *ctx) = 0;

  virtual void enterEndfree_directive(RpgParser::Endfree_directiveContext *ctx) = 0;
  virtual void exitEndfree_directive(RpgParser::Endfree_directiveContext *ctx) = 0;

  virtual void enterCopyText(RpgParser::CopyTextContext *ctx) = 0;
  virtual void exitCopyText(RpgParser::CopyTextContext *ctx) = 0;

  virtual void enterTrailing_ws(RpgParser::Trailing_wsContext *ctx) = 0;
  virtual void exitTrailing_ws(RpgParser::Trailing_wsContext *ctx) = 0;

  virtual void enterTitle_directive(RpgParser::Title_directiveContext *ctx) = 0;
  virtual void exitTitle_directive(RpgParser::Title_directiveContext *ctx) = 0;

  virtual void enterTitle_text(RpgParser::Title_textContext *ctx) = 0;
  virtual void exitTitle_text(RpgParser::Title_textContext *ctx) = 0;

  virtual void enterOp(RpgParser::OpContext *ctx) = 0;
  virtual void exitOp(RpgParser::OpContext *ctx) = 0;

  virtual void enterOp_acq(RpgParser::Op_acqContext *ctx) = 0;
  virtual void exitOp_acq(RpgParser::Op_acqContext *ctx) = 0;

  virtual void enterOp_callp(RpgParser::Op_callpContext *ctx) = 0;
  virtual void exitOp_callp(RpgParser::Op_callpContext *ctx) = 0;

  virtual void enterOp_chain(RpgParser::Op_chainContext *ctx) = 0;
  virtual void exitOp_chain(RpgParser::Op_chainContext *ctx) = 0;

  virtual void enterOp_clear(RpgParser::Op_clearContext *ctx) = 0;
  virtual void exitOp_clear(RpgParser::Op_clearContext *ctx) = 0;

  virtual void enterOp_close(RpgParser::Op_closeContext *ctx) = 0;
  virtual void exitOp_close(RpgParser::Op_closeContext *ctx) = 0;

  virtual void enterOp_commit(RpgParser::Op_commitContext *ctx) = 0;
  virtual void exitOp_commit(RpgParser::Op_commitContext *ctx) = 0;

  virtual void enterOp_dealloc(RpgParser::Op_deallocContext *ctx) = 0;
  virtual void exitOp_dealloc(RpgParser::Op_deallocContext *ctx) = 0;

  virtual void enterOp_delete(RpgParser::Op_deleteContext *ctx) = 0;
  virtual void exitOp_delete(RpgParser::Op_deleteContext *ctx) = 0;

  virtual void enterOp_dou(RpgParser::Op_douContext *ctx) = 0;
  virtual void exitOp_dou(RpgParser::Op_douContext *ctx) = 0;

  virtual void enterOp_dow(RpgParser::Op_dowContext *ctx) = 0;
  virtual void exitOp_dow(RpgParser::Op_dowContext *ctx) = 0;

  virtual void enterOp_dsply(RpgParser::Op_dsplyContext *ctx) = 0;
  virtual void exitOp_dsply(RpgParser::Op_dsplyContext *ctx) = 0;

  virtual void enterOp_dump(RpgParser::Op_dumpContext *ctx) = 0;
  virtual void exitOp_dump(RpgParser::Op_dumpContext *ctx) = 0;

  virtual void enterOp_else(RpgParser::Op_elseContext *ctx) = 0;
  virtual void exitOp_else(RpgParser::Op_elseContext *ctx) = 0;

  virtual void enterOp_elseif(RpgParser::Op_elseifContext *ctx) = 0;
  virtual void exitOp_elseif(RpgParser::Op_elseifContext *ctx) = 0;

  virtual void enterOp_enddo(RpgParser::Op_enddoContext *ctx) = 0;
  virtual void exitOp_enddo(RpgParser::Op_enddoContext *ctx) = 0;

  virtual void enterOp_endfor(RpgParser::Op_endforContext *ctx) = 0;
  virtual void exitOp_endfor(RpgParser::Op_endforContext *ctx) = 0;

  virtual void enterOp_endif(RpgParser::Op_endifContext *ctx) = 0;
  virtual void exitOp_endif(RpgParser::Op_endifContext *ctx) = 0;

  virtual void enterOp_endmon(RpgParser::Op_endmonContext *ctx) = 0;
  virtual void exitOp_endmon(RpgParser::Op_endmonContext *ctx) = 0;

  virtual void enterOp_endsl(RpgParser::Op_endslContext *ctx) = 0;
  virtual void exitOp_endsl(RpgParser::Op_endslContext *ctx) = 0;

  virtual void enterOp_eval(RpgParser::Op_evalContext *ctx) = 0;
  virtual void exitOp_eval(RpgParser::Op_evalContext *ctx) = 0;

  virtual void enterOp_evalr(RpgParser::Op_evalrContext *ctx) = 0;
  virtual void exitOp_evalr(RpgParser::Op_evalrContext *ctx) = 0;

  virtual void enterOp_eval_corr(RpgParser::Op_eval_corrContext *ctx) = 0;
  virtual void exitOp_eval_corr(RpgParser::Op_eval_corrContext *ctx) = 0;

  virtual void enterOp_except(RpgParser::Op_exceptContext *ctx) = 0;
  virtual void exitOp_except(RpgParser::Op_exceptContext *ctx) = 0;

  virtual void enterOp_exfmt(RpgParser::Op_exfmtContext *ctx) = 0;
  virtual void exitOp_exfmt(RpgParser::Op_exfmtContext *ctx) = 0;

  virtual void enterOp_exsr(RpgParser::Op_exsrContext *ctx) = 0;
  virtual void exitOp_exsr(RpgParser::Op_exsrContext *ctx) = 0;

  virtual void enterOp_feod(RpgParser::Op_feodContext *ctx) = 0;
  virtual void exitOp_feod(RpgParser::Op_feodContext *ctx) = 0;

  virtual void enterOp_for(RpgParser::Op_forContext *ctx) = 0;
  virtual void exitOp_for(RpgParser::Op_forContext *ctx) = 0;

  virtual void enterOp_force(RpgParser::Op_forceContext *ctx) = 0;
  virtual void exitOp_force(RpgParser::Op_forceContext *ctx) = 0;

  virtual void enterOp_if(RpgParser::Op_ifContext *ctx) = 0;
  virtual void exitOp_if(RpgParser::Op_ifContext *ctx) = 0;

  virtual void enterOp_in(RpgParser::Op_inContext *ctx) = 0;
  virtual void exitOp_in(RpgParser::Op_inContext *ctx) = 0;

  virtual void enterOp_iter(RpgParser::Op_iterContext *ctx) = 0;
  virtual void exitOp_iter(RpgParser::Op_iterContext *ctx) = 0;

  virtual void enterOp_leave(RpgParser::Op_leaveContext *ctx) = 0;
  virtual void exitOp_leave(RpgParser::Op_leaveContext *ctx) = 0;

  virtual void enterOp_leavesr(RpgParser::Op_leavesrContext *ctx) = 0;
  virtual void exitOp_leavesr(RpgParser::Op_leavesrContext *ctx) = 0;

  virtual void enterOp_monitor(RpgParser::Op_monitorContext *ctx) = 0;
  virtual void exitOp_monitor(RpgParser::Op_monitorContext *ctx) = 0;

  virtual void enterOp_next(RpgParser::Op_nextContext *ctx) = 0;
  virtual void exitOp_next(RpgParser::Op_nextContext *ctx) = 0;

  virtual void enterOp_on_error(RpgParser::Op_on_errorContext *ctx) = 0;
  virtual void exitOp_on_error(RpgParser::Op_on_errorContext *ctx) = 0;

  virtual void enterOp_open(RpgParser::Op_openContext *ctx) = 0;
  virtual void exitOp_open(RpgParser::Op_openContext *ctx) = 0;

  virtual void enterOp_other(RpgParser::Op_otherContext *ctx) = 0;
  virtual void exitOp_other(RpgParser::Op_otherContext *ctx) = 0;

  virtual void enterOp_out(RpgParser::Op_outContext *ctx) = 0;
  virtual void exitOp_out(RpgParser::Op_outContext *ctx) = 0;

  virtual void enterOp_post(RpgParser::Op_postContext *ctx) = 0;
  virtual void exitOp_post(RpgParser::Op_postContext *ctx) = 0;

  virtual void enterOp_read(RpgParser::Op_readContext *ctx) = 0;
  virtual void exitOp_read(RpgParser::Op_readContext *ctx) = 0;

  virtual void enterOp_readc(RpgParser::Op_readcContext *ctx) = 0;
  virtual void exitOp_readc(RpgParser::Op_readcContext *ctx) = 0;

  virtual void enterOp_reade(RpgParser::Op_readeContext *ctx) = 0;
  virtual void exitOp_reade(RpgParser::Op_readeContext *ctx) = 0;

  virtual void enterOp_readp(RpgParser::Op_readpContext *ctx) = 0;
  virtual void exitOp_readp(RpgParser::Op_readpContext *ctx) = 0;

  virtual void enterOp_readpe(RpgParser::Op_readpeContext *ctx) = 0;
  virtual void exitOp_readpe(RpgParser::Op_readpeContext *ctx) = 0;

  virtual void enterOp_rel(RpgParser::Op_relContext *ctx) = 0;
  virtual void exitOp_rel(RpgParser::Op_relContext *ctx) = 0;

  virtual void enterOp_reset2(RpgParser::Op_reset2Context *ctx) = 0;
  virtual void exitOp_reset2(RpgParser::Op_reset2Context *ctx) = 0;

  virtual void enterOp_reset(RpgParser::Op_resetContext *ctx) = 0;
  virtual void exitOp_reset(RpgParser::Op_resetContext *ctx) = 0;

  virtual void enterOp_return(RpgParser::Op_returnContext *ctx) = 0;
  virtual void exitOp_return(RpgParser::Op_returnContext *ctx) = 0;

  virtual void enterOp_rolbk(RpgParser::Op_rolbkContext *ctx) = 0;
  virtual void exitOp_rolbk(RpgParser::Op_rolbkContext *ctx) = 0;

  virtual void enterOp_select(RpgParser::Op_selectContext *ctx) = 0;
  virtual void exitOp_select(RpgParser::Op_selectContext *ctx) = 0;

  virtual void enterOp_setgt(RpgParser::Op_setgtContext *ctx) = 0;
  virtual void exitOp_setgt(RpgParser::Op_setgtContext *ctx) = 0;

  virtual void enterOp_setll(RpgParser::Op_setllContext *ctx) = 0;
  virtual void exitOp_setll(RpgParser::Op_setllContext *ctx) = 0;

  virtual void enterOp_sorta(RpgParser::Op_sortaContext *ctx) = 0;
  virtual void exitOp_sorta(RpgParser::Op_sortaContext *ctx) = 0;

  virtual void enterOp_test(RpgParser::Op_testContext *ctx) = 0;
  virtual void exitOp_test(RpgParser::Op_testContext *ctx) = 0;

  virtual void enterOp_unlock(RpgParser::Op_unlockContext *ctx) = 0;
  virtual void exitOp_unlock(RpgParser::Op_unlockContext *ctx) = 0;

  virtual void enterOp_update(RpgParser::Op_updateContext *ctx) = 0;
  virtual void exitOp_update(RpgParser::Op_updateContext *ctx) = 0;

  virtual void enterOp_when(RpgParser::Op_whenContext *ctx) = 0;
  virtual void exitOp_when(RpgParser::Op_whenContext *ctx) = 0;

  virtual void enterOp_write(RpgParser::Op_writeContext *ctx) = 0;
  virtual void exitOp_write(RpgParser::Op_writeContext *ctx) = 0;

  virtual void enterOp_xml_into(RpgParser::Op_xml_intoContext *ctx) = 0;
  virtual void exitOp_xml_into(RpgParser::Op_xml_intoContext *ctx) = 0;

  virtual void enterOp_xml_sax(RpgParser::Op_xml_saxContext *ctx) = 0;
  virtual void exitOp_xml_sax(RpgParser::Op_xml_saxContext *ctx) = 0;

  virtual void enterSearch_arg(RpgParser::Search_argContext *ctx) = 0;
  virtual void exitSearch_arg(RpgParser::Search_argContext *ctx) = 0;

  virtual void enterOp_code(RpgParser::Op_codeContext *ctx) = 0;
  virtual void exitOp_code(RpgParser::Op_codeContext *ctx) = 0;

  virtual void enterBif(RpgParser::BifContext *ctx) = 0;
  virtual void exitBif(RpgParser::BifContext *ctx) = 0;

  virtual void enterOptargs(RpgParser::OptargsContext *ctx) = 0;
  virtual void exitOptargs(RpgParser::OptargsContext *ctx) = 0;

  virtual void enterBif_charformat(RpgParser::Bif_charformatContext *ctx) = 0;
  virtual void exitBif_charformat(RpgParser::Bif_charformatContext *ctx) = 0;

  virtual void enterBif_dateformat(RpgParser::Bif_dateformatContext *ctx) = 0;
  virtual void exitBif_dateformat(RpgParser::Bif_dateformatContext *ctx) = 0;

  virtual void enterBif_timeformat(RpgParser::Bif_timeformatContext *ctx) = 0;
  virtual void exitBif_timeformat(RpgParser::Bif_timeformatContext *ctx) = 0;

  virtual void enterBif_editccurrency(RpgParser::Bif_editccurrencyContext *ctx) = 0;
  virtual void exitBif_editccurrency(RpgParser::Bif_editccurrencyContext *ctx) = 0;

  virtual void enterBif_lookupargs(RpgParser::Bif_lookupargsContext *ctx) = 0;
  virtual void exitBif_lookupargs(RpgParser::Bif_lookupargsContext *ctx) = 0;

  virtual void enterDurationCode(RpgParser::DurationCodeContext *ctx) = 0;
  virtual void exitDurationCode(RpgParser::DurationCodeContext *ctx) = 0;

  virtual void enterBif_timestampargs(RpgParser::Bif_timestampargsContext *ctx) = 0;
  virtual void exitBif_timestampargs(RpgParser::Bif_timestampargsContext *ctx) = 0;

  virtual void enterBif_tlookupargs(RpgParser::Bif_tlookupargsContext *ctx) = 0;
  virtual void exitBif_tlookupargs(RpgParser::Bif_tlookupargsContext *ctx) = 0;

  virtual void enterBif_abs(RpgParser::Bif_absContext *ctx) = 0;
  virtual void exitBif_abs(RpgParser::Bif_absContext *ctx) = 0;

  virtual void enterBif_addr(RpgParser::Bif_addrContext *ctx) = 0;
  virtual void exitBif_addr(RpgParser::Bif_addrContext *ctx) = 0;

  virtual void enterBif_alloc(RpgParser::Bif_allocContext *ctx) = 0;
  virtual void exitBif_alloc(RpgParser::Bif_allocContext *ctx) = 0;

  virtual void enterBif_bitand(RpgParser::Bif_bitandContext *ctx) = 0;
  virtual void exitBif_bitand(RpgParser::Bif_bitandContext *ctx) = 0;

  virtual void enterBif_bitnot(RpgParser::Bif_bitnotContext *ctx) = 0;
  virtual void exitBif_bitnot(RpgParser::Bif_bitnotContext *ctx) = 0;

  virtual void enterBif_bitor(RpgParser::Bif_bitorContext *ctx) = 0;
  virtual void exitBif_bitor(RpgParser::Bif_bitorContext *ctx) = 0;

  virtual void enterBif_bitxor(RpgParser::Bif_bitxorContext *ctx) = 0;
  virtual void exitBif_bitxor(RpgParser::Bif_bitxorContext *ctx) = 0;

  virtual void enterBif_char(RpgParser::Bif_charContext *ctx) = 0;
  virtual void exitBif_char(RpgParser::Bif_charContext *ctx) = 0;

  virtual void enterBif_check(RpgParser::Bif_checkContext *ctx) = 0;
  virtual void exitBif_check(RpgParser::Bif_checkContext *ctx) = 0;

  virtual void enterBif_checkr(RpgParser::Bif_checkrContext *ctx) = 0;
  virtual void exitBif_checkr(RpgParser::Bif_checkrContext *ctx) = 0;

  virtual void enterBif_date(RpgParser::Bif_dateContext *ctx) = 0;
  virtual void exitBif_date(RpgParser::Bif_dateContext *ctx) = 0;

  virtual void enterBif_days(RpgParser::Bif_daysContext *ctx) = 0;
  virtual void exitBif_days(RpgParser::Bif_daysContext *ctx) = 0;

  virtual void enterBif_dec(RpgParser::Bif_decContext *ctx) = 0;
  virtual void exitBif_dec(RpgParser::Bif_decContext *ctx) = 0;

  virtual void enterBif_dech(RpgParser::Bif_dechContext *ctx) = 0;
  virtual void exitBif_dech(RpgParser::Bif_dechContext *ctx) = 0;

  virtual void enterBif_decpos(RpgParser::Bif_decposContext *ctx) = 0;
  virtual void exitBif_decpos(RpgParser::Bif_decposContext *ctx) = 0;

  virtual void enterBif_diff(RpgParser::Bif_diffContext *ctx) = 0;
  virtual void exitBif_diff(RpgParser::Bif_diffContext *ctx) = 0;

  virtual void enterBif_div(RpgParser::Bif_divContext *ctx) = 0;
  virtual void exitBif_div(RpgParser::Bif_divContext *ctx) = 0;

  virtual void enterBif_editc(RpgParser::Bif_editcContext *ctx) = 0;
  virtual void exitBif_editc(RpgParser::Bif_editcContext *ctx) = 0;

  virtual void enterBif_editflt(RpgParser::Bif_editfltContext *ctx) = 0;
  virtual void exitBif_editflt(RpgParser::Bif_editfltContext *ctx) = 0;

  virtual void enterBif_editw(RpgParser::Bif_editwContext *ctx) = 0;
  virtual void exitBif_editw(RpgParser::Bif_editwContext *ctx) = 0;

  virtual void enterBif_elem(RpgParser::Bif_elemContext *ctx) = 0;
  virtual void exitBif_elem(RpgParser::Bif_elemContext *ctx) = 0;

  virtual void enterBif_eof(RpgParser::Bif_eofContext *ctx) = 0;
  virtual void exitBif_eof(RpgParser::Bif_eofContext *ctx) = 0;

  virtual void enterBif_equal(RpgParser::Bif_equalContext *ctx) = 0;
  virtual void exitBif_equal(RpgParser::Bif_equalContext *ctx) = 0;

  virtual void enterBif_error(RpgParser::Bif_errorContext *ctx) = 0;
  virtual void exitBif_error(RpgParser::Bif_errorContext *ctx) = 0;

  virtual void enterBif_fields(RpgParser::Bif_fieldsContext *ctx) = 0;
  virtual void exitBif_fields(RpgParser::Bif_fieldsContext *ctx) = 0;

  virtual void enterBif_float(RpgParser::Bif_floatContext *ctx) = 0;
  virtual void exitBif_float(RpgParser::Bif_floatContext *ctx) = 0;

  virtual void enterBif_found(RpgParser::Bif_foundContext *ctx) = 0;
  virtual void exitBif_found(RpgParser::Bif_foundContext *ctx) = 0;

  virtual void enterBif_graph(RpgParser::Bif_graphContext *ctx) = 0;
  virtual void exitBif_graph(RpgParser::Bif_graphContext *ctx) = 0;

  virtual void enterBif_handler(RpgParser::Bif_handlerContext *ctx) = 0;
  virtual void exitBif_handler(RpgParser::Bif_handlerContext *ctx) = 0;

  virtual void enterBif_hours(RpgParser::Bif_hoursContext *ctx) = 0;
  virtual void exitBif_hours(RpgParser::Bif_hoursContext *ctx) = 0;

  virtual void enterBif_int(RpgParser::Bif_intContext *ctx) = 0;
  virtual void exitBif_int(RpgParser::Bif_intContext *ctx) = 0;

  virtual void enterBif_inth(RpgParser::Bif_inthContext *ctx) = 0;
  virtual void exitBif_inth(RpgParser::Bif_inthContext *ctx) = 0;

  virtual void enterBif_kds(RpgParser::Bif_kdsContext *ctx) = 0;
  virtual void exitBif_kds(RpgParser::Bif_kdsContext *ctx) = 0;

  virtual void enterBif_len(RpgParser::Bif_lenContext *ctx) = 0;
  virtual void exitBif_len(RpgParser::Bif_lenContext *ctx) = 0;

  virtual void enterBif_lookup(RpgParser::Bif_lookupContext *ctx) = 0;
  virtual void exitBif_lookup(RpgParser::Bif_lookupContext *ctx) = 0;

  virtual void enterBif_lookuplt(RpgParser::Bif_lookupltContext *ctx) = 0;
  virtual void exitBif_lookuplt(RpgParser::Bif_lookupltContext *ctx) = 0;

  virtual void enterBif_lookuple(RpgParser::Bif_lookupleContext *ctx) = 0;
  virtual void exitBif_lookuple(RpgParser::Bif_lookupleContext *ctx) = 0;

  virtual void enterBif_lookupgt(RpgParser::Bif_lookupgtContext *ctx) = 0;
  virtual void exitBif_lookupgt(RpgParser::Bif_lookupgtContext *ctx) = 0;

  virtual void enterBif_lookupge(RpgParser::Bif_lookupgeContext *ctx) = 0;
  virtual void exitBif_lookupge(RpgParser::Bif_lookupgeContext *ctx) = 0;

  virtual void enterBif_minutes(RpgParser::Bif_minutesContext *ctx) = 0;
  virtual void exitBif_minutes(RpgParser::Bif_minutesContext *ctx) = 0;

  virtual void enterBif_months(RpgParser::Bif_monthsContext *ctx) = 0;
  virtual void exitBif_months(RpgParser::Bif_monthsContext *ctx) = 0;

  virtual void enterBif_mseconds(RpgParser::Bif_msecondsContext *ctx) = 0;
  virtual void exitBif_mseconds(RpgParser::Bif_msecondsContext *ctx) = 0;

  virtual void enterBif_nullind(RpgParser::Bif_nullindContext *ctx) = 0;
  virtual void exitBif_nullind(RpgParser::Bif_nullindContext *ctx) = 0;

  virtual void enterBif_occur(RpgParser::Bif_occurContext *ctx) = 0;
  virtual void exitBif_occur(RpgParser::Bif_occurContext *ctx) = 0;

  virtual void enterBif_open(RpgParser::Bif_openContext *ctx) = 0;
  virtual void exitBif_open(RpgParser::Bif_openContext *ctx) = 0;

  virtual void enterBif_paddr(RpgParser::Bif_paddrContext *ctx) = 0;
  virtual void exitBif_paddr(RpgParser::Bif_paddrContext *ctx) = 0;

  virtual void enterBif_parms(RpgParser::Bif_parmsContext *ctx) = 0;
  virtual void exitBif_parms(RpgParser::Bif_parmsContext *ctx) = 0;

  virtual void enterBif_parmnum(RpgParser::Bif_parmnumContext *ctx) = 0;
  virtual void exitBif_parmnum(RpgParser::Bif_parmnumContext *ctx) = 0;

  virtual void enterBif_realloc(RpgParser::Bif_reallocContext *ctx) = 0;
  virtual void exitBif_realloc(RpgParser::Bif_reallocContext *ctx) = 0;

  virtual void enterBif_rem(RpgParser::Bif_remContext *ctx) = 0;
  virtual void exitBif_rem(RpgParser::Bif_remContext *ctx) = 0;

  virtual void enterBif_replace(RpgParser::Bif_replaceContext *ctx) = 0;
  virtual void exitBif_replace(RpgParser::Bif_replaceContext *ctx) = 0;

  virtual void enterBif_scan(RpgParser::Bif_scanContext *ctx) = 0;
  virtual void exitBif_scan(RpgParser::Bif_scanContext *ctx) = 0;

  virtual void enterBif_scanrpl(RpgParser::Bif_scanrplContext *ctx) = 0;
  virtual void exitBif_scanrpl(RpgParser::Bif_scanrplContext *ctx) = 0;

  virtual void enterBif_seconds(RpgParser::Bif_secondsContext *ctx) = 0;
  virtual void exitBif_seconds(RpgParser::Bif_secondsContext *ctx) = 0;

  virtual void enterBif_shtdn(RpgParser::Bif_shtdnContext *ctx) = 0;
  virtual void exitBif_shtdn(RpgParser::Bif_shtdnContext *ctx) = 0;

  virtual void enterBif_size(RpgParser::Bif_sizeContext *ctx) = 0;
  virtual void exitBif_size(RpgParser::Bif_sizeContext *ctx) = 0;

  virtual void enterBif_sqrt(RpgParser::Bif_sqrtContext *ctx) = 0;
  virtual void exitBif_sqrt(RpgParser::Bif_sqrtContext *ctx) = 0;

  virtual void enterBif_status(RpgParser::Bif_statusContext *ctx) = 0;
  virtual void exitBif_status(RpgParser::Bif_statusContext *ctx) = 0;

  virtual void enterBif_str(RpgParser::Bif_strContext *ctx) = 0;
  virtual void exitBif_str(RpgParser::Bif_strContext *ctx) = 0;

  virtual void enterBif_subarr(RpgParser::Bif_subarrContext *ctx) = 0;
  virtual void exitBif_subarr(RpgParser::Bif_subarrContext *ctx) = 0;

  virtual void enterBif_subdt(RpgParser::Bif_subdtContext *ctx) = 0;
  virtual void exitBif_subdt(RpgParser::Bif_subdtContext *ctx) = 0;

  virtual void enterBif_subst(RpgParser::Bif_substContext *ctx) = 0;
  virtual void exitBif_subst(RpgParser::Bif_substContext *ctx) = 0;

  virtual void enterBif_this(RpgParser::Bif_thisContext *ctx) = 0;
  virtual void exitBif_this(RpgParser::Bif_thisContext *ctx) = 0;

  virtual void enterBif_time(RpgParser::Bif_timeContext *ctx) = 0;
  virtual void exitBif_time(RpgParser::Bif_timeContext *ctx) = 0;

  virtual void enterBif_timestamp(RpgParser::Bif_timestampContext *ctx) = 0;
  virtual void exitBif_timestamp(RpgParser::Bif_timestampContext *ctx) = 0;

  virtual void enterBif_tlookup(RpgParser::Bif_tlookupContext *ctx) = 0;
  virtual void exitBif_tlookup(RpgParser::Bif_tlookupContext *ctx) = 0;

  virtual void enterBif_tlookuplt(RpgParser::Bif_tlookupltContext *ctx) = 0;
  virtual void exitBif_tlookuplt(RpgParser::Bif_tlookupltContext *ctx) = 0;

  virtual void enterBif_tlookuple(RpgParser::Bif_tlookupleContext *ctx) = 0;
  virtual void exitBif_tlookuple(RpgParser::Bif_tlookupleContext *ctx) = 0;

  virtual void enterBif_tlookupgt(RpgParser::Bif_tlookupgtContext *ctx) = 0;
  virtual void exitBif_tlookupgt(RpgParser::Bif_tlookupgtContext *ctx) = 0;

  virtual void enterBif_tlookupge(RpgParser::Bif_tlookupgeContext *ctx) = 0;
  virtual void exitBif_tlookupge(RpgParser::Bif_tlookupgeContext *ctx) = 0;

  virtual void enterBif_trim(RpgParser::Bif_trimContext *ctx) = 0;
  virtual void exitBif_trim(RpgParser::Bif_trimContext *ctx) = 0;

  virtual void enterBif_triml(RpgParser::Bif_trimlContext *ctx) = 0;
  virtual void exitBif_triml(RpgParser::Bif_trimlContext *ctx) = 0;

  virtual void enterBif_trimr(RpgParser::Bif_trimrContext *ctx) = 0;
  virtual void exitBif_trimr(RpgParser::Bif_trimrContext *ctx) = 0;

  virtual void enterBif_ucs2(RpgParser::Bif_ucs2Context *ctx) = 0;
  virtual void exitBif_ucs2(RpgParser::Bif_ucs2Context *ctx) = 0;

  virtual void enterBif_uns(RpgParser::Bif_unsContext *ctx) = 0;
  virtual void exitBif_uns(RpgParser::Bif_unsContext *ctx) = 0;

  virtual void enterBif_unsh(RpgParser::Bif_unshContext *ctx) = 0;
  virtual void exitBif_unsh(RpgParser::Bif_unshContext *ctx) = 0;

  virtual void enterBif_xfoot(RpgParser::Bif_xfootContext *ctx) = 0;
  virtual void exitBif_xfoot(RpgParser::Bif_xfootContext *ctx) = 0;

  virtual void enterBif_xlate(RpgParser::Bif_xlateContext *ctx) = 0;
  virtual void exitBif_xlate(RpgParser::Bif_xlateContext *ctx) = 0;

  virtual void enterBif_xml(RpgParser::Bif_xmlContext *ctx) = 0;
  virtual void exitBif_xml(RpgParser::Bif_xmlContext *ctx) = 0;

  virtual void enterBif_years(RpgParser::Bif_yearsContext *ctx) = 0;
  virtual void exitBif_years(RpgParser::Bif_yearsContext *ctx) = 0;

  virtual void enterBif_code(RpgParser::Bif_codeContext *ctx) = 0;
  virtual void exitBif_code(RpgParser::Bif_codeContext *ctx) = 0;

  virtual void enterFree(RpgParser::FreeContext *ctx) = 0;
  virtual void exitFree(RpgParser::FreeContext *ctx) = 0;

  virtual void enterC_free(RpgParser::C_freeContext *ctx) = 0;
  virtual void exitC_free(RpgParser::C_freeContext *ctx) = 0;

  virtual void enterControl(RpgParser::ControlContext *ctx) = 0;
  virtual void exitControl(RpgParser::ControlContext *ctx) = 0;

  virtual void enterExec_sql(RpgParser::Exec_sqlContext *ctx) = 0;
  virtual void exitExec_sql(RpgParser::Exec_sqlContext *ctx) = 0;

  virtual void enterBaseExpression(RpgParser::BaseExpressionContext *ctx) = 0;
  virtual void exitBaseExpression(RpgParser::BaseExpressionContext *ctx) = 0;

  virtual void enterIndicator(RpgParser::IndicatorContext *ctx) = 0;
  virtual void exitIndicator(RpgParser::IndicatorContext *ctx) = 0;

  virtual void enterAssignmentExpression(RpgParser::AssignmentExpressionContext *ctx) = 0;
  virtual void exitAssignmentExpression(RpgParser::AssignmentExpressionContext *ctx) = 0;

  virtual void enterAssignOperatorExpression(RpgParser::AssignOperatorExpressionContext *ctx) = 0;
  virtual void exitAssignOperatorExpression(RpgParser::AssignOperatorExpressionContext *ctx) = 0;

  virtual void enterEvalExpression(RpgParser::EvalExpressionContext *ctx) = 0;
  virtual void exitEvalExpression(RpgParser::EvalExpressionContext *ctx) = 0;

  virtual void enterSimpleExpression(RpgParser::SimpleExpressionContext *ctx) = 0;
  virtual void exitSimpleExpression(RpgParser::SimpleExpressionContext *ctx) = 0;

  virtual void enterUnaryExpression(RpgParser::UnaryExpressionContext *ctx) = 0;
  virtual void exitUnaryExpression(RpgParser::UnaryExpressionContext *ctx) = 0;

  virtual void enterExpression(RpgParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(RpgParser::ExpressionContext *ctx) = 0;

  virtual void enterPexpression(RpgParser::PexpressionContext *ctx) = 0;
  virtual void exitPexpression(RpgParser::PexpressionContext *ctx) = 0;

  virtual void enterIndicator_expr(RpgParser::Indicator_exprContext *ctx) = 0;
  virtual void exitIndicator_expr(RpgParser::Indicator_exprContext *ctx) = 0;

  virtual void enterFunction(RpgParser::FunctionContext *ctx) = 0;
  virtual void exitFunction(RpgParser::FunctionContext *ctx) = 0;

  virtual void enterComparisonOperator(RpgParser::ComparisonOperatorContext *ctx) = 0;
  virtual void exitComparisonOperator(RpgParser::ComparisonOperatorContext *ctx) = 0;

  virtual void enterAssignmentOperator(RpgParser::AssignmentOperatorContext *ctx) = 0;
  virtual void exitAssignmentOperator(RpgParser::AssignmentOperatorContext *ctx) = 0;

  virtual void enterAssignmentOperatorIncludingEqual(RpgParser::AssignmentOperatorIncludingEqualContext *ctx) = 0;
  virtual void exitAssignmentOperatorIncludingEqual(RpgParser::AssignmentOperatorIncludingEqualContext *ctx) = 0;

  virtual void enterArgs(RpgParser::ArgsContext *ctx) = 0;
  virtual void exitArgs(RpgParser::ArgsContext *ctx) = 0;

  virtual void enterLiteral(RpgParser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(RpgParser::LiteralContext *ctx) = 0;

  virtual void enterIdentifier(RpgParser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(RpgParser::IdentifierContext *ctx) = 0;

  virtual void enterAll(RpgParser::AllContext *ctx) = 0;
  virtual void exitAll(RpgParser::AllContext *ctx) = 0;

  virtual void enterFunctionName(RpgParser::FunctionNameContext *ctx) = 0;
  virtual void exitFunctionName(RpgParser::FunctionNameContext *ctx) = 0;

  virtual void enterMultipart_identifier(RpgParser::Multipart_identifierContext *ctx) = 0;
  virtual void exitMultipart_identifier(RpgParser::Multipart_identifierContext *ctx) = 0;

  virtual void enterMultipart_identifier_element(RpgParser::Multipart_identifier_elementContext *ctx) = 0;
  virtual void exitMultipart_identifier_element(RpgParser::Multipart_identifier_elementContext *ctx) = 0;

  virtual void enterIndexed_identifier(RpgParser::Indexed_identifierContext *ctx) = 0;
  virtual void exitIndexed_identifier(RpgParser::Indexed_identifierContext *ctx) = 0;

  virtual void enterOpCode(RpgParser::OpCodeContext *ctx) = 0;
  virtual void exitOpCode(RpgParser::OpCodeContext *ctx) = 0;

  virtual void enterNumber(RpgParser::NumberContext *ctx) = 0;
  virtual void exitNumber(RpgParser::NumberContext *ctx) = 0;

  virtual void enterFree_identifier(RpgParser::Free_identifierContext *ctx) = 0;
  virtual void exitFree_identifier(RpgParser::Free_identifierContext *ctx) = 0;

  virtual void enterContinuedIdentifier(RpgParser::ContinuedIdentifierContext *ctx) = 0;
  virtual void exitContinuedIdentifier(RpgParser::ContinuedIdentifierContext *ctx) = 0;

  virtual void enterIdOrKeyword(RpgParser::IdOrKeywordContext *ctx) = 0;
  virtual void exitIdOrKeyword(RpgParser::IdOrKeywordContext *ctx) = 0;

  virtual void enterArgument(RpgParser::ArgumentContext *ctx) = 0;
  virtual void exitArgument(RpgParser::ArgumentContext *ctx) = 0;

  virtual void enterSymbolicConstants(RpgParser::SymbolicConstantsContext *ctx) = 0;
  virtual void exitSymbolicConstants(RpgParser::SymbolicConstantsContext *ctx) = 0;

  virtual void enterGlobalIndicatorTarget(RpgParser::GlobalIndicatorTargetContext *ctx) = 0;
  virtual void exitGlobalIndicatorTarget(RpgParser::GlobalIndicatorTargetContext *ctx) = 0;

  virtual void enterQualifiedTarget(RpgParser::QualifiedTargetContext *ctx) = 0;
  virtual void exitQualifiedTarget(RpgParser::QualifiedTargetContext *ctx) = 0;

  virtual void enterIndicatorTarget(RpgParser::IndicatorTargetContext *ctx) = 0;
  virtual void exitIndicatorTarget(RpgParser::IndicatorTargetContext *ctx) = 0;

  virtual void enterSimpleTarget(RpgParser::SimpleTargetContext *ctx) = 0;
  virtual void exitSimpleTarget(RpgParser::SimpleTargetContext *ctx) = 0;

  virtual void enterIndexedTarget(RpgParser::IndexedTargetContext *ctx) = 0;
  virtual void exitIndexedTarget(RpgParser::IndexedTargetContext *ctx) = 0;

  virtual void enterSubstTarget(RpgParser::SubstTargetContext *ctx) = 0;
  virtual void exitSubstTarget(RpgParser::SubstTargetContext *ctx) = 0;


};

}  // namespace antlrcpprpg
