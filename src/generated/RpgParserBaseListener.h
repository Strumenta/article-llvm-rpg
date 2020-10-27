
// Generated from src/antlr/RpgParser.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "RpgParserListener.h"


namespace antlrcpprpg {

/**
 * This class provides an empty implementation of RpgParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  RpgParserBaseListener : public RpgParserListener {
public:

  virtual void enterR(RpgParser::RContext * /*ctx*/) override { }
  virtual void exitR(RpgParser::RContext * /*ctx*/) override { }

  virtual void enterStatement(RpgParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(RpgParser::StatementContext * /*ctx*/) override { }

  virtual void enterEndSourceBlock(RpgParser::EndSourceBlockContext * /*ctx*/) override { }
  virtual void exitEndSourceBlock(RpgParser::EndSourceBlockContext * /*ctx*/) override { }

  virtual void enterEndSource(RpgParser::EndSourceContext * /*ctx*/) override { }
  virtual void exitEndSource(RpgParser::EndSourceContext * /*ctx*/) override { }

  virtual void enterEndSourceHead(RpgParser::EndSourceHeadContext * /*ctx*/) override { }
  virtual void exitEndSourceHead(RpgParser::EndSourceHeadContext * /*ctx*/) override { }

  virtual void enterEndSourceLine(RpgParser::EndSourceLineContext * /*ctx*/) override { }
  virtual void exitEndSourceLine(RpgParser::EndSourceLineContext * /*ctx*/) override { }

  virtual void enterEndSourceLineText(RpgParser::EndSourceLineTextContext * /*ctx*/) override { }
  virtual void exitEndSourceLineText(RpgParser::EndSourceLineTextContext * /*ctx*/) override { }

  virtual void enterStar_comments(RpgParser::Star_commentsContext * /*ctx*/) override { }
  virtual void exitStar_comments(RpgParser::Star_commentsContext * /*ctx*/) override { }

  virtual void enterFree_comments(RpgParser::Free_commentsContext * /*ctx*/) override { }
  virtual void exitFree_comments(RpgParser::Free_commentsContext * /*ctx*/) override { }

  virtual void enterFree_linecomments(RpgParser::Free_linecommentsContext * /*ctx*/) override { }
  virtual void exitFree_linecomments(RpgParser::Free_linecommentsContext * /*ctx*/) override { }

  virtual void enterComments(RpgParser::CommentsContext * /*ctx*/) override { }
  virtual void exitComments(RpgParser::CommentsContext * /*ctx*/) override { }

  virtual void enterDspec(RpgParser::DspecContext * /*ctx*/) override { }
  virtual void exitDspec(RpgParser::DspecContext * /*ctx*/) override { }

  virtual void enterDspecConstant(RpgParser::DspecConstantContext * /*ctx*/) override { }
  virtual void exitDspecConstant(RpgParser::DspecConstantContext * /*ctx*/) override { }

  virtual void enterDatatype(RpgParser::DatatypeContext * /*ctx*/) override { }
  virtual void exitDatatype(RpgParser::DatatypeContext * /*ctx*/) override { }

  virtual void enterKeyword(RpgParser::KeywordContext * /*ctx*/) override { }
  virtual void exitKeyword(RpgParser::KeywordContext * /*ctx*/) override { }

  virtual void enterDspec_bif(RpgParser::Dspec_bifContext * /*ctx*/) override { }
  virtual void exitDspec_bif(RpgParser::Dspec_bifContext * /*ctx*/) override { }

  virtual void enterKeyword_alias(RpgParser::Keyword_aliasContext * /*ctx*/) override { }
  virtual void exitKeyword_alias(RpgParser::Keyword_aliasContext * /*ctx*/) override { }

  virtual void enterKeyword_align(RpgParser::Keyword_alignContext * /*ctx*/) override { }
  virtual void exitKeyword_align(RpgParser::Keyword_alignContext * /*ctx*/) override { }

  virtual void enterKeyword_alt(RpgParser::Keyword_altContext * /*ctx*/) override { }
  virtual void exitKeyword_alt(RpgParser::Keyword_altContext * /*ctx*/) override { }

  virtual void enterKeyword_altseq(RpgParser::Keyword_altseqContext * /*ctx*/) override { }
  virtual void exitKeyword_altseq(RpgParser::Keyword_altseqContext * /*ctx*/) override { }

  virtual void enterKeyword_ascend(RpgParser::Keyword_ascendContext * /*ctx*/) override { }
  virtual void exitKeyword_ascend(RpgParser::Keyword_ascendContext * /*ctx*/) override { }

  virtual void enterKeyword_based(RpgParser::Keyword_basedContext * /*ctx*/) override { }
  virtual void exitKeyword_based(RpgParser::Keyword_basedContext * /*ctx*/) override { }

  virtual void enterKeyword_ccsid(RpgParser::Keyword_ccsidContext * /*ctx*/) override { }
  virtual void exitKeyword_ccsid(RpgParser::Keyword_ccsidContext * /*ctx*/) override { }

  virtual void enterKeyword_class(RpgParser::Keyword_classContext * /*ctx*/) override { }
  virtual void exitKeyword_class(RpgParser::Keyword_classContext * /*ctx*/) override { }

  virtual void enterKeyword_const(RpgParser::Keyword_constContext * /*ctx*/) override { }
  virtual void exitKeyword_const(RpgParser::Keyword_constContext * /*ctx*/) override { }

  virtual void enterKeyword_ctdata(RpgParser::Keyword_ctdataContext * /*ctx*/) override { }
  virtual void exitKeyword_ctdata(RpgParser::Keyword_ctdataContext * /*ctx*/) override { }

  virtual void enterKeyword_datfmt(RpgParser::Keyword_datfmtContext * /*ctx*/) override { }
  virtual void exitKeyword_datfmt(RpgParser::Keyword_datfmtContext * /*ctx*/) override { }

  virtual void enterDateSeparator(RpgParser::DateSeparatorContext * /*ctx*/) override { }
  virtual void exitDateSeparator(RpgParser::DateSeparatorContext * /*ctx*/) override { }

  virtual void enterKeyword_descend(RpgParser::Keyword_descendContext * /*ctx*/) override { }
  virtual void exitKeyword_descend(RpgParser::Keyword_descendContext * /*ctx*/) override { }

  virtual void enterKeyword_dim(RpgParser::Keyword_dimContext * /*ctx*/) override { }
  virtual void exitKeyword_dim(RpgParser::Keyword_dimContext * /*ctx*/) override { }

  virtual void enterKeyword_dtaara(RpgParser::Keyword_dtaaraContext * /*ctx*/) override { }
  virtual void exitKeyword_dtaara(RpgParser::Keyword_dtaaraContext * /*ctx*/) override { }

  virtual void enterKeyword_export(RpgParser::Keyword_exportContext * /*ctx*/) override { }
  virtual void exitKeyword_export(RpgParser::Keyword_exportContext * /*ctx*/) override { }

  virtual void enterKeyword_ext(RpgParser::Keyword_extContext * /*ctx*/) override { }
  virtual void exitKeyword_ext(RpgParser::Keyword_extContext * /*ctx*/) override { }

  virtual void enterKeyword_extfld(RpgParser::Keyword_extfldContext * /*ctx*/) override { }
  virtual void exitKeyword_extfld(RpgParser::Keyword_extfldContext * /*ctx*/) override { }

  virtual void enterKeyword_extfmt(RpgParser::Keyword_extfmtContext * /*ctx*/) override { }
  virtual void exitKeyword_extfmt(RpgParser::Keyword_extfmtContext * /*ctx*/) override { }

  virtual void enterKeyword_extname(RpgParser::Keyword_extnameContext * /*ctx*/) override { }
  virtual void exitKeyword_extname(RpgParser::Keyword_extnameContext * /*ctx*/) override { }

  virtual void enterKeyword_extpgm(RpgParser::Keyword_extpgmContext * /*ctx*/) override { }
  virtual void exitKeyword_extpgm(RpgParser::Keyword_extpgmContext * /*ctx*/) override { }

  virtual void enterKeyword_extproc(RpgParser::Keyword_extprocContext * /*ctx*/) override { }
  virtual void exitKeyword_extproc(RpgParser::Keyword_extprocContext * /*ctx*/) override { }

  virtual void enterKeyword_fromfile(RpgParser::Keyword_fromfileContext * /*ctx*/) override { }
  virtual void exitKeyword_fromfile(RpgParser::Keyword_fromfileContext * /*ctx*/) override { }

  virtual void enterKeyword_import(RpgParser::Keyword_importContext * /*ctx*/) override { }
  virtual void exitKeyword_import(RpgParser::Keyword_importContext * /*ctx*/) override { }

  virtual void enterKeyword_inz(RpgParser::Keyword_inzContext * /*ctx*/) override { }
  virtual void exitKeyword_inz(RpgParser::Keyword_inzContext * /*ctx*/) override { }

  virtual void enterKeyword_len(RpgParser::Keyword_lenContext * /*ctx*/) override { }
  virtual void exitKeyword_len(RpgParser::Keyword_lenContext * /*ctx*/) override { }

  virtual void enterKeyword_like(RpgParser::Keyword_likeContext * /*ctx*/) override { }
  virtual void exitKeyword_like(RpgParser::Keyword_likeContext * /*ctx*/) override { }

  virtual void enterKeyword_likeds(RpgParser::Keyword_likedsContext * /*ctx*/) override { }
  virtual void exitKeyword_likeds(RpgParser::Keyword_likedsContext * /*ctx*/) override { }

  virtual void enterKeyword_likefile(RpgParser::Keyword_likefileContext * /*ctx*/) override { }
  virtual void exitKeyword_likefile(RpgParser::Keyword_likefileContext * /*ctx*/) override { }

  virtual void enterKeyword_likerec(RpgParser::Keyword_likerecContext * /*ctx*/) override { }
  virtual void exitKeyword_likerec(RpgParser::Keyword_likerecContext * /*ctx*/) override { }

  virtual void enterKeyword_noopt(RpgParser::Keyword_nooptContext * /*ctx*/) override { }
  virtual void exitKeyword_noopt(RpgParser::Keyword_nooptContext * /*ctx*/) override { }

  virtual void enterKeyword_occurs(RpgParser::Keyword_occursContext * /*ctx*/) override { }
  virtual void exitKeyword_occurs(RpgParser::Keyword_occursContext * /*ctx*/) override { }

  virtual void enterKeyword_opdesc(RpgParser::Keyword_opdescContext * /*ctx*/) override { }
  virtual void exitKeyword_opdesc(RpgParser::Keyword_opdescContext * /*ctx*/) override { }

  virtual void enterKeyword_options(RpgParser::Keyword_optionsContext * /*ctx*/) override { }
  virtual void exitKeyword_options(RpgParser::Keyword_optionsContext * /*ctx*/) override { }

  virtual void enterKeyword_overlay(RpgParser::Keyword_overlayContext * /*ctx*/) override { }
  virtual void exitKeyword_overlay(RpgParser::Keyword_overlayContext * /*ctx*/) override { }

  virtual void enterKeyword_packeven(RpgParser::Keyword_packevenContext * /*ctx*/) override { }
  virtual void exitKeyword_packeven(RpgParser::Keyword_packevenContext * /*ctx*/) override { }

  virtual void enterKeyword_perrcd(RpgParser::Keyword_perrcdContext * /*ctx*/) override { }
  virtual void exitKeyword_perrcd(RpgParser::Keyword_perrcdContext * /*ctx*/) override { }

  virtual void enterKeyword_prefix(RpgParser::Keyword_prefixContext * /*ctx*/) override { }
  virtual void exitKeyword_prefix(RpgParser::Keyword_prefixContext * /*ctx*/) override { }

  virtual void enterKeyword_pos(RpgParser::Keyword_posContext * /*ctx*/) override { }
  virtual void exitKeyword_pos(RpgParser::Keyword_posContext * /*ctx*/) override { }

  virtual void enterKeyword_procptr(RpgParser::Keyword_procptrContext * /*ctx*/) override { }
  virtual void exitKeyword_procptr(RpgParser::Keyword_procptrContext * /*ctx*/) override { }

  virtual void enterKeyword_qualified(RpgParser::Keyword_qualifiedContext * /*ctx*/) override { }
  virtual void exitKeyword_qualified(RpgParser::Keyword_qualifiedContext * /*ctx*/) override { }

  virtual void enterKeyword_rtnparm(RpgParser::Keyword_rtnparmContext * /*ctx*/) override { }
  virtual void exitKeyword_rtnparm(RpgParser::Keyword_rtnparmContext * /*ctx*/) override { }

  virtual void enterKeyword_static(RpgParser::Keyword_staticContext * /*ctx*/) override { }
  virtual void exitKeyword_static(RpgParser::Keyword_staticContext * /*ctx*/) override { }

  virtual void enterKeyword_sqltype(RpgParser::Keyword_sqltypeContext * /*ctx*/) override { }
  virtual void exitKeyword_sqltype(RpgParser::Keyword_sqltypeContext * /*ctx*/) override { }

  virtual void enterKeyword_template(RpgParser::Keyword_templateContext * /*ctx*/) override { }
  virtual void exitKeyword_template(RpgParser::Keyword_templateContext * /*ctx*/) override { }

  virtual void enterKeyword_timfmt(RpgParser::Keyword_timfmtContext * /*ctx*/) override { }
  virtual void exitKeyword_timfmt(RpgParser::Keyword_timfmtContext * /*ctx*/) override { }

  virtual void enterKeyword_tofile(RpgParser::Keyword_tofileContext * /*ctx*/) override { }
  virtual void exitKeyword_tofile(RpgParser::Keyword_tofileContext * /*ctx*/) override { }

  virtual void enterKeyword_value(RpgParser::Keyword_valueContext * /*ctx*/) override { }
  virtual void exitKeyword_value(RpgParser::Keyword_valueContext * /*ctx*/) override { }

  virtual void enterKeyword_varying(RpgParser::Keyword_varyingContext * /*ctx*/) override { }
  virtual void exitKeyword_varying(RpgParser::Keyword_varyingContext * /*ctx*/) override { }

  virtual void enterKeyword_psds(RpgParser::Keyword_psdsContext * /*ctx*/) override { }
  virtual void exitKeyword_psds(RpgParser::Keyword_psdsContext * /*ctx*/) override { }

  virtual void enterKeyword_block(RpgParser::Keyword_blockContext * /*ctx*/) override { }
  virtual void exitKeyword_block(RpgParser::Keyword_blockContext * /*ctx*/) override { }

  virtual void enterKeyword_commit(RpgParser::Keyword_commitContext * /*ctx*/) override { }
  virtual void exitKeyword_commit(RpgParser::Keyword_commitContext * /*ctx*/) override { }

  virtual void enterKeyword_devid(RpgParser::Keyword_devidContext * /*ctx*/) override { }
  virtual void exitKeyword_devid(RpgParser::Keyword_devidContext * /*ctx*/) override { }

  virtual void enterKeyword_extdesc(RpgParser::Keyword_extdescContext * /*ctx*/) override { }
  virtual void exitKeyword_extdesc(RpgParser::Keyword_extdescContext * /*ctx*/) override { }

  virtual void enterKeyword_extfile(RpgParser::Keyword_extfileContext * /*ctx*/) override { }
  virtual void exitKeyword_extfile(RpgParser::Keyword_extfileContext * /*ctx*/) override { }

  virtual void enterKeyword_extind(RpgParser::Keyword_extindContext * /*ctx*/) override { }
  virtual void exitKeyword_extind(RpgParser::Keyword_extindContext * /*ctx*/) override { }

  virtual void enterKeyword_extmbr(RpgParser::Keyword_extmbrContext * /*ctx*/) override { }
  virtual void exitKeyword_extmbr(RpgParser::Keyword_extmbrContext * /*ctx*/) override { }

  virtual void enterKeyword_formlen(RpgParser::Keyword_formlenContext * /*ctx*/) override { }
  virtual void exitKeyword_formlen(RpgParser::Keyword_formlenContext * /*ctx*/) override { }

  virtual void enterKeyword_formofl(RpgParser::Keyword_formoflContext * /*ctx*/) override { }
  virtual void exitKeyword_formofl(RpgParser::Keyword_formoflContext * /*ctx*/) override { }

  virtual void enterKeyword_ignore(RpgParser::Keyword_ignoreContext * /*ctx*/) override { }
  virtual void exitKeyword_ignore(RpgParser::Keyword_ignoreContext * /*ctx*/) override { }

  virtual void enterKeyword_include(RpgParser::Keyword_includeContext * /*ctx*/) override { }
  virtual void exitKeyword_include(RpgParser::Keyword_includeContext * /*ctx*/) override { }

  virtual void enterKeyword_indds(RpgParser::Keyword_inddsContext * /*ctx*/) override { }
  virtual void exitKeyword_indds(RpgParser::Keyword_inddsContext * /*ctx*/) override { }

  virtual void enterKeyword_infds(RpgParser::Keyword_infdsContext * /*ctx*/) override { }
  virtual void exitKeyword_infds(RpgParser::Keyword_infdsContext * /*ctx*/) override { }

  virtual void enterKeyword_infsr(RpgParser::Keyword_infsrContext * /*ctx*/) override { }
  virtual void exitKeyword_infsr(RpgParser::Keyword_infsrContext * /*ctx*/) override { }

  virtual void enterKeyword_keyloc(RpgParser::Keyword_keylocContext * /*ctx*/) override { }
  virtual void exitKeyword_keyloc(RpgParser::Keyword_keylocContext * /*ctx*/) override { }

  virtual void enterKeyword_maxdev(RpgParser::Keyword_maxdevContext * /*ctx*/) override { }
  virtual void exitKeyword_maxdev(RpgParser::Keyword_maxdevContext * /*ctx*/) override { }

  virtual void enterKeyword_oflind(RpgParser::Keyword_oflindContext * /*ctx*/) override { }
  virtual void exitKeyword_oflind(RpgParser::Keyword_oflindContext * /*ctx*/) override { }

  virtual void enterKeyword_pass(RpgParser::Keyword_passContext * /*ctx*/) override { }
  virtual void exitKeyword_pass(RpgParser::Keyword_passContext * /*ctx*/) override { }

  virtual void enterKeyword_pgmname(RpgParser::Keyword_pgmnameContext * /*ctx*/) override { }
  virtual void exitKeyword_pgmname(RpgParser::Keyword_pgmnameContext * /*ctx*/) override { }

  virtual void enterKeyword_plist(RpgParser::Keyword_plistContext * /*ctx*/) override { }
  virtual void exitKeyword_plist(RpgParser::Keyword_plistContext * /*ctx*/) override { }

  virtual void enterKeyword_prtctl(RpgParser::Keyword_prtctlContext * /*ctx*/) override { }
  virtual void exitKeyword_prtctl(RpgParser::Keyword_prtctlContext * /*ctx*/) override { }

  virtual void enterKeyword_rafdata(RpgParser::Keyword_rafdataContext * /*ctx*/) override { }
  virtual void exitKeyword_rafdata(RpgParser::Keyword_rafdataContext * /*ctx*/) override { }

  virtual void enterKeyword_recno(RpgParser::Keyword_recnoContext * /*ctx*/) override { }
  virtual void exitKeyword_recno(RpgParser::Keyword_recnoContext * /*ctx*/) override { }

  virtual void enterKeyword_rename(RpgParser::Keyword_renameContext * /*ctx*/) override { }
  virtual void exitKeyword_rename(RpgParser::Keyword_renameContext * /*ctx*/) override { }

  virtual void enterKeyword_saveds(RpgParser::Keyword_savedsContext * /*ctx*/) override { }
  virtual void exitKeyword_saveds(RpgParser::Keyword_savedsContext * /*ctx*/) override { }

  virtual void enterKeyword_saveind(RpgParser::Keyword_saveindContext * /*ctx*/) override { }
  virtual void exitKeyword_saveind(RpgParser::Keyword_saveindContext * /*ctx*/) override { }

  virtual void enterKeyword_sfile(RpgParser::Keyword_sfileContext * /*ctx*/) override { }
  virtual void exitKeyword_sfile(RpgParser::Keyword_sfileContext * /*ctx*/) override { }

  virtual void enterKeyword_sln(RpgParser::Keyword_slnContext * /*ctx*/) override { }
  virtual void exitKeyword_sln(RpgParser::Keyword_slnContext * /*ctx*/) override { }

  virtual void enterKeyword_usropn(RpgParser::Keyword_usropnContext * /*ctx*/) override { }
  virtual void exitKeyword_usropn(RpgParser::Keyword_usropnContext * /*ctx*/) override { }

  virtual void enterKeyword_disk(RpgParser::Keyword_diskContext * /*ctx*/) override { }
  virtual void exitKeyword_disk(RpgParser::Keyword_diskContext * /*ctx*/) override { }

  virtual void enterKeyword_workstn(RpgParser::Keyword_workstnContext * /*ctx*/) override { }
  virtual void exitKeyword_workstn(RpgParser::Keyword_workstnContext * /*ctx*/) override { }

  virtual void enterKeyword_printer(RpgParser::Keyword_printerContext * /*ctx*/) override { }
  virtual void exitKeyword_printer(RpgParser::Keyword_printerContext * /*ctx*/) override { }

  virtual void enterKeyword_special(RpgParser::Keyword_specialContext * /*ctx*/) override { }
  virtual void exitKeyword_special(RpgParser::Keyword_specialContext * /*ctx*/) override { }

  virtual void enterKeyword_keyed(RpgParser::Keyword_keyedContext * /*ctx*/) override { }
  virtual void exitKeyword_keyed(RpgParser::Keyword_keyedContext * /*ctx*/) override { }

  virtual void enterKeyword_usage(RpgParser::Keyword_usageContext * /*ctx*/) override { }
  virtual void exitKeyword_usage(RpgParser::Keyword_usageContext * /*ctx*/) override { }

  virtual void enterLike_lengthAdjustment(RpgParser::Like_lengthAdjustmentContext * /*ctx*/) override { }
  virtual void exitLike_lengthAdjustment(RpgParser::Like_lengthAdjustmentContext * /*ctx*/) override { }

  virtual void enterSign(RpgParser::SignContext * /*ctx*/) override { }
  virtual void exitSign(RpgParser::SignContext * /*ctx*/) override { }

  virtual void enterDcl_ds(RpgParser::Dcl_dsContext * /*ctx*/) override { }
  virtual void exitDcl_ds(RpgParser::Dcl_dsContext * /*ctx*/) override { }

  virtual void enterDcl_ds_field(RpgParser::Dcl_ds_fieldContext * /*ctx*/) override { }
  virtual void exitDcl_ds_field(RpgParser::Dcl_ds_fieldContext * /*ctx*/) override { }

  virtual void enterEnd_dcl_ds(RpgParser::End_dcl_dsContext * /*ctx*/) override { }
  virtual void exitEnd_dcl_ds(RpgParser::End_dcl_dsContext * /*ctx*/) override { }

  virtual void enterDcl_pr(RpgParser::Dcl_prContext * /*ctx*/) override { }
  virtual void exitDcl_pr(RpgParser::Dcl_prContext * /*ctx*/) override { }

  virtual void enterDcl_pr_field(RpgParser::Dcl_pr_fieldContext * /*ctx*/) override { }
  virtual void exitDcl_pr_field(RpgParser::Dcl_pr_fieldContext * /*ctx*/) override { }

  virtual void enterEnd_dcl_pr(RpgParser::End_dcl_prContext * /*ctx*/) override { }
  virtual void exitEnd_dcl_pr(RpgParser::End_dcl_prContext * /*ctx*/) override { }

  virtual void enterDcl_pi(RpgParser::Dcl_piContext * /*ctx*/) override { }
  virtual void exitDcl_pi(RpgParser::Dcl_piContext * /*ctx*/) override { }

  virtual void enterDcl_pi_field(RpgParser::Dcl_pi_fieldContext * /*ctx*/) override { }
  virtual void exitDcl_pi_field(RpgParser::Dcl_pi_fieldContext * /*ctx*/) override { }

  virtual void enterEnd_dcl_pi(RpgParser::End_dcl_piContext * /*ctx*/) override { }
  virtual void exitEnd_dcl_pi(RpgParser::End_dcl_piContext * /*ctx*/) override { }

  virtual void enterDcl_c(RpgParser::Dcl_cContext * /*ctx*/) override { }
  virtual void exitDcl_c(RpgParser::Dcl_cContext * /*ctx*/) override { }

  virtual void enterCtl_opt(RpgParser::Ctl_optContext * /*ctx*/) override { }
  virtual void exitCtl_opt(RpgParser::Ctl_optContext * /*ctx*/) override { }

  virtual void enterDatatypeName(RpgParser::DatatypeNameContext * /*ctx*/) override { }
  virtual void exitDatatypeName(RpgParser::DatatypeNameContext * /*ctx*/) override { }

  virtual void enterBlock(RpgParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(RpgParser::BlockContext * /*ctx*/) override { }

  virtual void enterIfstatement(RpgParser::IfstatementContext * /*ctx*/) override { }
  virtual void exitIfstatement(RpgParser::IfstatementContext * /*ctx*/) override { }

  virtual void enterElseIfClause(RpgParser::ElseIfClauseContext * /*ctx*/) override { }
  virtual void exitElseIfClause(RpgParser::ElseIfClauseContext * /*ctx*/) override { }

  virtual void enterElseClause(RpgParser::ElseClauseContext * /*ctx*/) override { }
  virtual void exitElseClause(RpgParser::ElseClauseContext * /*ctx*/) override { }

  virtual void enterCasestatement(RpgParser::CasestatementContext * /*ctx*/) override { }
  virtual void exitCasestatement(RpgParser::CasestatementContext * /*ctx*/) override { }

  virtual void enterCasestatementend(RpgParser::CasestatementendContext * /*ctx*/) override { }
  virtual void exitCasestatementend(RpgParser::CasestatementendContext * /*ctx*/) override { }

  virtual void enterMonitorstatement(RpgParser::MonitorstatementContext * /*ctx*/) override { }
  virtual void exitMonitorstatement(RpgParser::MonitorstatementContext * /*ctx*/) override { }

  virtual void enterBeginmonitor(RpgParser::BeginmonitorContext * /*ctx*/) override { }
  virtual void exitBeginmonitor(RpgParser::BeginmonitorContext * /*ctx*/) override { }

  virtual void enterEndmonitor(RpgParser::EndmonitorContext * /*ctx*/) override { }
  virtual void exitEndmonitor(RpgParser::EndmonitorContext * /*ctx*/) override { }

  virtual void enterOnError(RpgParser::OnErrorContext * /*ctx*/) override { }
  virtual void exitOnError(RpgParser::OnErrorContext * /*ctx*/) override { }

  virtual void enterSelectstatement(RpgParser::SelectstatementContext * /*ctx*/) override { }
  virtual void exitSelectstatement(RpgParser::SelectstatementContext * /*ctx*/) override { }

  virtual void enterOther(RpgParser::OtherContext * /*ctx*/) override { }
  virtual void exitOther(RpgParser::OtherContext * /*ctx*/) override { }

  virtual void enterBeginselect(RpgParser::BeginselectContext * /*ctx*/) override { }
  virtual void exitBeginselect(RpgParser::BeginselectContext * /*ctx*/) override { }

  virtual void enterWhenstatement(RpgParser::WhenstatementContext * /*ctx*/) override { }
  virtual void exitWhenstatement(RpgParser::WhenstatementContext * /*ctx*/) override { }

  virtual void enterWhen(RpgParser::WhenContext * /*ctx*/) override { }
  virtual void exitWhen(RpgParser::WhenContext * /*ctx*/) override { }

  virtual void enterCsWHENxx(RpgParser::CsWHENxxContext * /*ctx*/) override { }
  virtual void exitCsWHENxx(RpgParser::CsWHENxxContext * /*ctx*/) override { }

  virtual void enterEndselect(RpgParser::EndselectContext * /*ctx*/) override { }
  virtual void exitEndselect(RpgParser::EndselectContext * /*ctx*/) override { }

  virtual void enterBeginif(RpgParser::BeginifContext * /*ctx*/) override { }
  virtual void exitBeginif(RpgParser::BeginifContext * /*ctx*/) override { }

  virtual void enterBegindou(RpgParser::BegindouContext * /*ctx*/) override { }
  virtual void exitBegindou(RpgParser::BegindouContext * /*ctx*/) override { }

  virtual void enterBegindow(RpgParser::BegindowContext * /*ctx*/) override { }
  virtual void exitBegindow(RpgParser::BegindowContext * /*ctx*/) override { }

  virtual void enterBegindo(RpgParser::BegindoContext * /*ctx*/) override { }
  virtual void exitBegindo(RpgParser::BegindoContext * /*ctx*/) override { }

  virtual void enterElseifstmt(RpgParser::ElseifstmtContext * /*ctx*/) override { }
  virtual void exitElseifstmt(RpgParser::ElseifstmtContext * /*ctx*/) override { }

  virtual void enterElsestmt(RpgParser::ElsestmtContext * /*ctx*/) override { }
  virtual void exitElsestmt(RpgParser::ElsestmtContext * /*ctx*/) override { }

  virtual void enterCsIFxx(RpgParser::CsIFxxContext * /*ctx*/) override { }
  virtual void exitCsIFxx(RpgParser::CsIFxxContext * /*ctx*/) override { }

  virtual void enterCsDOUxx(RpgParser::CsDOUxxContext * /*ctx*/) override { }
  virtual void exitCsDOUxx(RpgParser::CsDOUxxContext * /*ctx*/) override { }

  virtual void enterCsDOWxx(RpgParser::CsDOWxxContext * /*ctx*/) override { }
  virtual void exitCsDOWxx(RpgParser::CsDOWxxContext * /*ctx*/) override { }

  virtual void enterComplexCondxx(RpgParser::ComplexCondxxContext * /*ctx*/) override { }
  virtual void exitComplexCondxx(RpgParser::ComplexCondxxContext * /*ctx*/) override { }

  virtual void enterCsANDxx(RpgParser::CsANDxxContext * /*ctx*/) override { }
  virtual void exitCsANDxx(RpgParser::CsANDxxContext * /*ctx*/) override { }

  virtual void enterCsORxx(RpgParser::CsORxxContext * /*ctx*/) override { }
  virtual void exitCsORxx(RpgParser::CsORxxContext * /*ctx*/) override { }

  virtual void enterForstatement(RpgParser::ForstatementContext * /*ctx*/) override { }
  virtual void exitForstatement(RpgParser::ForstatementContext * /*ctx*/) override { }

  virtual void enterBeginfor(RpgParser::BeginforContext * /*ctx*/) override { }
  virtual void exitBeginfor(RpgParser::BeginforContext * /*ctx*/) override { }

  virtual void enterEndif(RpgParser::EndifContext * /*ctx*/) override { }
  virtual void exitEndif(RpgParser::EndifContext * /*ctx*/) override { }

  virtual void enterEnddo(RpgParser::EnddoContext * /*ctx*/) override { }
  virtual void exitEnddo(RpgParser::EnddoContext * /*ctx*/) override { }

  virtual void enterEndfor(RpgParser::EndforContext * /*ctx*/) override { }
  virtual void exitEndfor(RpgParser::EndforContext * /*ctx*/) override { }

  virtual void enterDspec_fixed(RpgParser::Dspec_fixedContext * /*ctx*/) override { }
  virtual void exitDspec_fixed(RpgParser::Dspec_fixedContext * /*ctx*/) override { }

  virtual void enterDs_name(RpgParser::Ds_nameContext * /*ctx*/) override { }
  virtual void exitDs_name(RpgParser::Ds_nameContext * /*ctx*/) override { }

  virtual void enterOspec_fixed(RpgParser::Ospec_fixedContext * /*ctx*/) override { }
  virtual void exitOspec_fixed(RpgParser::Ospec_fixedContext * /*ctx*/) override { }

  virtual void enterOs_fixed_pgmdesc1(RpgParser::Os_fixed_pgmdesc1Context * /*ctx*/) override { }
  virtual void exitOs_fixed_pgmdesc1(RpgParser::Os_fixed_pgmdesc1Context * /*ctx*/) override { }

  virtual void enterOutputConditioningOnOffIndicator(RpgParser::OutputConditioningOnOffIndicatorContext * /*ctx*/) override { }
  virtual void exitOutputConditioningOnOffIndicator(RpgParser::OutputConditioningOnOffIndicatorContext * /*ctx*/) override { }

  virtual void enterOutputConditioningIndicator(RpgParser::OutputConditioningIndicatorContext * /*ctx*/) override { }
  virtual void exitOutputConditioningIndicator(RpgParser::OutputConditioningIndicatorContext * /*ctx*/) override { }

  virtual void enterOs_fixed_pgmdesc_compound(RpgParser::Os_fixed_pgmdesc_compoundContext * /*ctx*/) override { }
  virtual void exitOs_fixed_pgmdesc_compound(RpgParser::Os_fixed_pgmdesc_compoundContext * /*ctx*/) override { }

  virtual void enterOs_fixed_pgmdesc2(RpgParser::Os_fixed_pgmdesc2Context * /*ctx*/) override { }
  virtual void exitOs_fixed_pgmdesc2(RpgParser::Os_fixed_pgmdesc2Context * /*ctx*/) override { }

  virtual void enterOs_fixed_pgmfield(RpgParser::Os_fixed_pgmfieldContext * /*ctx*/) override { }
  virtual void exitOs_fixed_pgmfield(RpgParser::Os_fixed_pgmfieldContext * /*ctx*/) override { }

  virtual void enterPs_name(RpgParser::Ps_nameContext * /*ctx*/) override { }
  virtual void exitPs_name(RpgParser::Ps_nameContext * /*ctx*/) override { }

  virtual void enterFspec(RpgParser::FspecContext * /*ctx*/) override { }
  virtual void exitFspec(RpgParser::FspecContext * /*ctx*/) override { }

  virtual void enterFilename(RpgParser::FilenameContext * /*ctx*/) override { }
  virtual void exitFilename(RpgParser::FilenameContext * /*ctx*/) override { }

  virtual void enterFs_parm(RpgParser::Fs_parmContext * /*ctx*/) override { }
  virtual void exitFs_parm(RpgParser::Fs_parmContext * /*ctx*/) override { }

  virtual void enterFs_string(RpgParser::Fs_stringContext * /*ctx*/) override { }
  virtual void exitFs_string(RpgParser::Fs_stringContext * /*ctx*/) override { }

  virtual void enterFs_keyword(RpgParser::Fs_keywordContext * /*ctx*/) override { }
  virtual void exitFs_keyword(RpgParser::Fs_keywordContext * /*ctx*/) override { }

  virtual void enterFspec_fixed(RpgParser::Fspec_fixedContext * /*ctx*/) override { }
  virtual void exitFspec_fixed(RpgParser::Fspec_fixedContext * /*ctx*/) override { }

  virtual void enterCspec_fixed(RpgParser::Cspec_fixedContext * /*ctx*/) override { }
  virtual void exitCspec_fixed(RpgParser::Cspec_fixedContext * /*ctx*/) override { }

  virtual void enterCspec_continuedIndicators(RpgParser::Cspec_continuedIndicatorsContext * /*ctx*/) override { }
  virtual void exitCspec_continuedIndicators(RpgParser::Cspec_continuedIndicatorsContext * /*ctx*/) override { }

  virtual void enterCspec_blank(RpgParser::Cspec_blankContext * /*ctx*/) override { }
  virtual void exitCspec_blank(RpgParser::Cspec_blankContext * /*ctx*/) override { }

  virtual void enterBlank_spec(RpgParser::Blank_specContext * /*ctx*/) override { }
  virtual void exitBlank_spec(RpgParser::Blank_specContext * /*ctx*/) override { }

  virtual void enterPiBegin(RpgParser::PiBeginContext * /*ctx*/) override { }
  virtual void exitPiBegin(RpgParser::PiBeginContext * /*ctx*/) override { }

  virtual void enterParm_fixed(RpgParser::Parm_fixedContext * /*ctx*/) override { }
  virtual void exitParm_fixed(RpgParser::Parm_fixedContext * /*ctx*/) override { }

  virtual void enterPr_parm_fixed(RpgParser::Pr_parm_fixedContext * /*ctx*/) override { }
  virtual void exitPr_parm_fixed(RpgParser::Pr_parm_fixedContext * /*ctx*/) override { }

  virtual void enterPi_parm_fixed(RpgParser::Pi_parm_fixedContext * /*ctx*/) override { }
  virtual void exitPi_parm_fixed(RpgParser::Pi_parm_fixedContext * /*ctx*/) override { }

  virtual void enterProcedure(RpgParser::ProcedureContext * /*ctx*/) override { }
  virtual void exitProcedure(RpgParser::ProcedureContext * /*ctx*/) override { }

  virtual void enterBeginProcedure(RpgParser::BeginProcedureContext * /*ctx*/) override { }
  virtual void exitBeginProcedure(RpgParser::BeginProcedureContext * /*ctx*/) override { }

  virtual void enterEndProcedure(RpgParser::EndProcedureContext * /*ctx*/) override { }
  virtual void exitEndProcedure(RpgParser::EndProcedureContext * /*ctx*/) override { }

  virtual void enterPsBegin(RpgParser::PsBeginContext * /*ctx*/) override { }
  virtual void exitPsBegin(RpgParser::PsBeginContext * /*ctx*/) override { }

  virtual void enterFreeBeginProcedure(RpgParser::FreeBeginProcedureContext * /*ctx*/) override { }
  virtual void exitFreeBeginProcedure(RpgParser::FreeBeginProcedureContext * /*ctx*/) override { }

  virtual void enterPsEnd(RpgParser::PsEndContext * /*ctx*/) override { }
  virtual void exitPsEnd(RpgParser::PsEndContext * /*ctx*/) override { }

  virtual void enterFreeEndProcedure(RpgParser::FreeEndProcedureContext * /*ctx*/) override { }
  virtual void exitFreeEndProcedure(RpgParser::FreeEndProcedureContext * /*ctx*/) override { }

  virtual void enterPrBegin(RpgParser::PrBeginContext * /*ctx*/) override { }
  virtual void exitPrBegin(RpgParser::PrBeginContext * /*ctx*/) override { }

  virtual void enterSubroutine(RpgParser::SubroutineContext * /*ctx*/) override { }
  virtual void exitSubroutine(RpgParser::SubroutineContext * /*ctx*/) override { }

  virtual void enterSubprocedurestatement(RpgParser::SubprocedurestatementContext * /*ctx*/) override { }
  virtual void exitSubprocedurestatement(RpgParser::SubprocedurestatementContext * /*ctx*/) override { }

  virtual void enterBegsr(RpgParser::BegsrContext * /*ctx*/) override { }
  virtual void exitBegsr(RpgParser::BegsrContext * /*ctx*/) override { }

  virtual void enterEndsr(RpgParser::EndsrContext * /*ctx*/) override { }
  virtual void exitEndsr(RpgParser::EndsrContext * /*ctx*/) override { }

  virtual void enterCsBEGSR(RpgParser::CsBEGSRContext * /*ctx*/) override { }
  virtual void exitCsBEGSR(RpgParser::CsBEGSRContext * /*ctx*/) override { }

  virtual void enterFreeBEGSR(RpgParser::FreeBEGSRContext * /*ctx*/) override { }
  virtual void exitFreeBEGSR(RpgParser::FreeBEGSRContext * /*ctx*/) override { }

  virtual void enterCsENDSR(RpgParser::CsENDSRContext * /*ctx*/) override { }
  virtual void exitCsENDSR(RpgParser::CsENDSRContext * /*ctx*/) override { }

  virtual void enterFreeENDSR(RpgParser::FreeENDSRContext * /*ctx*/) override { }
  virtual void exitFreeENDSR(RpgParser::FreeENDSRContext * /*ctx*/) override { }

  virtual void enterOnOffIndicatorsFlag(RpgParser::OnOffIndicatorsFlagContext * /*ctx*/) override { }
  virtual void exitOnOffIndicatorsFlag(RpgParser::OnOffIndicatorsFlagContext * /*ctx*/) override { }

  virtual void enterCs_controlLevel(RpgParser::Cs_controlLevelContext * /*ctx*/) override { }
  virtual void exitCs_controlLevel(RpgParser::Cs_controlLevelContext * /*ctx*/) override { }

  virtual void enterCs_indicators(RpgParser::Cs_indicatorsContext * /*ctx*/) override { }
  virtual void exitCs_indicators(RpgParser::Cs_indicatorsContext * /*ctx*/) override { }

  virtual void enterResultIndicator(RpgParser::ResultIndicatorContext * /*ctx*/) override { }
  virtual void exitResultIndicator(RpgParser::ResultIndicatorContext * /*ctx*/) override { }

  virtual void enterCspec_fixed_sql(RpgParser::Cspec_fixed_sqlContext * /*ctx*/) override { }
  virtual void exitCspec_fixed_sql(RpgParser::Cspec_fixed_sqlContext * /*ctx*/) override { }

  virtual void enterCspec_fixed_standard(RpgParser::Cspec_fixed_standardContext * /*ctx*/) override { }
  virtual void exitCspec_fixed_standard(RpgParser::Cspec_fixed_standardContext * /*ctx*/) override { }

  virtual void enterCspec_fixed_standard_parts(RpgParser::Cspec_fixed_standard_partsContext * /*ctx*/) override { }
  virtual void exitCspec_fixed_standard_parts(RpgParser::Cspec_fixed_standard_partsContext * /*ctx*/) override { }

  virtual void enterCsACQ(RpgParser::CsACQContext * /*ctx*/) override { }
  virtual void exitCsACQ(RpgParser::CsACQContext * /*ctx*/) override { }

  virtual void enterCsADD(RpgParser::CsADDContext * /*ctx*/) override { }
  virtual void exitCsADD(RpgParser::CsADDContext * /*ctx*/) override { }

  virtual void enterCsADDDUR(RpgParser::CsADDDURContext * /*ctx*/) override { }
  virtual void exitCsADDDUR(RpgParser::CsADDDURContext * /*ctx*/) override { }

  virtual void enterCsALLOC(RpgParser::CsALLOCContext * /*ctx*/) override { }
  virtual void exitCsALLOC(RpgParser::CsALLOCContext * /*ctx*/) override { }

  virtual void enterCsANDEQ(RpgParser::CsANDEQContext * /*ctx*/) override { }
  virtual void exitCsANDEQ(RpgParser::CsANDEQContext * /*ctx*/) override { }

  virtual void enterCsANDNE(RpgParser::CsANDNEContext * /*ctx*/) override { }
  virtual void exitCsANDNE(RpgParser::CsANDNEContext * /*ctx*/) override { }

  virtual void enterCsANDLE(RpgParser::CsANDLEContext * /*ctx*/) override { }
  virtual void exitCsANDLE(RpgParser::CsANDLEContext * /*ctx*/) override { }

  virtual void enterCsANDLT(RpgParser::CsANDLTContext * /*ctx*/) override { }
  virtual void exitCsANDLT(RpgParser::CsANDLTContext * /*ctx*/) override { }

  virtual void enterCsANDGE(RpgParser::CsANDGEContext * /*ctx*/) override { }
  virtual void exitCsANDGE(RpgParser::CsANDGEContext * /*ctx*/) override { }

  virtual void enterCsANDGT(RpgParser::CsANDGTContext * /*ctx*/) override { }
  virtual void exitCsANDGT(RpgParser::CsANDGTContext * /*ctx*/) override { }

  virtual void enterCsBITOFF(RpgParser::CsBITOFFContext * /*ctx*/) override { }
  virtual void exitCsBITOFF(RpgParser::CsBITOFFContext * /*ctx*/) override { }

  virtual void enterCsBITON(RpgParser::CsBITONContext * /*ctx*/) override { }
  virtual void exitCsBITON(RpgParser::CsBITONContext * /*ctx*/) override { }

  virtual void enterCsCABxx(RpgParser::CsCABxxContext * /*ctx*/) override { }
  virtual void exitCsCABxx(RpgParser::CsCABxxContext * /*ctx*/) override { }

  virtual void enterCsCABEQ(RpgParser::CsCABEQContext * /*ctx*/) override { }
  virtual void exitCsCABEQ(RpgParser::CsCABEQContext * /*ctx*/) override { }

  virtual void enterCsCABNE(RpgParser::CsCABNEContext * /*ctx*/) override { }
  virtual void exitCsCABNE(RpgParser::CsCABNEContext * /*ctx*/) override { }

  virtual void enterCsCABLE(RpgParser::CsCABLEContext * /*ctx*/) override { }
  virtual void exitCsCABLE(RpgParser::CsCABLEContext * /*ctx*/) override { }

  virtual void enterCsCABLT(RpgParser::CsCABLTContext * /*ctx*/) override { }
  virtual void exitCsCABLT(RpgParser::CsCABLTContext * /*ctx*/) override { }

  virtual void enterCsCABGE(RpgParser::CsCABGEContext * /*ctx*/) override { }
  virtual void exitCsCABGE(RpgParser::CsCABGEContext * /*ctx*/) override { }

  virtual void enterCsCABGT(RpgParser::CsCABGTContext * /*ctx*/) override { }
  virtual void exitCsCABGT(RpgParser::CsCABGTContext * /*ctx*/) override { }

  virtual void enterCsCALL(RpgParser::CsCALLContext * /*ctx*/) override { }
  virtual void exitCsCALL(RpgParser::CsCALLContext * /*ctx*/) override { }

  virtual void enterCsCALLB(RpgParser::CsCALLBContext * /*ctx*/) override { }
  virtual void exitCsCALLB(RpgParser::CsCALLBContext * /*ctx*/) override { }

  virtual void enterCsCALLP(RpgParser::CsCALLPContext * /*ctx*/) override { }
  virtual void exitCsCALLP(RpgParser::CsCALLPContext * /*ctx*/) override { }

  virtual void enterCsCASEQ(RpgParser::CsCASEQContext * /*ctx*/) override { }
  virtual void exitCsCASEQ(RpgParser::CsCASEQContext * /*ctx*/) override { }

  virtual void enterCsCASNE(RpgParser::CsCASNEContext * /*ctx*/) override { }
  virtual void exitCsCASNE(RpgParser::CsCASNEContext * /*ctx*/) override { }

  virtual void enterCsCASLE(RpgParser::CsCASLEContext * /*ctx*/) override { }
  virtual void exitCsCASLE(RpgParser::CsCASLEContext * /*ctx*/) override { }

  virtual void enterCsCASLT(RpgParser::CsCASLTContext * /*ctx*/) override { }
  virtual void exitCsCASLT(RpgParser::CsCASLTContext * /*ctx*/) override { }

  virtual void enterCsCASGE(RpgParser::CsCASGEContext * /*ctx*/) override { }
  virtual void exitCsCASGE(RpgParser::CsCASGEContext * /*ctx*/) override { }

  virtual void enterCsCASGT(RpgParser::CsCASGTContext * /*ctx*/) override { }
  virtual void exitCsCASGT(RpgParser::CsCASGTContext * /*ctx*/) override { }

  virtual void enterCsCAS(RpgParser::CsCASContext * /*ctx*/) override { }
  virtual void exitCsCAS(RpgParser::CsCASContext * /*ctx*/) override { }

  virtual void enterCsCAT(RpgParser::CsCATContext * /*ctx*/) override { }
  virtual void exitCsCAT(RpgParser::CsCATContext * /*ctx*/) override { }

  virtual void enterCsCHAIN(RpgParser::CsCHAINContext * /*ctx*/) override { }
  virtual void exitCsCHAIN(RpgParser::CsCHAINContext * /*ctx*/) override { }

  virtual void enterCsCHECK(RpgParser::CsCHECKContext * /*ctx*/) override { }
  virtual void exitCsCHECK(RpgParser::CsCHECKContext * /*ctx*/) override { }

  virtual void enterCsCHECKR(RpgParser::CsCHECKRContext * /*ctx*/) override { }
  virtual void exitCsCHECKR(RpgParser::CsCHECKRContext * /*ctx*/) override { }

  virtual void enterCsCLEAR(RpgParser::CsCLEARContext * /*ctx*/) override { }
  virtual void exitCsCLEAR(RpgParser::CsCLEARContext * /*ctx*/) override { }

  virtual void enterCsCLOSE(RpgParser::CsCLOSEContext * /*ctx*/) override { }
  virtual void exitCsCLOSE(RpgParser::CsCLOSEContext * /*ctx*/) override { }

  virtual void enterCsCOMMIT(RpgParser::CsCOMMITContext * /*ctx*/) override { }
  virtual void exitCsCOMMIT(RpgParser::CsCOMMITContext * /*ctx*/) override { }

  virtual void enterCsCOMP(RpgParser::CsCOMPContext * /*ctx*/) override { }
  virtual void exitCsCOMP(RpgParser::CsCOMPContext * /*ctx*/) override { }

  virtual void enterCsDEALLOC(RpgParser::CsDEALLOCContext * /*ctx*/) override { }
  virtual void exitCsDEALLOC(RpgParser::CsDEALLOCContext * /*ctx*/) override { }

  virtual void enterCsDEFINE(RpgParser::CsDEFINEContext * /*ctx*/) override { }
  virtual void exitCsDEFINE(RpgParser::CsDEFINEContext * /*ctx*/) override { }

  virtual void enterCsDELETE(RpgParser::CsDELETEContext * /*ctx*/) override { }
  virtual void exitCsDELETE(RpgParser::CsDELETEContext * /*ctx*/) override { }

  virtual void enterCsDIV(RpgParser::CsDIVContext * /*ctx*/) override { }
  virtual void exitCsDIV(RpgParser::CsDIVContext * /*ctx*/) override { }

  virtual void enterCsDO(RpgParser::CsDOContext * /*ctx*/) override { }
  virtual void exitCsDO(RpgParser::CsDOContext * /*ctx*/) override { }

  virtual void enterCsDOU(RpgParser::CsDOUContext * /*ctx*/) override { }
  virtual void exitCsDOU(RpgParser::CsDOUContext * /*ctx*/) override { }

  virtual void enterCsDOUEQ(RpgParser::CsDOUEQContext * /*ctx*/) override { }
  virtual void exitCsDOUEQ(RpgParser::CsDOUEQContext * /*ctx*/) override { }

  virtual void enterCsDOUNE(RpgParser::CsDOUNEContext * /*ctx*/) override { }
  virtual void exitCsDOUNE(RpgParser::CsDOUNEContext * /*ctx*/) override { }

  virtual void enterCsDOULE(RpgParser::CsDOULEContext * /*ctx*/) override { }
  virtual void exitCsDOULE(RpgParser::CsDOULEContext * /*ctx*/) override { }

  virtual void enterCsDOULT(RpgParser::CsDOULTContext * /*ctx*/) override { }
  virtual void exitCsDOULT(RpgParser::CsDOULTContext * /*ctx*/) override { }

  virtual void enterCsDOUGE(RpgParser::CsDOUGEContext * /*ctx*/) override { }
  virtual void exitCsDOUGE(RpgParser::CsDOUGEContext * /*ctx*/) override { }

  virtual void enterCsDOUGT(RpgParser::CsDOUGTContext * /*ctx*/) override { }
  virtual void exitCsDOUGT(RpgParser::CsDOUGTContext * /*ctx*/) override { }

  virtual void enterCsDOW(RpgParser::CsDOWContext * /*ctx*/) override { }
  virtual void exitCsDOW(RpgParser::CsDOWContext * /*ctx*/) override { }

  virtual void enterCsDOWEQ(RpgParser::CsDOWEQContext * /*ctx*/) override { }
  virtual void exitCsDOWEQ(RpgParser::CsDOWEQContext * /*ctx*/) override { }

  virtual void enterCsDOWNE(RpgParser::CsDOWNEContext * /*ctx*/) override { }
  virtual void exitCsDOWNE(RpgParser::CsDOWNEContext * /*ctx*/) override { }

  virtual void enterCsDOWLE(RpgParser::CsDOWLEContext * /*ctx*/) override { }
  virtual void exitCsDOWLE(RpgParser::CsDOWLEContext * /*ctx*/) override { }

  virtual void enterCsDOWLT(RpgParser::CsDOWLTContext * /*ctx*/) override { }
  virtual void exitCsDOWLT(RpgParser::CsDOWLTContext * /*ctx*/) override { }

  virtual void enterCsDOWGE(RpgParser::CsDOWGEContext * /*ctx*/) override { }
  virtual void exitCsDOWGE(RpgParser::CsDOWGEContext * /*ctx*/) override { }

  virtual void enterCsDOWGT(RpgParser::CsDOWGTContext * /*ctx*/) override { }
  virtual void exitCsDOWGT(RpgParser::CsDOWGTContext * /*ctx*/) override { }

  virtual void enterCsDSPLY(RpgParser::CsDSPLYContext * /*ctx*/) override { }
  virtual void exitCsDSPLY(RpgParser::CsDSPLYContext * /*ctx*/) override { }

  virtual void enterCsDUMP(RpgParser::CsDUMPContext * /*ctx*/) override { }
  virtual void exitCsDUMP(RpgParser::CsDUMPContext * /*ctx*/) override { }

  virtual void enterCsELSE(RpgParser::CsELSEContext * /*ctx*/) override { }
  virtual void exitCsELSE(RpgParser::CsELSEContext * /*ctx*/) override { }

  virtual void enterCsELSEIF(RpgParser::CsELSEIFContext * /*ctx*/) override { }
  virtual void exitCsELSEIF(RpgParser::CsELSEIFContext * /*ctx*/) override { }

  virtual void enterCsEND(RpgParser::CsENDContext * /*ctx*/) override { }
  virtual void exitCsEND(RpgParser::CsENDContext * /*ctx*/) override { }

  virtual void enterCsENDCS(RpgParser::CsENDCSContext * /*ctx*/) override { }
  virtual void exitCsENDCS(RpgParser::CsENDCSContext * /*ctx*/) override { }

  virtual void enterCsENDDO(RpgParser::CsENDDOContext * /*ctx*/) override { }
  virtual void exitCsENDDO(RpgParser::CsENDDOContext * /*ctx*/) override { }

  virtual void enterCsENDFOR(RpgParser::CsENDFORContext * /*ctx*/) override { }
  virtual void exitCsENDFOR(RpgParser::CsENDFORContext * /*ctx*/) override { }

  virtual void enterCsENDIF(RpgParser::CsENDIFContext * /*ctx*/) override { }
  virtual void exitCsENDIF(RpgParser::CsENDIFContext * /*ctx*/) override { }

  virtual void enterCsENDMON(RpgParser::CsENDMONContext * /*ctx*/) override { }
  virtual void exitCsENDMON(RpgParser::CsENDMONContext * /*ctx*/) override { }

  virtual void enterCsENDSL(RpgParser::CsENDSLContext * /*ctx*/) override { }
  virtual void exitCsENDSL(RpgParser::CsENDSLContext * /*ctx*/) override { }

  virtual void enterCsEVAL(RpgParser::CsEVALContext * /*ctx*/) override { }
  virtual void exitCsEVAL(RpgParser::CsEVALContext * /*ctx*/) override { }

  virtual void enterCsEVAL_CORR(RpgParser::CsEVAL_CORRContext * /*ctx*/) override { }
  virtual void exitCsEVAL_CORR(RpgParser::CsEVAL_CORRContext * /*ctx*/) override { }

  virtual void enterCsEVALR(RpgParser::CsEVALRContext * /*ctx*/) override { }
  virtual void exitCsEVALR(RpgParser::CsEVALRContext * /*ctx*/) override { }

  virtual void enterCsEXCEPT(RpgParser::CsEXCEPTContext * /*ctx*/) override { }
  virtual void exitCsEXCEPT(RpgParser::CsEXCEPTContext * /*ctx*/) override { }

  virtual void enterCsEXFMT(RpgParser::CsEXFMTContext * /*ctx*/) override { }
  virtual void exitCsEXFMT(RpgParser::CsEXFMTContext * /*ctx*/) override { }

  virtual void enterCsEXSR(RpgParser::CsEXSRContext * /*ctx*/) override { }
  virtual void exitCsEXSR(RpgParser::CsEXSRContext * /*ctx*/) override { }

  virtual void enterCsEXTRCT(RpgParser::CsEXTRCTContext * /*ctx*/) override { }
  virtual void exitCsEXTRCT(RpgParser::CsEXTRCTContext * /*ctx*/) override { }

  virtual void enterCsFEOD(RpgParser::CsFEODContext * /*ctx*/) override { }
  virtual void exitCsFEOD(RpgParser::CsFEODContext * /*ctx*/) override { }

  virtual void enterCsFOR(RpgParser::CsFORContext * /*ctx*/) override { }
  virtual void exitCsFOR(RpgParser::CsFORContext * /*ctx*/) override { }

  virtual void enterByExpression(RpgParser::ByExpressionContext * /*ctx*/) override { }
  virtual void exitByExpression(RpgParser::ByExpressionContext * /*ctx*/) override { }

  virtual void enterStopExpression(RpgParser::StopExpressionContext * /*ctx*/) override { }
  virtual void exitStopExpression(RpgParser::StopExpressionContext * /*ctx*/) override { }

  virtual void enterCsFORCE(RpgParser::CsFORCEContext * /*ctx*/) override { }
  virtual void exitCsFORCE(RpgParser::CsFORCEContext * /*ctx*/) override { }

  virtual void enterCsGOTO(RpgParser::CsGOTOContext * /*ctx*/) override { }
  virtual void exitCsGOTO(RpgParser::CsGOTOContext * /*ctx*/) override { }

  virtual void enterCsIF(RpgParser::CsIFContext * /*ctx*/) override { }
  virtual void exitCsIF(RpgParser::CsIFContext * /*ctx*/) override { }

  virtual void enterCsIFEQ(RpgParser::CsIFEQContext * /*ctx*/) override { }
  virtual void exitCsIFEQ(RpgParser::CsIFEQContext * /*ctx*/) override { }

  virtual void enterCsIFNE(RpgParser::CsIFNEContext * /*ctx*/) override { }
  virtual void exitCsIFNE(RpgParser::CsIFNEContext * /*ctx*/) override { }

  virtual void enterCsIFLE(RpgParser::CsIFLEContext * /*ctx*/) override { }
  virtual void exitCsIFLE(RpgParser::CsIFLEContext * /*ctx*/) override { }

  virtual void enterCsIFLT(RpgParser::CsIFLTContext * /*ctx*/) override { }
  virtual void exitCsIFLT(RpgParser::CsIFLTContext * /*ctx*/) override { }

  virtual void enterCsIFGE(RpgParser::CsIFGEContext * /*ctx*/) override { }
  virtual void exitCsIFGE(RpgParser::CsIFGEContext * /*ctx*/) override { }

  virtual void enterCsIFGT(RpgParser::CsIFGTContext * /*ctx*/) override { }
  virtual void exitCsIFGT(RpgParser::CsIFGTContext * /*ctx*/) override { }

  virtual void enterCsIN(RpgParser::CsINContext * /*ctx*/) override { }
  virtual void exitCsIN(RpgParser::CsINContext * /*ctx*/) override { }

  virtual void enterCsITER(RpgParser::CsITERContext * /*ctx*/) override { }
  virtual void exitCsITER(RpgParser::CsITERContext * /*ctx*/) override { }

  virtual void enterCsKLIST(RpgParser::CsKLISTContext * /*ctx*/) override { }
  virtual void exitCsKLIST(RpgParser::CsKLISTContext * /*ctx*/) override { }

  virtual void enterCsKFLD(RpgParser::CsKFLDContext * /*ctx*/) override { }
  virtual void exitCsKFLD(RpgParser::CsKFLDContext * /*ctx*/) override { }

  virtual void enterCsLEAVE(RpgParser::CsLEAVEContext * /*ctx*/) override { }
  virtual void exitCsLEAVE(RpgParser::CsLEAVEContext * /*ctx*/) override { }

  virtual void enterCsLEAVESR(RpgParser::CsLEAVESRContext * /*ctx*/) override { }
  virtual void exitCsLEAVESR(RpgParser::CsLEAVESRContext * /*ctx*/) override { }

  virtual void enterCsLOOKUP(RpgParser::CsLOOKUPContext * /*ctx*/) override { }
  virtual void exitCsLOOKUP(RpgParser::CsLOOKUPContext * /*ctx*/) override { }

  virtual void enterCsMHHZO(RpgParser::CsMHHZOContext * /*ctx*/) override { }
  virtual void exitCsMHHZO(RpgParser::CsMHHZOContext * /*ctx*/) override { }

  virtual void enterCsMHLZO(RpgParser::CsMHLZOContext * /*ctx*/) override { }
  virtual void exitCsMHLZO(RpgParser::CsMHLZOContext * /*ctx*/) override { }

  virtual void enterCsMLHZO(RpgParser::CsMLHZOContext * /*ctx*/) override { }
  virtual void exitCsMLHZO(RpgParser::CsMLHZOContext * /*ctx*/) override { }

  virtual void enterCsMLLZO(RpgParser::CsMLLZOContext * /*ctx*/) override { }
  virtual void exitCsMLLZO(RpgParser::CsMLLZOContext * /*ctx*/) override { }

  virtual void enterCsMONITOR(RpgParser::CsMONITORContext * /*ctx*/) override { }
  virtual void exitCsMONITOR(RpgParser::CsMONITORContext * /*ctx*/) override { }

  virtual void enterCsMOVE(RpgParser::CsMOVEContext * /*ctx*/) override { }
  virtual void exitCsMOVE(RpgParser::CsMOVEContext * /*ctx*/) override { }

  virtual void enterCsMOVEA(RpgParser::CsMOVEAContext * /*ctx*/) override { }
  virtual void exitCsMOVEA(RpgParser::CsMOVEAContext * /*ctx*/) override { }

  virtual void enterCsMOVEL(RpgParser::CsMOVELContext * /*ctx*/) override { }
  virtual void exitCsMOVEL(RpgParser::CsMOVELContext * /*ctx*/) override { }

  virtual void enterCsMULT(RpgParser::CsMULTContext * /*ctx*/) override { }
  virtual void exitCsMULT(RpgParser::CsMULTContext * /*ctx*/) override { }

  virtual void enterCsMVR(RpgParser::CsMVRContext * /*ctx*/) override { }
  virtual void exitCsMVR(RpgParser::CsMVRContext * /*ctx*/) override { }

  virtual void enterCsNEXT(RpgParser::CsNEXTContext * /*ctx*/) override { }
  virtual void exitCsNEXT(RpgParser::CsNEXTContext * /*ctx*/) override { }

  virtual void enterCsOCCUR(RpgParser::CsOCCURContext * /*ctx*/) override { }
  virtual void exitCsOCCUR(RpgParser::CsOCCURContext * /*ctx*/) override { }

  virtual void enterCsON_ERROR(RpgParser::CsON_ERRORContext * /*ctx*/) override { }
  virtual void exitCsON_ERROR(RpgParser::CsON_ERRORContext * /*ctx*/) override { }

  virtual void enterOnErrorCode(RpgParser::OnErrorCodeContext * /*ctx*/) override { }
  virtual void exitOnErrorCode(RpgParser::OnErrorCodeContext * /*ctx*/) override { }

  virtual void enterCsOPEN(RpgParser::CsOPENContext * /*ctx*/) override { }
  virtual void exitCsOPEN(RpgParser::CsOPENContext * /*ctx*/) override { }

  virtual void enterCsOREQ(RpgParser::CsOREQContext * /*ctx*/) override { }
  virtual void exitCsOREQ(RpgParser::CsOREQContext * /*ctx*/) override { }

  virtual void enterCsORNE(RpgParser::CsORNEContext * /*ctx*/) override { }
  virtual void exitCsORNE(RpgParser::CsORNEContext * /*ctx*/) override { }

  virtual void enterCsORLE(RpgParser::CsORLEContext * /*ctx*/) override { }
  virtual void exitCsORLE(RpgParser::CsORLEContext * /*ctx*/) override { }

  virtual void enterCsORLT(RpgParser::CsORLTContext * /*ctx*/) override { }
  virtual void exitCsORLT(RpgParser::CsORLTContext * /*ctx*/) override { }

  virtual void enterCsORGE(RpgParser::CsORGEContext * /*ctx*/) override { }
  virtual void exitCsORGE(RpgParser::CsORGEContext * /*ctx*/) override { }

  virtual void enterCsORGT(RpgParser::CsORGTContext * /*ctx*/) override { }
  virtual void exitCsORGT(RpgParser::CsORGTContext * /*ctx*/) override { }

  virtual void enterCsOTHER(RpgParser::CsOTHERContext * /*ctx*/) override { }
  virtual void exitCsOTHER(RpgParser::CsOTHERContext * /*ctx*/) override { }

  virtual void enterCsOUT(RpgParser::CsOUTContext * /*ctx*/) override { }
  virtual void exitCsOUT(RpgParser::CsOUTContext * /*ctx*/) override { }

  virtual void enterCsPARM(RpgParser::CsPARMContext * /*ctx*/) override { }
  virtual void exitCsPARM(RpgParser::CsPARMContext * /*ctx*/) override { }

  virtual void enterCsPLIST(RpgParser::CsPLISTContext * /*ctx*/) override { }
  virtual void exitCsPLIST(RpgParser::CsPLISTContext * /*ctx*/) override { }

  virtual void enterCsPOST(RpgParser::CsPOSTContext * /*ctx*/) override { }
  virtual void exitCsPOST(RpgParser::CsPOSTContext * /*ctx*/) override { }

  virtual void enterCsREAD(RpgParser::CsREADContext * /*ctx*/) override { }
  virtual void exitCsREAD(RpgParser::CsREADContext * /*ctx*/) override { }

  virtual void enterCsREADC(RpgParser::CsREADCContext * /*ctx*/) override { }
  virtual void exitCsREADC(RpgParser::CsREADCContext * /*ctx*/) override { }

  virtual void enterCsREADE(RpgParser::CsREADEContext * /*ctx*/) override { }
  virtual void exitCsREADE(RpgParser::CsREADEContext * /*ctx*/) override { }

  virtual void enterCsREADP(RpgParser::CsREADPContext * /*ctx*/) override { }
  virtual void exitCsREADP(RpgParser::CsREADPContext * /*ctx*/) override { }

  virtual void enterCsREADPE(RpgParser::CsREADPEContext * /*ctx*/) override { }
  virtual void exitCsREADPE(RpgParser::CsREADPEContext * /*ctx*/) override { }

  virtual void enterCsREALLOC(RpgParser::CsREALLOCContext * /*ctx*/) override { }
  virtual void exitCsREALLOC(RpgParser::CsREALLOCContext * /*ctx*/) override { }

  virtual void enterCsREL(RpgParser::CsRELContext * /*ctx*/) override { }
  virtual void exitCsREL(RpgParser::CsRELContext * /*ctx*/) override { }

  virtual void enterCsRESET(RpgParser::CsRESETContext * /*ctx*/) override { }
  virtual void exitCsRESET(RpgParser::CsRESETContext * /*ctx*/) override { }

  virtual void enterCsRETURN(RpgParser::CsRETURNContext * /*ctx*/) override { }
  virtual void exitCsRETURN(RpgParser::CsRETURNContext * /*ctx*/) override { }

  virtual void enterCsROLBK(RpgParser::CsROLBKContext * /*ctx*/) override { }
  virtual void exitCsROLBK(RpgParser::CsROLBKContext * /*ctx*/) override { }

  virtual void enterCsSCAN(RpgParser::CsSCANContext * /*ctx*/) override { }
  virtual void exitCsSCAN(RpgParser::CsSCANContext * /*ctx*/) override { }

  virtual void enterCsSELECT(RpgParser::CsSELECTContext * /*ctx*/) override { }
  virtual void exitCsSELECT(RpgParser::CsSELECTContext * /*ctx*/) override { }

  virtual void enterCsSETGT(RpgParser::CsSETGTContext * /*ctx*/) override { }
  virtual void exitCsSETGT(RpgParser::CsSETGTContext * /*ctx*/) override { }

  virtual void enterCsSETLL(RpgParser::CsSETLLContext * /*ctx*/) override { }
  virtual void exitCsSETLL(RpgParser::CsSETLLContext * /*ctx*/) override { }

  virtual void enterCsSETOFF(RpgParser::CsSETOFFContext * /*ctx*/) override { }
  virtual void exitCsSETOFF(RpgParser::CsSETOFFContext * /*ctx*/) override { }

  virtual void enterCsSETON(RpgParser::CsSETONContext * /*ctx*/) override { }
  virtual void exitCsSETON(RpgParser::CsSETONContext * /*ctx*/) override { }

  virtual void enterCsSHTDN(RpgParser::CsSHTDNContext * /*ctx*/) override { }
  virtual void exitCsSHTDN(RpgParser::CsSHTDNContext * /*ctx*/) override { }

  virtual void enterCsSORTA(RpgParser::CsSORTAContext * /*ctx*/) override { }
  virtual void exitCsSORTA(RpgParser::CsSORTAContext * /*ctx*/) override { }

  virtual void enterCsSQRT(RpgParser::CsSQRTContext * /*ctx*/) override { }
  virtual void exitCsSQRT(RpgParser::CsSQRTContext * /*ctx*/) override { }

  virtual void enterCsSUB(RpgParser::CsSUBContext * /*ctx*/) override { }
  virtual void exitCsSUB(RpgParser::CsSUBContext * /*ctx*/) override { }

  virtual void enterCsSUBDUR(RpgParser::CsSUBDURContext * /*ctx*/) override { }
  virtual void exitCsSUBDUR(RpgParser::CsSUBDURContext * /*ctx*/) override { }

  virtual void enterCsSUBST(RpgParser::CsSUBSTContext * /*ctx*/) override { }
  virtual void exitCsSUBST(RpgParser::CsSUBSTContext * /*ctx*/) override { }

  virtual void enterCsTAG(RpgParser::CsTAGContext * /*ctx*/) override { }
  virtual void exitCsTAG(RpgParser::CsTAGContext * /*ctx*/) override { }

  virtual void enterCsTEST(RpgParser::CsTESTContext * /*ctx*/) override { }
  virtual void exitCsTEST(RpgParser::CsTESTContext * /*ctx*/) override { }

  virtual void enterCsTESTB(RpgParser::CsTESTBContext * /*ctx*/) override { }
  virtual void exitCsTESTB(RpgParser::CsTESTBContext * /*ctx*/) override { }

  virtual void enterCsTESTN(RpgParser::CsTESTNContext * /*ctx*/) override { }
  virtual void exitCsTESTN(RpgParser::CsTESTNContext * /*ctx*/) override { }

  virtual void enterCsTESTZ(RpgParser::CsTESTZContext * /*ctx*/) override { }
  virtual void exitCsTESTZ(RpgParser::CsTESTZContext * /*ctx*/) override { }

  virtual void enterCsTIME(RpgParser::CsTIMEContext * /*ctx*/) override { }
  virtual void exitCsTIME(RpgParser::CsTIMEContext * /*ctx*/) override { }

  virtual void enterCsUNLOCK(RpgParser::CsUNLOCKContext * /*ctx*/) override { }
  virtual void exitCsUNLOCK(RpgParser::CsUNLOCKContext * /*ctx*/) override { }

  virtual void enterCsUPDATE(RpgParser::CsUPDATEContext * /*ctx*/) override { }
  virtual void exitCsUPDATE(RpgParser::CsUPDATEContext * /*ctx*/) override { }

  virtual void enterCsWHEN(RpgParser::CsWHENContext * /*ctx*/) override { }
  virtual void exitCsWHEN(RpgParser::CsWHENContext * /*ctx*/) override { }

  virtual void enterCsWHENEQ(RpgParser::CsWHENEQContext * /*ctx*/) override { }
  virtual void exitCsWHENEQ(RpgParser::CsWHENEQContext * /*ctx*/) override { }

  virtual void enterCsWHENNE(RpgParser::CsWHENNEContext * /*ctx*/) override { }
  virtual void exitCsWHENNE(RpgParser::CsWHENNEContext * /*ctx*/) override { }

  virtual void enterCsWHENLE(RpgParser::CsWHENLEContext * /*ctx*/) override { }
  virtual void exitCsWHENLE(RpgParser::CsWHENLEContext * /*ctx*/) override { }

  virtual void enterCsWHENLT(RpgParser::CsWHENLTContext * /*ctx*/) override { }
  virtual void exitCsWHENLT(RpgParser::CsWHENLTContext * /*ctx*/) override { }

  virtual void enterCsWHENGE(RpgParser::CsWHENGEContext * /*ctx*/) override { }
  virtual void exitCsWHENGE(RpgParser::CsWHENGEContext * /*ctx*/) override { }

  virtual void enterCsWHENGT(RpgParser::CsWHENGTContext * /*ctx*/) override { }
  virtual void exitCsWHENGT(RpgParser::CsWHENGTContext * /*ctx*/) override { }

  virtual void enterCsWRITE(RpgParser::CsWRITEContext * /*ctx*/) override { }
  virtual void exitCsWRITE(RpgParser::CsWRITEContext * /*ctx*/) override { }

  virtual void enterCsXFOOT(RpgParser::CsXFOOTContext * /*ctx*/) override { }
  virtual void exitCsXFOOT(RpgParser::CsXFOOTContext * /*ctx*/) override { }

  virtual void enterCsXLATE(RpgParser::CsXLATEContext * /*ctx*/) override { }
  virtual void exitCsXLATE(RpgParser::CsXLATEContext * /*ctx*/) override { }

  virtual void enterCsXML_INTO(RpgParser::CsXML_INTOContext * /*ctx*/) override { }
  virtual void exitCsXML_INTO(RpgParser::CsXML_INTOContext * /*ctx*/) override { }

  virtual void enterCsXML_SAX(RpgParser::CsXML_SAXContext * /*ctx*/) override { }
  virtual void exitCsXML_SAX(RpgParser::CsXML_SAXContext * /*ctx*/) override { }

  virtual void enterCsZ_ADD(RpgParser::CsZ_ADDContext * /*ctx*/) override { }
  virtual void exitCsZ_ADD(RpgParser::CsZ_ADDContext * /*ctx*/) override { }

  virtual void enterCsZ_SUB(RpgParser::CsZ_SUBContext * /*ctx*/) override { }
  virtual void exitCsZ_SUB(RpgParser::CsZ_SUBContext * /*ctx*/) override { }

  virtual void enterCs_operationExtender(RpgParser::Cs_operationExtenderContext * /*ctx*/) override { }
  virtual void exitCs_operationExtender(RpgParser::Cs_operationExtenderContext * /*ctx*/) override { }

  virtual void enterFactor(RpgParser::FactorContext * /*ctx*/) override { }
  virtual void exitFactor(RpgParser::FactorContext * /*ctx*/) override { }

  virtual void enterFactorContent(RpgParser::FactorContentContext * /*ctx*/) override { }
  virtual void exitFactorContent(RpgParser::FactorContentContext * /*ctx*/) override { }

  virtual void enterResultType(RpgParser::ResultTypeContext * /*ctx*/) override { }
  virtual void exitResultType(RpgParser::ResultTypeContext * /*ctx*/) override { }

  virtual void enterCs_fixed_comments(RpgParser::Cs_fixed_commentsContext * /*ctx*/) override { }
  virtual void exitCs_fixed_comments(RpgParser::Cs_fixed_commentsContext * /*ctx*/) override { }

  virtual void enterCspec_fixed_x2(RpgParser::Cspec_fixed_x2Context * /*ctx*/) override { }
  virtual void exitCspec_fixed_x2(RpgParser::Cspec_fixed_x2Context * /*ctx*/) override { }

  virtual void enterCsOperationAndExtendedFactor2(RpgParser::CsOperationAndExtendedFactor2Context * /*ctx*/) override { }
  virtual void exitCsOperationAndExtendedFactor2(RpgParser::CsOperationAndExtendedFactor2Context * /*ctx*/) override { }

  virtual void enterIspec_fixed(RpgParser::Ispec_fixedContext * /*ctx*/) override { }
  virtual void exitIspec_fixed(RpgParser::Ispec_fixedContext * /*ctx*/) override { }

  virtual void enterFieldRecordRelation(RpgParser::FieldRecordRelationContext * /*ctx*/) override { }
  virtual void exitFieldRecordRelation(RpgParser::FieldRecordRelationContext * /*ctx*/) override { }

  virtual void enterFieldIndicator(RpgParser::FieldIndicatorContext * /*ctx*/) override { }
  virtual void exitFieldIndicator(RpgParser::FieldIndicatorContext * /*ctx*/) override { }

  virtual void enterIs_external_rec(RpgParser::Is_external_recContext * /*ctx*/) override { }
  virtual void exitIs_external_rec(RpgParser::Is_external_recContext * /*ctx*/) override { }

  virtual void enterIs_rec(RpgParser::Is_recContext * /*ctx*/) override { }
  virtual void exitIs_rec(RpgParser::Is_recContext * /*ctx*/) override { }

  virtual void enterRecordIdIndicator(RpgParser::RecordIdIndicatorContext * /*ctx*/) override { }
  virtual void exitRecordIdIndicator(RpgParser::RecordIdIndicatorContext * /*ctx*/) override { }

  virtual void enterIs_external_field(RpgParser::Is_external_fieldContext * /*ctx*/) override { }
  virtual void exitIs_external_field(RpgParser::Is_external_fieldContext * /*ctx*/) override { }

  virtual void enterControlLevelIndicator(RpgParser::ControlLevelIndicatorContext * /*ctx*/) override { }
  virtual void exitControlLevelIndicator(RpgParser::ControlLevelIndicatorContext * /*ctx*/) override { }

  virtual void enterMatchingFieldsIndicator(RpgParser::MatchingFieldsIndicatorContext * /*ctx*/) override { }
  virtual void exitMatchingFieldsIndicator(RpgParser::MatchingFieldsIndicatorContext * /*ctx*/) override { }

  virtual void enterHspec_fixed(RpgParser::Hspec_fixedContext * /*ctx*/) override { }
  virtual void exitHspec_fixed(RpgParser::Hspec_fixedContext * /*ctx*/) override { }

  virtual void enterSetDecedit(RpgParser::SetDeceditContext * /*ctx*/) override { }
  virtual void exitSetDecedit(RpgParser::SetDeceditContext * /*ctx*/) override { }

  virtual void enterHspecExpressions(RpgParser::HspecExpressionsContext * /*ctx*/) override { }
  virtual void exitHspecExpressions(RpgParser::HspecExpressionsContext * /*ctx*/) override { }

  virtual void enterHs_decedit_set(RpgParser::Hs_decedit_setContext * /*ctx*/) override { }
  virtual void exitHs_decedit_set(RpgParser::Hs_decedit_setContext * /*ctx*/) override { }

  virtual void enterHs_expression(RpgParser::Hs_expressionContext * /*ctx*/) override { }
  virtual void exitHs_expression(RpgParser::Hs_expressionContext * /*ctx*/) override { }

  virtual void enterHs_parm(RpgParser::Hs_parmContext * /*ctx*/) override { }
  virtual void exitHs_parm(RpgParser::Hs_parmContext * /*ctx*/) override { }

  virtual void enterHs_string(RpgParser::Hs_stringContext * /*ctx*/) override { }
  virtual void exitHs_string(RpgParser::Hs_stringContext * /*ctx*/) override { }

  virtual void enterBlank_line(RpgParser::Blank_lineContext * /*ctx*/) override { }
  virtual void exitBlank_line(RpgParser::Blank_lineContext * /*ctx*/) override { }

  virtual void enterDirective(RpgParser::DirectiveContext * /*ctx*/) override { }
  virtual void exitDirective(RpgParser::DirectiveContext * /*ctx*/) override { }

  virtual void enterSpace_directive(RpgParser::Space_directiveContext * /*ctx*/) override { }
  virtual void exitSpace_directive(RpgParser::Space_directiveContext * /*ctx*/) override { }

  virtual void enterDir_copy(RpgParser::Dir_copyContext * /*ctx*/) override { }
  virtual void exitDir_copy(RpgParser::Dir_copyContext * /*ctx*/) override { }

  virtual void enterDir_include(RpgParser::Dir_includeContext * /*ctx*/) override { }
  virtual void exitDir_include(RpgParser::Dir_includeContext * /*ctx*/) override { }

  virtual void enterDir_if(RpgParser::Dir_ifContext * /*ctx*/) override { }
  virtual void exitDir_if(RpgParser::Dir_ifContext * /*ctx*/) override { }

  virtual void enterDir_elseif(RpgParser::Dir_elseifContext * /*ctx*/) override { }
  virtual void exitDir_elseif(RpgParser::Dir_elseifContext * /*ctx*/) override { }

  virtual void enterDir_else(RpgParser::Dir_elseContext * /*ctx*/) override { }
  virtual void exitDir_else(RpgParser::Dir_elseContext * /*ctx*/) override { }

  virtual void enterDir_endif(RpgParser::Dir_endifContext * /*ctx*/) override { }
  virtual void exitDir_endif(RpgParser::Dir_endifContext * /*ctx*/) override { }

  virtual void enterDir_define(RpgParser::Dir_defineContext * /*ctx*/) override { }
  virtual void exitDir_define(RpgParser::Dir_defineContext * /*ctx*/) override { }

  virtual void enterDir_undefine(RpgParser::Dir_undefineContext * /*ctx*/) override { }
  virtual void exitDir_undefine(RpgParser::Dir_undefineContext * /*ctx*/) override { }

  virtual void enterDir_eof(RpgParser::Dir_eofContext * /*ctx*/) override { }
  virtual void exitDir_eof(RpgParser::Dir_eofContext * /*ctx*/) override { }

  virtual void enterBeginfree_directive(RpgParser::Beginfree_directiveContext * /*ctx*/) override { }
  virtual void exitBeginfree_directive(RpgParser::Beginfree_directiveContext * /*ctx*/) override { }

  virtual void enterEndfree_directive(RpgParser::Endfree_directiveContext * /*ctx*/) override { }
  virtual void exitEndfree_directive(RpgParser::Endfree_directiveContext * /*ctx*/) override { }

  virtual void enterCopyText(RpgParser::CopyTextContext * /*ctx*/) override { }
  virtual void exitCopyText(RpgParser::CopyTextContext * /*ctx*/) override { }

  virtual void enterTrailing_ws(RpgParser::Trailing_wsContext * /*ctx*/) override { }
  virtual void exitTrailing_ws(RpgParser::Trailing_wsContext * /*ctx*/) override { }

  virtual void enterTitle_directive(RpgParser::Title_directiveContext * /*ctx*/) override { }
  virtual void exitTitle_directive(RpgParser::Title_directiveContext * /*ctx*/) override { }

  virtual void enterTitle_text(RpgParser::Title_textContext * /*ctx*/) override { }
  virtual void exitTitle_text(RpgParser::Title_textContext * /*ctx*/) override { }

  virtual void enterOp(RpgParser::OpContext * /*ctx*/) override { }
  virtual void exitOp(RpgParser::OpContext * /*ctx*/) override { }

  virtual void enterOp_acq(RpgParser::Op_acqContext * /*ctx*/) override { }
  virtual void exitOp_acq(RpgParser::Op_acqContext * /*ctx*/) override { }

  virtual void enterOp_callp(RpgParser::Op_callpContext * /*ctx*/) override { }
  virtual void exitOp_callp(RpgParser::Op_callpContext * /*ctx*/) override { }

  virtual void enterOp_chain(RpgParser::Op_chainContext * /*ctx*/) override { }
  virtual void exitOp_chain(RpgParser::Op_chainContext * /*ctx*/) override { }

  virtual void enterOp_clear(RpgParser::Op_clearContext * /*ctx*/) override { }
  virtual void exitOp_clear(RpgParser::Op_clearContext * /*ctx*/) override { }

  virtual void enterOp_close(RpgParser::Op_closeContext * /*ctx*/) override { }
  virtual void exitOp_close(RpgParser::Op_closeContext * /*ctx*/) override { }

  virtual void enterOp_commit(RpgParser::Op_commitContext * /*ctx*/) override { }
  virtual void exitOp_commit(RpgParser::Op_commitContext * /*ctx*/) override { }

  virtual void enterOp_dealloc(RpgParser::Op_deallocContext * /*ctx*/) override { }
  virtual void exitOp_dealloc(RpgParser::Op_deallocContext * /*ctx*/) override { }

  virtual void enterOp_delete(RpgParser::Op_deleteContext * /*ctx*/) override { }
  virtual void exitOp_delete(RpgParser::Op_deleteContext * /*ctx*/) override { }

  virtual void enterOp_dou(RpgParser::Op_douContext * /*ctx*/) override { }
  virtual void exitOp_dou(RpgParser::Op_douContext * /*ctx*/) override { }

  virtual void enterOp_dow(RpgParser::Op_dowContext * /*ctx*/) override { }
  virtual void exitOp_dow(RpgParser::Op_dowContext * /*ctx*/) override { }

  virtual void enterOp_dsply(RpgParser::Op_dsplyContext * /*ctx*/) override { }
  virtual void exitOp_dsply(RpgParser::Op_dsplyContext * /*ctx*/) override { }

  virtual void enterOp_dump(RpgParser::Op_dumpContext * /*ctx*/) override { }
  virtual void exitOp_dump(RpgParser::Op_dumpContext * /*ctx*/) override { }

  virtual void enterOp_else(RpgParser::Op_elseContext * /*ctx*/) override { }
  virtual void exitOp_else(RpgParser::Op_elseContext * /*ctx*/) override { }

  virtual void enterOp_elseif(RpgParser::Op_elseifContext * /*ctx*/) override { }
  virtual void exitOp_elseif(RpgParser::Op_elseifContext * /*ctx*/) override { }

  virtual void enterOp_enddo(RpgParser::Op_enddoContext * /*ctx*/) override { }
  virtual void exitOp_enddo(RpgParser::Op_enddoContext * /*ctx*/) override { }

  virtual void enterOp_endfor(RpgParser::Op_endforContext * /*ctx*/) override { }
  virtual void exitOp_endfor(RpgParser::Op_endforContext * /*ctx*/) override { }

  virtual void enterOp_endif(RpgParser::Op_endifContext * /*ctx*/) override { }
  virtual void exitOp_endif(RpgParser::Op_endifContext * /*ctx*/) override { }

  virtual void enterOp_endmon(RpgParser::Op_endmonContext * /*ctx*/) override { }
  virtual void exitOp_endmon(RpgParser::Op_endmonContext * /*ctx*/) override { }

  virtual void enterOp_endsl(RpgParser::Op_endslContext * /*ctx*/) override { }
  virtual void exitOp_endsl(RpgParser::Op_endslContext * /*ctx*/) override { }

  virtual void enterOp_eval(RpgParser::Op_evalContext * /*ctx*/) override { }
  virtual void exitOp_eval(RpgParser::Op_evalContext * /*ctx*/) override { }

  virtual void enterOp_evalr(RpgParser::Op_evalrContext * /*ctx*/) override { }
  virtual void exitOp_evalr(RpgParser::Op_evalrContext * /*ctx*/) override { }

  virtual void enterOp_eval_corr(RpgParser::Op_eval_corrContext * /*ctx*/) override { }
  virtual void exitOp_eval_corr(RpgParser::Op_eval_corrContext * /*ctx*/) override { }

  virtual void enterOp_except(RpgParser::Op_exceptContext * /*ctx*/) override { }
  virtual void exitOp_except(RpgParser::Op_exceptContext * /*ctx*/) override { }

  virtual void enterOp_exfmt(RpgParser::Op_exfmtContext * /*ctx*/) override { }
  virtual void exitOp_exfmt(RpgParser::Op_exfmtContext * /*ctx*/) override { }

  virtual void enterOp_exsr(RpgParser::Op_exsrContext * /*ctx*/) override { }
  virtual void exitOp_exsr(RpgParser::Op_exsrContext * /*ctx*/) override { }

  virtual void enterOp_feod(RpgParser::Op_feodContext * /*ctx*/) override { }
  virtual void exitOp_feod(RpgParser::Op_feodContext * /*ctx*/) override { }

  virtual void enterOp_for(RpgParser::Op_forContext * /*ctx*/) override { }
  virtual void exitOp_for(RpgParser::Op_forContext * /*ctx*/) override { }

  virtual void enterOp_force(RpgParser::Op_forceContext * /*ctx*/) override { }
  virtual void exitOp_force(RpgParser::Op_forceContext * /*ctx*/) override { }

  virtual void enterOp_if(RpgParser::Op_ifContext * /*ctx*/) override { }
  virtual void exitOp_if(RpgParser::Op_ifContext * /*ctx*/) override { }

  virtual void enterOp_in(RpgParser::Op_inContext * /*ctx*/) override { }
  virtual void exitOp_in(RpgParser::Op_inContext * /*ctx*/) override { }

  virtual void enterOp_iter(RpgParser::Op_iterContext * /*ctx*/) override { }
  virtual void exitOp_iter(RpgParser::Op_iterContext * /*ctx*/) override { }

  virtual void enterOp_leave(RpgParser::Op_leaveContext * /*ctx*/) override { }
  virtual void exitOp_leave(RpgParser::Op_leaveContext * /*ctx*/) override { }

  virtual void enterOp_leavesr(RpgParser::Op_leavesrContext * /*ctx*/) override { }
  virtual void exitOp_leavesr(RpgParser::Op_leavesrContext * /*ctx*/) override { }

  virtual void enterOp_monitor(RpgParser::Op_monitorContext * /*ctx*/) override { }
  virtual void exitOp_monitor(RpgParser::Op_monitorContext * /*ctx*/) override { }

  virtual void enterOp_next(RpgParser::Op_nextContext * /*ctx*/) override { }
  virtual void exitOp_next(RpgParser::Op_nextContext * /*ctx*/) override { }

  virtual void enterOp_on_error(RpgParser::Op_on_errorContext * /*ctx*/) override { }
  virtual void exitOp_on_error(RpgParser::Op_on_errorContext * /*ctx*/) override { }

  virtual void enterOp_open(RpgParser::Op_openContext * /*ctx*/) override { }
  virtual void exitOp_open(RpgParser::Op_openContext * /*ctx*/) override { }

  virtual void enterOp_other(RpgParser::Op_otherContext * /*ctx*/) override { }
  virtual void exitOp_other(RpgParser::Op_otherContext * /*ctx*/) override { }

  virtual void enterOp_out(RpgParser::Op_outContext * /*ctx*/) override { }
  virtual void exitOp_out(RpgParser::Op_outContext * /*ctx*/) override { }

  virtual void enterOp_post(RpgParser::Op_postContext * /*ctx*/) override { }
  virtual void exitOp_post(RpgParser::Op_postContext * /*ctx*/) override { }

  virtual void enterOp_read(RpgParser::Op_readContext * /*ctx*/) override { }
  virtual void exitOp_read(RpgParser::Op_readContext * /*ctx*/) override { }

  virtual void enterOp_readc(RpgParser::Op_readcContext * /*ctx*/) override { }
  virtual void exitOp_readc(RpgParser::Op_readcContext * /*ctx*/) override { }

  virtual void enterOp_reade(RpgParser::Op_readeContext * /*ctx*/) override { }
  virtual void exitOp_reade(RpgParser::Op_readeContext * /*ctx*/) override { }

  virtual void enterOp_readp(RpgParser::Op_readpContext * /*ctx*/) override { }
  virtual void exitOp_readp(RpgParser::Op_readpContext * /*ctx*/) override { }

  virtual void enterOp_readpe(RpgParser::Op_readpeContext * /*ctx*/) override { }
  virtual void exitOp_readpe(RpgParser::Op_readpeContext * /*ctx*/) override { }

  virtual void enterOp_rel(RpgParser::Op_relContext * /*ctx*/) override { }
  virtual void exitOp_rel(RpgParser::Op_relContext * /*ctx*/) override { }

  virtual void enterOp_reset2(RpgParser::Op_reset2Context * /*ctx*/) override { }
  virtual void exitOp_reset2(RpgParser::Op_reset2Context * /*ctx*/) override { }

  virtual void enterOp_reset(RpgParser::Op_resetContext * /*ctx*/) override { }
  virtual void exitOp_reset(RpgParser::Op_resetContext * /*ctx*/) override { }

  virtual void enterOp_return(RpgParser::Op_returnContext * /*ctx*/) override { }
  virtual void exitOp_return(RpgParser::Op_returnContext * /*ctx*/) override { }

  virtual void enterOp_rolbk(RpgParser::Op_rolbkContext * /*ctx*/) override { }
  virtual void exitOp_rolbk(RpgParser::Op_rolbkContext * /*ctx*/) override { }

  virtual void enterOp_select(RpgParser::Op_selectContext * /*ctx*/) override { }
  virtual void exitOp_select(RpgParser::Op_selectContext * /*ctx*/) override { }

  virtual void enterOp_setgt(RpgParser::Op_setgtContext * /*ctx*/) override { }
  virtual void exitOp_setgt(RpgParser::Op_setgtContext * /*ctx*/) override { }

  virtual void enterOp_setll(RpgParser::Op_setllContext * /*ctx*/) override { }
  virtual void exitOp_setll(RpgParser::Op_setllContext * /*ctx*/) override { }

  virtual void enterOp_sorta(RpgParser::Op_sortaContext * /*ctx*/) override { }
  virtual void exitOp_sorta(RpgParser::Op_sortaContext * /*ctx*/) override { }

  virtual void enterOp_test(RpgParser::Op_testContext * /*ctx*/) override { }
  virtual void exitOp_test(RpgParser::Op_testContext * /*ctx*/) override { }

  virtual void enterOp_unlock(RpgParser::Op_unlockContext * /*ctx*/) override { }
  virtual void exitOp_unlock(RpgParser::Op_unlockContext * /*ctx*/) override { }

  virtual void enterOp_update(RpgParser::Op_updateContext * /*ctx*/) override { }
  virtual void exitOp_update(RpgParser::Op_updateContext * /*ctx*/) override { }

  virtual void enterOp_when(RpgParser::Op_whenContext * /*ctx*/) override { }
  virtual void exitOp_when(RpgParser::Op_whenContext * /*ctx*/) override { }

  virtual void enterOp_write(RpgParser::Op_writeContext * /*ctx*/) override { }
  virtual void exitOp_write(RpgParser::Op_writeContext * /*ctx*/) override { }

  virtual void enterOp_xml_into(RpgParser::Op_xml_intoContext * /*ctx*/) override { }
  virtual void exitOp_xml_into(RpgParser::Op_xml_intoContext * /*ctx*/) override { }

  virtual void enterOp_xml_sax(RpgParser::Op_xml_saxContext * /*ctx*/) override { }
  virtual void exitOp_xml_sax(RpgParser::Op_xml_saxContext * /*ctx*/) override { }

  virtual void enterSearch_arg(RpgParser::Search_argContext * /*ctx*/) override { }
  virtual void exitSearch_arg(RpgParser::Search_argContext * /*ctx*/) override { }

  virtual void enterOp_code(RpgParser::Op_codeContext * /*ctx*/) override { }
  virtual void exitOp_code(RpgParser::Op_codeContext * /*ctx*/) override { }

  virtual void enterBif(RpgParser::BifContext * /*ctx*/) override { }
  virtual void exitBif(RpgParser::BifContext * /*ctx*/) override { }

  virtual void enterOptargs(RpgParser::OptargsContext * /*ctx*/) override { }
  virtual void exitOptargs(RpgParser::OptargsContext * /*ctx*/) override { }

  virtual void enterBif_charformat(RpgParser::Bif_charformatContext * /*ctx*/) override { }
  virtual void exitBif_charformat(RpgParser::Bif_charformatContext * /*ctx*/) override { }

  virtual void enterBif_dateformat(RpgParser::Bif_dateformatContext * /*ctx*/) override { }
  virtual void exitBif_dateformat(RpgParser::Bif_dateformatContext * /*ctx*/) override { }

  virtual void enterBif_timeformat(RpgParser::Bif_timeformatContext * /*ctx*/) override { }
  virtual void exitBif_timeformat(RpgParser::Bif_timeformatContext * /*ctx*/) override { }

  virtual void enterBif_editccurrency(RpgParser::Bif_editccurrencyContext * /*ctx*/) override { }
  virtual void exitBif_editccurrency(RpgParser::Bif_editccurrencyContext * /*ctx*/) override { }

  virtual void enterBif_lookupargs(RpgParser::Bif_lookupargsContext * /*ctx*/) override { }
  virtual void exitBif_lookupargs(RpgParser::Bif_lookupargsContext * /*ctx*/) override { }

  virtual void enterDurationCode(RpgParser::DurationCodeContext * /*ctx*/) override { }
  virtual void exitDurationCode(RpgParser::DurationCodeContext * /*ctx*/) override { }

  virtual void enterBif_timestampargs(RpgParser::Bif_timestampargsContext * /*ctx*/) override { }
  virtual void exitBif_timestampargs(RpgParser::Bif_timestampargsContext * /*ctx*/) override { }

  virtual void enterBif_tlookupargs(RpgParser::Bif_tlookupargsContext * /*ctx*/) override { }
  virtual void exitBif_tlookupargs(RpgParser::Bif_tlookupargsContext * /*ctx*/) override { }

  virtual void enterBif_abs(RpgParser::Bif_absContext * /*ctx*/) override { }
  virtual void exitBif_abs(RpgParser::Bif_absContext * /*ctx*/) override { }

  virtual void enterBif_addr(RpgParser::Bif_addrContext * /*ctx*/) override { }
  virtual void exitBif_addr(RpgParser::Bif_addrContext * /*ctx*/) override { }

  virtual void enterBif_alloc(RpgParser::Bif_allocContext * /*ctx*/) override { }
  virtual void exitBif_alloc(RpgParser::Bif_allocContext * /*ctx*/) override { }

  virtual void enterBif_bitand(RpgParser::Bif_bitandContext * /*ctx*/) override { }
  virtual void exitBif_bitand(RpgParser::Bif_bitandContext * /*ctx*/) override { }

  virtual void enterBif_bitnot(RpgParser::Bif_bitnotContext * /*ctx*/) override { }
  virtual void exitBif_bitnot(RpgParser::Bif_bitnotContext * /*ctx*/) override { }

  virtual void enterBif_bitor(RpgParser::Bif_bitorContext * /*ctx*/) override { }
  virtual void exitBif_bitor(RpgParser::Bif_bitorContext * /*ctx*/) override { }

  virtual void enterBif_bitxor(RpgParser::Bif_bitxorContext * /*ctx*/) override { }
  virtual void exitBif_bitxor(RpgParser::Bif_bitxorContext * /*ctx*/) override { }

  virtual void enterBif_char(RpgParser::Bif_charContext * /*ctx*/) override { }
  virtual void exitBif_char(RpgParser::Bif_charContext * /*ctx*/) override { }

  virtual void enterBif_check(RpgParser::Bif_checkContext * /*ctx*/) override { }
  virtual void exitBif_check(RpgParser::Bif_checkContext * /*ctx*/) override { }

  virtual void enterBif_checkr(RpgParser::Bif_checkrContext * /*ctx*/) override { }
  virtual void exitBif_checkr(RpgParser::Bif_checkrContext * /*ctx*/) override { }

  virtual void enterBif_date(RpgParser::Bif_dateContext * /*ctx*/) override { }
  virtual void exitBif_date(RpgParser::Bif_dateContext * /*ctx*/) override { }

  virtual void enterBif_days(RpgParser::Bif_daysContext * /*ctx*/) override { }
  virtual void exitBif_days(RpgParser::Bif_daysContext * /*ctx*/) override { }

  virtual void enterBif_dec(RpgParser::Bif_decContext * /*ctx*/) override { }
  virtual void exitBif_dec(RpgParser::Bif_decContext * /*ctx*/) override { }

  virtual void enterBif_dech(RpgParser::Bif_dechContext * /*ctx*/) override { }
  virtual void exitBif_dech(RpgParser::Bif_dechContext * /*ctx*/) override { }

  virtual void enterBif_decpos(RpgParser::Bif_decposContext * /*ctx*/) override { }
  virtual void exitBif_decpos(RpgParser::Bif_decposContext * /*ctx*/) override { }

  virtual void enterBif_diff(RpgParser::Bif_diffContext * /*ctx*/) override { }
  virtual void exitBif_diff(RpgParser::Bif_diffContext * /*ctx*/) override { }

  virtual void enterBif_div(RpgParser::Bif_divContext * /*ctx*/) override { }
  virtual void exitBif_div(RpgParser::Bif_divContext * /*ctx*/) override { }

  virtual void enterBif_editc(RpgParser::Bif_editcContext * /*ctx*/) override { }
  virtual void exitBif_editc(RpgParser::Bif_editcContext * /*ctx*/) override { }

  virtual void enterBif_editflt(RpgParser::Bif_editfltContext * /*ctx*/) override { }
  virtual void exitBif_editflt(RpgParser::Bif_editfltContext * /*ctx*/) override { }

  virtual void enterBif_editw(RpgParser::Bif_editwContext * /*ctx*/) override { }
  virtual void exitBif_editw(RpgParser::Bif_editwContext * /*ctx*/) override { }

  virtual void enterBif_elem(RpgParser::Bif_elemContext * /*ctx*/) override { }
  virtual void exitBif_elem(RpgParser::Bif_elemContext * /*ctx*/) override { }

  virtual void enterBif_eof(RpgParser::Bif_eofContext * /*ctx*/) override { }
  virtual void exitBif_eof(RpgParser::Bif_eofContext * /*ctx*/) override { }

  virtual void enterBif_equal(RpgParser::Bif_equalContext * /*ctx*/) override { }
  virtual void exitBif_equal(RpgParser::Bif_equalContext * /*ctx*/) override { }

  virtual void enterBif_error(RpgParser::Bif_errorContext * /*ctx*/) override { }
  virtual void exitBif_error(RpgParser::Bif_errorContext * /*ctx*/) override { }

  virtual void enterBif_fields(RpgParser::Bif_fieldsContext * /*ctx*/) override { }
  virtual void exitBif_fields(RpgParser::Bif_fieldsContext * /*ctx*/) override { }

  virtual void enterBif_float(RpgParser::Bif_floatContext * /*ctx*/) override { }
  virtual void exitBif_float(RpgParser::Bif_floatContext * /*ctx*/) override { }

  virtual void enterBif_found(RpgParser::Bif_foundContext * /*ctx*/) override { }
  virtual void exitBif_found(RpgParser::Bif_foundContext * /*ctx*/) override { }

  virtual void enterBif_graph(RpgParser::Bif_graphContext * /*ctx*/) override { }
  virtual void exitBif_graph(RpgParser::Bif_graphContext * /*ctx*/) override { }

  virtual void enterBif_handler(RpgParser::Bif_handlerContext * /*ctx*/) override { }
  virtual void exitBif_handler(RpgParser::Bif_handlerContext * /*ctx*/) override { }

  virtual void enterBif_hours(RpgParser::Bif_hoursContext * /*ctx*/) override { }
  virtual void exitBif_hours(RpgParser::Bif_hoursContext * /*ctx*/) override { }

  virtual void enterBif_int(RpgParser::Bif_intContext * /*ctx*/) override { }
  virtual void exitBif_int(RpgParser::Bif_intContext * /*ctx*/) override { }

  virtual void enterBif_inth(RpgParser::Bif_inthContext * /*ctx*/) override { }
  virtual void exitBif_inth(RpgParser::Bif_inthContext * /*ctx*/) override { }

  virtual void enterBif_kds(RpgParser::Bif_kdsContext * /*ctx*/) override { }
  virtual void exitBif_kds(RpgParser::Bif_kdsContext * /*ctx*/) override { }

  virtual void enterBif_len(RpgParser::Bif_lenContext * /*ctx*/) override { }
  virtual void exitBif_len(RpgParser::Bif_lenContext * /*ctx*/) override { }

  virtual void enterBif_lookup(RpgParser::Bif_lookupContext * /*ctx*/) override { }
  virtual void exitBif_lookup(RpgParser::Bif_lookupContext * /*ctx*/) override { }

  virtual void enterBif_lookuplt(RpgParser::Bif_lookupltContext * /*ctx*/) override { }
  virtual void exitBif_lookuplt(RpgParser::Bif_lookupltContext * /*ctx*/) override { }

  virtual void enterBif_lookuple(RpgParser::Bif_lookupleContext * /*ctx*/) override { }
  virtual void exitBif_lookuple(RpgParser::Bif_lookupleContext * /*ctx*/) override { }

  virtual void enterBif_lookupgt(RpgParser::Bif_lookupgtContext * /*ctx*/) override { }
  virtual void exitBif_lookupgt(RpgParser::Bif_lookupgtContext * /*ctx*/) override { }

  virtual void enterBif_lookupge(RpgParser::Bif_lookupgeContext * /*ctx*/) override { }
  virtual void exitBif_lookupge(RpgParser::Bif_lookupgeContext * /*ctx*/) override { }

  virtual void enterBif_minutes(RpgParser::Bif_minutesContext * /*ctx*/) override { }
  virtual void exitBif_minutes(RpgParser::Bif_minutesContext * /*ctx*/) override { }

  virtual void enterBif_months(RpgParser::Bif_monthsContext * /*ctx*/) override { }
  virtual void exitBif_months(RpgParser::Bif_monthsContext * /*ctx*/) override { }

  virtual void enterBif_mseconds(RpgParser::Bif_msecondsContext * /*ctx*/) override { }
  virtual void exitBif_mseconds(RpgParser::Bif_msecondsContext * /*ctx*/) override { }

  virtual void enterBif_nullind(RpgParser::Bif_nullindContext * /*ctx*/) override { }
  virtual void exitBif_nullind(RpgParser::Bif_nullindContext * /*ctx*/) override { }

  virtual void enterBif_occur(RpgParser::Bif_occurContext * /*ctx*/) override { }
  virtual void exitBif_occur(RpgParser::Bif_occurContext * /*ctx*/) override { }

  virtual void enterBif_open(RpgParser::Bif_openContext * /*ctx*/) override { }
  virtual void exitBif_open(RpgParser::Bif_openContext * /*ctx*/) override { }

  virtual void enterBif_paddr(RpgParser::Bif_paddrContext * /*ctx*/) override { }
  virtual void exitBif_paddr(RpgParser::Bif_paddrContext * /*ctx*/) override { }

  virtual void enterBif_parms(RpgParser::Bif_parmsContext * /*ctx*/) override { }
  virtual void exitBif_parms(RpgParser::Bif_parmsContext * /*ctx*/) override { }

  virtual void enterBif_parmnum(RpgParser::Bif_parmnumContext * /*ctx*/) override { }
  virtual void exitBif_parmnum(RpgParser::Bif_parmnumContext * /*ctx*/) override { }

  virtual void enterBif_realloc(RpgParser::Bif_reallocContext * /*ctx*/) override { }
  virtual void exitBif_realloc(RpgParser::Bif_reallocContext * /*ctx*/) override { }

  virtual void enterBif_rem(RpgParser::Bif_remContext * /*ctx*/) override { }
  virtual void exitBif_rem(RpgParser::Bif_remContext * /*ctx*/) override { }

  virtual void enterBif_replace(RpgParser::Bif_replaceContext * /*ctx*/) override { }
  virtual void exitBif_replace(RpgParser::Bif_replaceContext * /*ctx*/) override { }

  virtual void enterBif_scan(RpgParser::Bif_scanContext * /*ctx*/) override { }
  virtual void exitBif_scan(RpgParser::Bif_scanContext * /*ctx*/) override { }

  virtual void enterBif_scanrpl(RpgParser::Bif_scanrplContext * /*ctx*/) override { }
  virtual void exitBif_scanrpl(RpgParser::Bif_scanrplContext * /*ctx*/) override { }

  virtual void enterBif_seconds(RpgParser::Bif_secondsContext * /*ctx*/) override { }
  virtual void exitBif_seconds(RpgParser::Bif_secondsContext * /*ctx*/) override { }

  virtual void enterBif_shtdn(RpgParser::Bif_shtdnContext * /*ctx*/) override { }
  virtual void exitBif_shtdn(RpgParser::Bif_shtdnContext * /*ctx*/) override { }

  virtual void enterBif_size(RpgParser::Bif_sizeContext * /*ctx*/) override { }
  virtual void exitBif_size(RpgParser::Bif_sizeContext * /*ctx*/) override { }

  virtual void enterBif_sqrt(RpgParser::Bif_sqrtContext * /*ctx*/) override { }
  virtual void exitBif_sqrt(RpgParser::Bif_sqrtContext * /*ctx*/) override { }

  virtual void enterBif_status(RpgParser::Bif_statusContext * /*ctx*/) override { }
  virtual void exitBif_status(RpgParser::Bif_statusContext * /*ctx*/) override { }

  virtual void enterBif_str(RpgParser::Bif_strContext * /*ctx*/) override { }
  virtual void exitBif_str(RpgParser::Bif_strContext * /*ctx*/) override { }

  virtual void enterBif_subarr(RpgParser::Bif_subarrContext * /*ctx*/) override { }
  virtual void exitBif_subarr(RpgParser::Bif_subarrContext * /*ctx*/) override { }

  virtual void enterBif_subdt(RpgParser::Bif_subdtContext * /*ctx*/) override { }
  virtual void exitBif_subdt(RpgParser::Bif_subdtContext * /*ctx*/) override { }

  virtual void enterBif_subst(RpgParser::Bif_substContext * /*ctx*/) override { }
  virtual void exitBif_subst(RpgParser::Bif_substContext * /*ctx*/) override { }

  virtual void enterBif_this(RpgParser::Bif_thisContext * /*ctx*/) override { }
  virtual void exitBif_this(RpgParser::Bif_thisContext * /*ctx*/) override { }

  virtual void enterBif_time(RpgParser::Bif_timeContext * /*ctx*/) override { }
  virtual void exitBif_time(RpgParser::Bif_timeContext * /*ctx*/) override { }

  virtual void enterBif_timestamp(RpgParser::Bif_timestampContext * /*ctx*/) override { }
  virtual void exitBif_timestamp(RpgParser::Bif_timestampContext * /*ctx*/) override { }

  virtual void enterBif_tlookup(RpgParser::Bif_tlookupContext * /*ctx*/) override { }
  virtual void exitBif_tlookup(RpgParser::Bif_tlookupContext * /*ctx*/) override { }

  virtual void enterBif_tlookuplt(RpgParser::Bif_tlookupltContext * /*ctx*/) override { }
  virtual void exitBif_tlookuplt(RpgParser::Bif_tlookupltContext * /*ctx*/) override { }

  virtual void enterBif_tlookuple(RpgParser::Bif_tlookupleContext * /*ctx*/) override { }
  virtual void exitBif_tlookuple(RpgParser::Bif_tlookupleContext * /*ctx*/) override { }

  virtual void enterBif_tlookupgt(RpgParser::Bif_tlookupgtContext * /*ctx*/) override { }
  virtual void exitBif_tlookupgt(RpgParser::Bif_tlookupgtContext * /*ctx*/) override { }

  virtual void enterBif_tlookupge(RpgParser::Bif_tlookupgeContext * /*ctx*/) override { }
  virtual void exitBif_tlookupge(RpgParser::Bif_tlookupgeContext * /*ctx*/) override { }

  virtual void enterBif_trim(RpgParser::Bif_trimContext * /*ctx*/) override { }
  virtual void exitBif_trim(RpgParser::Bif_trimContext * /*ctx*/) override { }

  virtual void enterBif_triml(RpgParser::Bif_trimlContext * /*ctx*/) override { }
  virtual void exitBif_triml(RpgParser::Bif_trimlContext * /*ctx*/) override { }

  virtual void enterBif_trimr(RpgParser::Bif_trimrContext * /*ctx*/) override { }
  virtual void exitBif_trimr(RpgParser::Bif_trimrContext * /*ctx*/) override { }

  virtual void enterBif_ucs2(RpgParser::Bif_ucs2Context * /*ctx*/) override { }
  virtual void exitBif_ucs2(RpgParser::Bif_ucs2Context * /*ctx*/) override { }

  virtual void enterBif_uns(RpgParser::Bif_unsContext * /*ctx*/) override { }
  virtual void exitBif_uns(RpgParser::Bif_unsContext * /*ctx*/) override { }

  virtual void enterBif_unsh(RpgParser::Bif_unshContext * /*ctx*/) override { }
  virtual void exitBif_unsh(RpgParser::Bif_unshContext * /*ctx*/) override { }

  virtual void enterBif_xfoot(RpgParser::Bif_xfootContext * /*ctx*/) override { }
  virtual void exitBif_xfoot(RpgParser::Bif_xfootContext * /*ctx*/) override { }

  virtual void enterBif_xlate(RpgParser::Bif_xlateContext * /*ctx*/) override { }
  virtual void exitBif_xlate(RpgParser::Bif_xlateContext * /*ctx*/) override { }

  virtual void enterBif_xml(RpgParser::Bif_xmlContext * /*ctx*/) override { }
  virtual void exitBif_xml(RpgParser::Bif_xmlContext * /*ctx*/) override { }

  virtual void enterBif_years(RpgParser::Bif_yearsContext * /*ctx*/) override { }
  virtual void exitBif_years(RpgParser::Bif_yearsContext * /*ctx*/) override { }

  virtual void enterBif_code(RpgParser::Bif_codeContext * /*ctx*/) override { }
  virtual void exitBif_code(RpgParser::Bif_codeContext * /*ctx*/) override { }

  virtual void enterFree(RpgParser::FreeContext * /*ctx*/) override { }
  virtual void exitFree(RpgParser::FreeContext * /*ctx*/) override { }

  virtual void enterC_free(RpgParser::C_freeContext * /*ctx*/) override { }
  virtual void exitC_free(RpgParser::C_freeContext * /*ctx*/) override { }

  virtual void enterControl(RpgParser::ControlContext * /*ctx*/) override { }
  virtual void exitControl(RpgParser::ControlContext * /*ctx*/) override { }

  virtual void enterExec_sql(RpgParser::Exec_sqlContext * /*ctx*/) override { }
  virtual void exitExec_sql(RpgParser::Exec_sqlContext * /*ctx*/) override { }

  virtual void enterBaseExpression(RpgParser::BaseExpressionContext * /*ctx*/) override { }
  virtual void exitBaseExpression(RpgParser::BaseExpressionContext * /*ctx*/) override { }

  virtual void enterIndicator(RpgParser::IndicatorContext * /*ctx*/) override { }
  virtual void exitIndicator(RpgParser::IndicatorContext * /*ctx*/) override { }

  virtual void enterAssignmentExpression(RpgParser::AssignmentExpressionContext * /*ctx*/) override { }
  virtual void exitAssignmentExpression(RpgParser::AssignmentExpressionContext * /*ctx*/) override { }

  virtual void enterAssignOperatorExpression(RpgParser::AssignOperatorExpressionContext * /*ctx*/) override { }
  virtual void exitAssignOperatorExpression(RpgParser::AssignOperatorExpressionContext * /*ctx*/) override { }

  virtual void enterEvalExpression(RpgParser::EvalExpressionContext * /*ctx*/) override { }
  virtual void exitEvalExpression(RpgParser::EvalExpressionContext * /*ctx*/) override { }

  virtual void enterSimpleExpression(RpgParser::SimpleExpressionContext * /*ctx*/) override { }
  virtual void exitSimpleExpression(RpgParser::SimpleExpressionContext * /*ctx*/) override { }

  virtual void enterUnaryExpression(RpgParser::UnaryExpressionContext * /*ctx*/) override { }
  virtual void exitUnaryExpression(RpgParser::UnaryExpressionContext * /*ctx*/) override { }

  virtual void enterExpression(RpgParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(RpgParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterPexpression(RpgParser::PexpressionContext * /*ctx*/) override { }
  virtual void exitPexpression(RpgParser::PexpressionContext * /*ctx*/) override { }

  virtual void enterIndicator_expr(RpgParser::Indicator_exprContext * /*ctx*/) override { }
  virtual void exitIndicator_expr(RpgParser::Indicator_exprContext * /*ctx*/) override { }

  virtual void enterFunction(RpgParser::FunctionContext * /*ctx*/) override { }
  virtual void exitFunction(RpgParser::FunctionContext * /*ctx*/) override { }

  virtual void enterComparisonOperator(RpgParser::ComparisonOperatorContext * /*ctx*/) override { }
  virtual void exitComparisonOperator(RpgParser::ComparisonOperatorContext * /*ctx*/) override { }

  virtual void enterAssignmentOperator(RpgParser::AssignmentOperatorContext * /*ctx*/) override { }
  virtual void exitAssignmentOperator(RpgParser::AssignmentOperatorContext * /*ctx*/) override { }

  virtual void enterAssignmentOperatorIncludingEqual(RpgParser::AssignmentOperatorIncludingEqualContext * /*ctx*/) override { }
  virtual void exitAssignmentOperatorIncludingEqual(RpgParser::AssignmentOperatorIncludingEqualContext * /*ctx*/) override { }

  virtual void enterArgs(RpgParser::ArgsContext * /*ctx*/) override { }
  virtual void exitArgs(RpgParser::ArgsContext * /*ctx*/) override { }

  virtual void enterLiteral(RpgParser::LiteralContext * /*ctx*/) override { }
  virtual void exitLiteral(RpgParser::LiteralContext * /*ctx*/) override { }

  virtual void enterIdentifier(RpgParser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(RpgParser::IdentifierContext * /*ctx*/) override { }

  virtual void enterAll(RpgParser::AllContext * /*ctx*/) override { }
  virtual void exitAll(RpgParser::AllContext * /*ctx*/) override { }

  virtual void enterFunctionName(RpgParser::FunctionNameContext * /*ctx*/) override { }
  virtual void exitFunctionName(RpgParser::FunctionNameContext * /*ctx*/) override { }

  virtual void enterMultipart_identifier(RpgParser::Multipart_identifierContext * /*ctx*/) override { }
  virtual void exitMultipart_identifier(RpgParser::Multipart_identifierContext * /*ctx*/) override { }

  virtual void enterMultipart_identifier_element(RpgParser::Multipart_identifier_elementContext * /*ctx*/) override { }
  virtual void exitMultipart_identifier_element(RpgParser::Multipart_identifier_elementContext * /*ctx*/) override { }

  virtual void enterIndexed_identifier(RpgParser::Indexed_identifierContext * /*ctx*/) override { }
  virtual void exitIndexed_identifier(RpgParser::Indexed_identifierContext * /*ctx*/) override { }

  virtual void enterOpCode(RpgParser::OpCodeContext * /*ctx*/) override { }
  virtual void exitOpCode(RpgParser::OpCodeContext * /*ctx*/) override { }

  virtual void enterNumber(RpgParser::NumberContext * /*ctx*/) override { }
  virtual void exitNumber(RpgParser::NumberContext * /*ctx*/) override { }

  virtual void enterFree_identifier(RpgParser::Free_identifierContext * /*ctx*/) override { }
  virtual void exitFree_identifier(RpgParser::Free_identifierContext * /*ctx*/) override { }

  virtual void enterContinuedIdentifier(RpgParser::ContinuedIdentifierContext * /*ctx*/) override { }
  virtual void exitContinuedIdentifier(RpgParser::ContinuedIdentifierContext * /*ctx*/) override { }

  virtual void enterIdOrKeyword(RpgParser::IdOrKeywordContext * /*ctx*/) override { }
  virtual void exitIdOrKeyword(RpgParser::IdOrKeywordContext * /*ctx*/) override { }

  virtual void enterArgument(RpgParser::ArgumentContext * /*ctx*/) override { }
  virtual void exitArgument(RpgParser::ArgumentContext * /*ctx*/) override { }

  virtual void enterSymbolicConstants(RpgParser::SymbolicConstantsContext * /*ctx*/) override { }
  virtual void exitSymbolicConstants(RpgParser::SymbolicConstantsContext * /*ctx*/) override { }

  virtual void enterGlobalIndicatorTarget(RpgParser::GlobalIndicatorTargetContext * /*ctx*/) override { }
  virtual void exitGlobalIndicatorTarget(RpgParser::GlobalIndicatorTargetContext * /*ctx*/) override { }

  virtual void enterQualifiedTarget(RpgParser::QualifiedTargetContext * /*ctx*/) override { }
  virtual void exitQualifiedTarget(RpgParser::QualifiedTargetContext * /*ctx*/) override { }

  virtual void enterIndicatorTarget(RpgParser::IndicatorTargetContext * /*ctx*/) override { }
  virtual void exitIndicatorTarget(RpgParser::IndicatorTargetContext * /*ctx*/) override { }

  virtual void enterSimpleTarget(RpgParser::SimpleTargetContext * /*ctx*/) override { }
  virtual void exitSimpleTarget(RpgParser::SimpleTargetContext * /*ctx*/) override { }

  virtual void enterIndexedTarget(RpgParser::IndexedTargetContext * /*ctx*/) override { }
  virtual void exitIndexedTarget(RpgParser::IndexedTargetContext * /*ctx*/) override { }

  virtual void enterSubstTarget(RpgParser::SubstTargetContext * /*ctx*/) override { }
  virtual void exitSubstTarget(RpgParser::SubstTargetContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace antlrcpprpg
