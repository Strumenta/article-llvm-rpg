
// Generated from src/antlr/RpgParser.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "RpgParserVisitor.h"


namespace antlrcpprpg {

/**
 * This class provides an empty implementation of RpgCodeVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  RpgParserBaseVisitor : public RpgParserVisitor {
public:

  virtual antlrcpp::Any visitR(RpgParser::RContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(RpgParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEndSourceBlock(RpgParser::EndSourceBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEndSource(RpgParser::EndSourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEndSourceHead(RpgParser::EndSourceHeadContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEndSourceLine(RpgParser::EndSourceLineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEndSourceLineText(RpgParser::EndSourceLineTextContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStar_comments(RpgParser::Star_commentsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFree_comments(RpgParser::Free_commentsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFree_linecomments(RpgParser::Free_linecommentsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComments(RpgParser::CommentsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDspec(RpgParser::DspecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDspecConstant(RpgParser::DspecConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDatatype(RpgParser::DatatypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword(RpgParser::KeywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDspec_bif(RpgParser::Dspec_bifContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_alias(RpgParser::Keyword_aliasContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_align(RpgParser::Keyword_alignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_alt(RpgParser::Keyword_altContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_altseq(RpgParser::Keyword_altseqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_ascend(RpgParser::Keyword_ascendContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_based(RpgParser::Keyword_basedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_ccsid(RpgParser::Keyword_ccsidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_class(RpgParser::Keyword_classContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_const(RpgParser::Keyword_constContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_ctdata(RpgParser::Keyword_ctdataContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_datfmt(RpgParser::Keyword_datfmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDateSeparator(RpgParser::DateSeparatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_descend(RpgParser::Keyword_descendContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_dim(RpgParser::Keyword_dimContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_dtaara(RpgParser::Keyword_dtaaraContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_export(RpgParser::Keyword_exportContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_ext(RpgParser::Keyword_extContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_extfld(RpgParser::Keyword_extfldContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_extfmt(RpgParser::Keyword_extfmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_extname(RpgParser::Keyword_extnameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_extpgm(RpgParser::Keyword_extpgmContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_extproc(RpgParser::Keyword_extprocContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_fromfile(RpgParser::Keyword_fromfileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_import(RpgParser::Keyword_importContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_inz(RpgParser::Keyword_inzContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_len(RpgParser::Keyword_lenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_like(RpgParser::Keyword_likeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_likeds(RpgParser::Keyword_likedsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_likefile(RpgParser::Keyword_likefileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_likerec(RpgParser::Keyword_likerecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_noopt(RpgParser::Keyword_nooptContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_occurs(RpgParser::Keyword_occursContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_opdesc(RpgParser::Keyword_opdescContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_options(RpgParser::Keyword_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_overlay(RpgParser::Keyword_overlayContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_packeven(RpgParser::Keyword_packevenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_perrcd(RpgParser::Keyword_perrcdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_prefix(RpgParser::Keyword_prefixContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_pos(RpgParser::Keyword_posContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_procptr(RpgParser::Keyword_procptrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_qualified(RpgParser::Keyword_qualifiedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_rtnparm(RpgParser::Keyword_rtnparmContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_static(RpgParser::Keyword_staticContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_sqltype(RpgParser::Keyword_sqltypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_template(RpgParser::Keyword_templateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_timfmt(RpgParser::Keyword_timfmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_tofile(RpgParser::Keyword_tofileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_value(RpgParser::Keyword_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_varying(RpgParser::Keyword_varyingContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_psds(RpgParser::Keyword_psdsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_block(RpgParser::Keyword_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_commit(RpgParser::Keyword_commitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_devid(RpgParser::Keyword_devidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_extdesc(RpgParser::Keyword_extdescContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_extfile(RpgParser::Keyword_extfileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_extind(RpgParser::Keyword_extindContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_extmbr(RpgParser::Keyword_extmbrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_formlen(RpgParser::Keyword_formlenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_formofl(RpgParser::Keyword_formoflContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_ignore(RpgParser::Keyword_ignoreContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_include(RpgParser::Keyword_includeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_indds(RpgParser::Keyword_inddsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_infds(RpgParser::Keyword_infdsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_infsr(RpgParser::Keyword_infsrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_keyloc(RpgParser::Keyword_keylocContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_maxdev(RpgParser::Keyword_maxdevContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_oflind(RpgParser::Keyword_oflindContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_pass(RpgParser::Keyword_passContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_pgmname(RpgParser::Keyword_pgmnameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_plist(RpgParser::Keyword_plistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_prtctl(RpgParser::Keyword_prtctlContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_rafdata(RpgParser::Keyword_rafdataContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_recno(RpgParser::Keyword_recnoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_rename(RpgParser::Keyword_renameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_saveds(RpgParser::Keyword_savedsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_saveind(RpgParser::Keyword_saveindContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_sfile(RpgParser::Keyword_sfileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_sln(RpgParser::Keyword_slnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_usropn(RpgParser::Keyword_usropnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_disk(RpgParser::Keyword_diskContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_workstn(RpgParser::Keyword_workstnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_printer(RpgParser::Keyword_printerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_special(RpgParser::Keyword_specialContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_keyed(RpgParser::Keyword_keyedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword_usage(RpgParser::Keyword_usageContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLike_lengthAdjustment(RpgParser::Like_lengthAdjustmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSign(RpgParser::SignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDcl_ds(RpgParser::Dcl_dsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDcl_ds_field(RpgParser::Dcl_ds_fieldContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnd_dcl_ds(RpgParser::End_dcl_dsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDcl_pr(RpgParser::Dcl_prContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDcl_pr_field(RpgParser::Dcl_pr_fieldContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnd_dcl_pr(RpgParser::End_dcl_prContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDcl_pi(RpgParser::Dcl_piContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDcl_pi_field(RpgParser::Dcl_pi_fieldContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnd_dcl_pi(RpgParser::End_dcl_piContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDcl_c(RpgParser::Dcl_cContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCtl_opt(RpgParser::Ctl_optContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDatatypeName(RpgParser::DatatypeNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock(RpgParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfstatement(RpgParser::IfstatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElseIfClause(RpgParser::ElseIfClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElseClause(RpgParser::ElseClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCasestatement(RpgParser::CasestatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCasestatementend(RpgParser::CasestatementendContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMonitorstatement(RpgParser::MonitorstatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBeginmonitor(RpgParser::BeginmonitorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEndmonitor(RpgParser::EndmonitorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOnError(RpgParser::OnErrorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectstatement(RpgParser::SelectstatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOther(RpgParser::OtherContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBeginselect(RpgParser::BeginselectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhenstatement(RpgParser::WhenstatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhen(RpgParser::WhenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsWHENxx(RpgParser::CsWHENxxContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEndselect(RpgParser::EndselectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBeginif(RpgParser::BeginifContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBegindou(RpgParser::BegindouContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBegindow(RpgParser::BegindowContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBegindo(RpgParser::BegindoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElseifstmt(RpgParser::ElseifstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElsestmt(RpgParser::ElsestmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsIFxx(RpgParser::CsIFxxContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsDOUxx(RpgParser::CsDOUxxContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsDOWxx(RpgParser::CsDOWxxContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComplexCondxx(RpgParser::ComplexCondxxContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsANDxx(RpgParser::CsANDxxContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsORxx(RpgParser::CsORxxContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForstatement(RpgParser::ForstatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBeginfor(RpgParser::BeginforContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEndif(RpgParser::EndifContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnddo(RpgParser::EnddoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEndfor(RpgParser::EndforContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDspec_fixed(RpgParser::Dspec_fixedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDs_name(RpgParser::Ds_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOspec_fixed(RpgParser::Ospec_fixedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOs_fixed_pgmdesc1(RpgParser::Os_fixed_pgmdesc1Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOutputConditioningOnOffIndicator(RpgParser::OutputConditioningOnOffIndicatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOutputConditioningIndicator(RpgParser::OutputConditioningIndicatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOs_fixed_pgmdesc_compound(RpgParser::Os_fixed_pgmdesc_compoundContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOs_fixed_pgmdesc2(RpgParser::Os_fixed_pgmdesc2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOs_fixed_pgmfield(RpgParser::Os_fixed_pgmfieldContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPs_name(RpgParser::Ps_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFspec(RpgParser::FspecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFilename(RpgParser::FilenameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFs_parm(RpgParser::Fs_parmContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFs_string(RpgParser::Fs_stringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFs_keyword(RpgParser::Fs_keywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFspec_fixed(RpgParser::Fspec_fixedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCspec_fixed(RpgParser::Cspec_fixedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCspec_continuedIndicators(RpgParser::Cspec_continuedIndicatorsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCspec_blank(RpgParser::Cspec_blankContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlank_spec(RpgParser::Blank_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPiBegin(RpgParser::PiBeginContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParm_fixed(RpgParser::Parm_fixedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPr_parm_fixed(RpgParser::Pr_parm_fixedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPi_parm_fixed(RpgParser::Pi_parm_fixedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProcedure(RpgParser::ProcedureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBeginProcedure(RpgParser::BeginProcedureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEndProcedure(RpgParser::EndProcedureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPsBegin(RpgParser::PsBeginContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFreeBeginProcedure(RpgParser::FreeBeginProcedureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPsEnd(RpgParser::PsEndContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFreeEndProcedure(RpgParser::FreeEndProcedureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrBegin(RpgParser::PrBeginContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubroutine(RpgParser::SubroutineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubprocedurestatement(RpgParser::SubprocedurestatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBegsr(RpgParser::BegsrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEndsr(RpgParser::EndsrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsBEGSR(RpgParser::CsBEGSRContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFreeBEGSR(RpgParser::FreeBEGSRContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsENDSR(RpgParser::CsENDSRContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFreeENDSR(RpgParser::FreeENDSRContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOnOffIndicatorsFlag(RpgParser::OnOffIndicatorsFlagContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCs_controlLevel(RpgParser::Cs_controlLevelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCs_indicators(RpgParser::Cs_indicatorsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitResultIndicator(RpgParser::ResultIndicatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCspec_fixed_sql(RpgParser::Cspec_fixed_sqlContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCspec_fixed_standard(RpgParser::Cspec_fixed_standardContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCspec_fixed_standard_parts(RpgParser::Cspec_fixed_standard_partsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsACQ(RpgParser::CsACQContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsADD(RpgParser::CsADDContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsADDDUR(RpgParser::CsADDDURContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsALLOC(RpgParser::CsALLOCContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsANDEQ(RpgParser::CsANDEQContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsANDNE(RpgParser::CsANDNEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsANDLE(RpgParser::CsANDLEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsANDLT(RpgParser::CsANDLTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsANDGE(RpgParser::CsANDGEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsANDGT(RpgParser::CsANDGTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsBITOFF(RpgParser::CsBITOFFContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsBITON(RpgParser::CsBITONContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsCABxx(RpgParser::CsCABxxContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsCABEQ(RpgParser::CsCABEQContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsCABNE(RpgParser::CsCABNEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsCABLE(RpgParser::CsCABLEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsCABLT(RpgParser::CsCABLTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsCABGE(RpgParser::CsCABGEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsCABGT(RpgParser::CsCABGTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsCALL(RpgParser::CsCALLContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsCALLB(RpgParser::CsCALLBContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsCALLP(RpgParser::CsCALLPContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsCASEQ(RpgParser::CsCASEQContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsCASNE(RpgParser::CsCASNEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsCASLE(RpgParser::CsCASLEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsCASLT(RpgParser::CsCASLTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsCASGE(RpgParser::CsCASGEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsCASGT(RpgParser::CsCASGTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsCAS(RpgParser::CsCASContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsCAT(RpgParser::CsCATContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsCHAIN(RpgParser::CsCHAINContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsCHECK(RpgParser::CsCHECKContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsCHECKR(RpgParser::CsCHECKRContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsCLEAR(RpgParser::CsCLEARContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsCLOSE(RpgParser::CsCLOSEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsCOMMIT(RpgParser::CsCOMMITContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsCOMP(RpgParser::CsCOMPContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsDEALLOC(RpgParser::CsDEALLOCContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsDEFINE(RpgParser::CsDEFINEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsDELETE(RpgParser::CsDELETEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsDIV(RpgParser::CsDIVContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsDO(RpgParser::CsDOContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsDOU(RpgParser::CsDOUContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsDOUEQ(RpgParser::CsDOUEQContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsDOUNE(RpgParser::CsDOUNEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsDOULE(RpgParser::CsDOULEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsDOULT(RpgParser::CsDOULTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsDOUGE(RpgParser::CsDOUGEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsDOUGT(RpgParser::CsDOUGTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsDOW(RpgParser::CsDOWContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsDOWEQ(RpgParser::CsDOWEQContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsDOWNE(RpgParser::CsDOWNEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsDOWLE(RpgParser::CsDOWLEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsDOWLT(RpgParser::CsDOWLTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsDOWGE(RpgParser::CsDOWGEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsDOWGT(RpgParser::CsDOWGTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsDSPLY(RpgParser::CsDSPLYContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsDUMP(RpgParser::CsDUMPContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsELSE(RpgParser::CsELSEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsELSEIF(RpgParser::CsELSEIFContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsEND(RpgParser::CsENDContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsENDCS(RpgParser::CsENDCSContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsENDDO(RpgParser::CsENDDOContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsENDFOR(RpgParser::CsENDFORContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsENDIF(RpgParser::CsENDIFContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsENDMON(RpgParser::CsENDMONContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsENDSL(RpgParser::CsENDSLContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsEVAL(RpgParser::CsEVALContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsEVAL_CORR(RpgParser::CsEVAL_CORRContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsEVALR(RpgParser::CsEVALRContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsEXCEPT(RpgParser::CsEXCEPTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsEXFMT(RpgParser::CsEXFMTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsEXSR(RpgParser::CsEXSRContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsEXTRCT(RpgParser::CsEXTRCTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsFEOD(RpgParser::CsFEODContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsFOR(RpgParser::CsFORContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitByExpression(RpgParser::ByExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStopExpression(RpgParser::StopExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsFORCE(RpgParser::CsFORCEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsGOTO(RpgParser::CsGOTOContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsIF(RpgParser::CsIFContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsIFEQ(RpgParser::CsIFEQContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsIFNE(RpgParser::CsIFNEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsIFLE(RpgParser::CsIFLEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsIFLT(RpgParser::CsIFLTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsIFGE(RpgParser::CsIFGEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsIFGT(RpgParser::CsIFGTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsIN(RpgParser::CsINContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsITER(RpgParser::CsITERContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsKLIST(RpgParser::CsKLISTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsKFLD(RpgParser::CsKFLDContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsLEAVE(RpgParser::CsLEAVEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsLEAVESR(RpgParser::CsLEAVESRContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsLOOKUP(RpgParser::CsLOOKUPContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsMHHZO(RpgParser::CsMHHZOContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsMHLZO(RpgParser::CsMHLZOContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsMLHZO(RpgParser::CsMLHZOContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsMLLZO(RpgParser::CsMLLZOContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsMONITOR(RpgParser::CsMONITORContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsMOVE(RpgParser::CsMOVEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsMOVEA(RpgParser::CsMOVEAContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsMOVEL(RpgParser::CsMOVELContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsMULT(RpgParser::CsMULTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsMVR(RpgParser::CsMVRContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsNEXT(RpgParser::CsNEXTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsOCCUR(RpgParser::CsOCCURContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsON_ERROR(RpgParser::CsON_ERRORContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOnErrorCode(RpgParser::OnErrorCodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsOPEN(RpgParser::CsOPENContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsOREQ(RpgParser::CsOREQContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsORNE(RpgParser::CsORNEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsORLE(RpgParser::CsORLEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsORLT(RpgParser::CsORLTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsORGE(RpgParser::CsORGEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsORGT(RpgParser::CsORGTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsOTHER(RpgParser::CsOTHERContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsOUT(RpgParser::CsOUTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsPARM(RpgParser::CsPARMContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsPLIST(RpgParser::CsPLISTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsPOST(RpgParser::CsPOSTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsREAD(RpgParser::CsREADContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsREADC(RpgParser::CsREADCContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsREADE(RpgParser::CsREADEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsREADP(RpgParser::CsREADPContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsREADPE(RpgParser::CsREADPEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsREALLOC(RpgParser::CsREALLOCContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsREL(RpgParser::CsRELContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsRESET(RpgParser::CsRESETContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsRETURN(RpgParser::CsRETURNContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsROLBK(RpgParser::CsROLBKContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsSCAN(RpgParser::CsSCANContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsSELECT(RpgParser::CsSELECTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsSETGT(RpgParser::CsSETGTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsSETLL(RpgParser::CsSETLLContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsSETOFF(RpgParser::CsSETOFFContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsSETON(RpgParser::CsSETONContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsSHTDN(RpgParser::CsSHTDNContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsSORTA(RpgParser::CsSORTAContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsSQRT(RpgParser::CsSQRTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsSUB(RpgParser::CsSUBContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsSUBDUR(RpgParser::CsSUBDURContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsSUBST(RpgParser::CsSUBSTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsTAG(RpgParser::CsTAGContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsTEST(RpgParser::CsTESTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsTESTB(RpgParser::CsTESTBContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsTESTN(RpgParser::CsTESTNContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsTESTZ(RpgParser::CsTESTZContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsTIME(RpgParser::CsTIMEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsUNLOCK(RpgParser::CsUNLOCKContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsUPDATE(RpgParser::CsUPDATEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsWHEN(RpgParser::CsWHENContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsWHENEQ(RpgParser::CsWHENEQContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsWHENNE(RpgParser::CsWHENNEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsWHENLE(RpgParser::CsWHENLEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsWHENLT(RpgParser::CsWHENLTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsWHENGE(RpgParser::CsWHENGEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsWHENGT(RpgParser::CsWHENGTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsWRITE(RpgParser::CsWRITEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsXFOOT(RpgParser::CsXFOOTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsXLATE(RpgParser::CsXLATEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsXML_INTO(RpgParser::CsXML_INTOContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsXML_SAX(RpgParser::CsXML_SAXContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsZ_ADD(RpgParser::CsZ_ADDContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsZ_SUB(RpgParser::CsZ_SUBContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCs_operationExtender(RpgParser::Cs_operationExtenderContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFactor(RpgParser::FactorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFactorContent(RpgParser::FactorContentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitResultType(RpgParser::ResultTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCs_fixed_comments(RpgParser::Cs_fixed_commentsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCspec_fixed_x2(RpgParser::Cspec_fixed_x2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCsOperationAndExtendedFactor2(RpgParser::CsOperationAndExtendedFactor2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIspec_fixed(RpgParser::Ispec_fixedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFieldRecordRelation(RpgParser::FieldRecordRelationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFieldIndicator(RpgParser::FieldIndicatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIs_external_rec(RpgParser::Is_external_recContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIs_rec(RpgParser::Is_recContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRecordIdIndicator(RpgParser::RecordIdIndicatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIs_external_field(RpgParser::Is_external_fieldContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitControlLevelIndicator(RpgParser::ControlLevelIndicatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMatchingFieldsIndicator(RpgParser::MatchingFieldsIndicatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHspec_fixed(RpgParser::Hspec_fixedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetDecedit(RpgParser::SetDeceditContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHspecExpressions(RpgParser::HspecExpressionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHs_decedit_set(RpgParser::Hs_decedit_setContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHs_expression(RpgParser::Hs_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHs_parm(RpgParser::Hs_parmContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHs_string(RpgParser::Hs_stringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlank_line(RpgParser::Blank_lineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDirective(RpgParser::DirectiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSpace_directive(RpgParser::Space_directiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDir_copy(RpgParser::Dir_copyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDir_include(RpgParser::Dir_includeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDir_if(RpgParser::Dir_ifContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDir_elseif(RpgParser::Dir_elseifContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDir_else(RpgParser::Dir_elseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDir_endif(RpgParser::Dir_endifContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDir_define(RpgParser::Dir_defineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDir_undefine(RpgParser::Dir_undefineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDir_eof(RpgParser::Dir_eofContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBeginfree_directive(RpgParser::Beginfree_directiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEndfree_directive(RpgParser::Endfree_directiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCopyText(RpgParser::CopyTextContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTrailing_ws(RpgParser::Trailing_wsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTitle_directive(RpgParser::Title_directiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTitle_text(RpgParser::Title_textContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp(RpgParser::OpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_acq(RpgParser::Op_acqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_callp(RpgParser::Op_callpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_chain(RpgParser::Op_chainContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_clear(RpgParser::Op_clearContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_close(RpgParser::Op_closeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_commit(RpgParser::Op_commitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_dealloc(RpgParser::Op_deallocContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_delete(RpgParser::Op_deleteContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_dou(RpgParser::Op_douContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_dow(RpgParser::Op_dowContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_dsply(RpgParser::Op_dsplyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_dump(RpgParser::Op_dumpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_else(RpgParser::Op_elseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_elseif(RpgParser::Op_elseifContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_enddo(RpgParser::Op_enddoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_endfor(RpgParser::Op_endforContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_endif(RpgParser::Op_endifContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_endmon(RpgParser::Op_endmonContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_endsl(RpgParser::Op_endslContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_eval(RpgParser::Op_evalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_evalr(RpgParser::Op_evalrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_eval_corr(RpgParser::Op_eval_corrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_except(RpgParser::Op_exceptContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_exfmt(RpgParser::Op_exfmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_exsr(RpgParser::Op_exsrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_feod(RpgParser::Op_feodContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_for(RpgParser::Op_forContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_force(RpgParser::Op_forceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_if(RpgParser::Op_ifContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_in(RpgParser::Op_inContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_iter(RpgParser::Op_iterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_leave(RpgParser::Op_leaveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_leavesr(RpgParser::Op_leavesrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_monitor(RpgParser::Op_monitorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_next(RpgParser::Op_nextContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_on_error(RpgParser::Op_on_errorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_open(RpgParser::Op_openContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_other(RpgParser::Op_otherContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_out(RpgParser::Op_outContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_post(RpgParser::Op_postContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_read(RpgParser::Op_readContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_readc(RpgParser::Op_readcContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_reade(RpgParser::Op_readeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_readp(RpgParser::Op_readpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_readpe(RpgParser::Op_readpeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_rel(RpgParser::Op_relContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_reset2(RpgParser::Op_reset2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_reset(RpgParser::Op_resetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_return(RpgParser::Op_returnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_rolbk(RpgParser::Op_rolbkContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_select(RpgParser::Op_selectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_setgt(RpgParser::Op_setgtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_setll(RpgParser::Op_setllContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_sorta(RpgParser::Op_sortaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_test(RpgParser::Op_testContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_unlock(RpgParser::Op_unlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_update(RpgParser::Op_updateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_when(RpgParser::Op_whenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_write(RpgParser::Op_writeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_xml_into(RpgParser::Op_xml_intoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_xml_sax(RpgParser::Op_xml_saxContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSearch_arg(RpgParser::Search_argContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_code(RpgParser::Op_codeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif(RpgParser::BifContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOptargs(RpgParser::OptargsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_charformat(RpgParser::Bif_charformatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_dateformat(RpgParser::Bif_dateformatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_timeformat(RpgParser::Bif_timeformatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_editccurrency(RpgParser::Bif_editccurrencyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_lookupargs(RpgParser::Bif_lookupargsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDurationCode(RpgParser::DurationCodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_timestampargs(RpgParser::Bif_timestampargsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_tlookupargs(RpgParser::Bif_tlookupargsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_abs(RpgParser::Bif_absContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_addr(RpgParser::Bif_addrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_alloc(RpgParser::Bif_allocContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_bitand(RpgParser::Bif_bitandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_bitnot(RpgParser::Bif_bitnotContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_bitor(RpgParser::Bif_bitorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_bitxor(RpgParser::Bif_bitxorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_char(RpgParser::Bif_charContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_check(RpgParser::Bif_checkContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_checkr(RpgParser::Bif_checkrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_date(RpgParser::Bif_dateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_days(RpgParser::Bif_daysContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_dec(RpgParser::Bif_decContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_dech(RpgParser::Bif_dechContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_decpos(RpgParser::Bif_decposContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_diff(RpgParser::Bif_diffContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_div(RpgParser::Bif_divContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_editc(RpgParser::Bif_editcContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_editflt(RpgParser::Bif_editfltContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_editw(RpgParser::Bif_editwContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_elem(RpgParser::Bif_elemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_eof(RpgParser::Bif_eofContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_equal(RpgParser::Bif_equalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_error(RpgParser::Bif_errorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_fields(RpgParser::Bif_fieldsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_float(RpgParser::Bif_floatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_found(RpgParser::Bif_foundContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_graph(RpgParser::Bif_graphContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_handler(RpgParser::Bif_handlerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_hours(RpgParser::Bif_hoursContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_int(RpgParser::Bif_intContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_inth(RpgParser::Bif_inthContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_kds(RpgParser::Bif_kdsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_len(RpgParser::Bif_lenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_lookup(RpgParser::Bif_lookupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_lookuplt(RpgParser::Bif_lookupltContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_lookuple(RpgParser::Bif_lookupleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_lookupgt(RpgParser::Bif_lookupgtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_lookupge(RpgParser::Bif_lookupgeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_minutes(RpgParser::Bif_minutesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_months(RpgParser::Bif_monthsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_mseconds(RpgParser::Bif_msecondsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_nullind(RpgParser::Bif_nullindContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_occur(RpgParser::Bif_occurContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_open(RpgParser::Bif_openContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_paddr(RpgParser::Bif_paddrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_parms(RpgParser::Bif_parmsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_parmnum(RpgParser::Bif_parmnumContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_realloc(RpgParser::Bif_reallocContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_rem(RpgParser::Bif_remContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_replace(RpgParser::Bif_replaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_scan(RpgParser::Bif_scanContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_scanrpl(RpgParser::Bif_scanrplContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_seconds(RpgParser::Bif_secondsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_shtdn(RpgParser::Bif_shtdnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_size(RpgParser::Bif_sizeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_sqrt(RpgParser::Bif_sqrtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_status(RpgParser::Bif_statusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_str(RpgParser::Bif_strContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_subarr(RpgParser::Bif_subarrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_subdt(RpgParser::Bif_subdtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_subst(RpgParser::Bif_substContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_this(RpgParser::Bif_thisContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_time(RpgParser::Bif_timeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_timestamp(RpgParser::Bif_timestampContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_tlookup(RpgParser::Bif_tlookupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_tlookuplt(RpgParser::Bif_tlookupltContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_tlookuple(RpgParser::Bif_tlookupleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_tlookupgt(RpgParser::Bif_tlookupgtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_tlookupge(RpgParser::Bif_tlookupgeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_trim(RpgParser::Bif_trimContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_triml(RpgParser::Bif_trimlContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_trimr(RpgParser::Bif_trimrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_ucs2(RpgParser::Bif_ucs2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_uns(RpgParser::Bif_unsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_unsh(RpgParser::Bif_unshContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_xfoot(RpgParser::Bif_xfootContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_xlate(RpgParser::Bif_xlateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_xml(RpgParser::Bif_xmlContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_years(RpgParser::Bif_yearsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBif_code(RpgParser::Bif_codeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFree(RpgParser::FreeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitC_free(RpgParser::C_freeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitControl(RpgParser::ControlContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExec_sql(RpgParser::Exec_sqlContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBaseExpression(RpgParser::BaseExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndicator(RpgParser::IndicatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignmentExpression(RpgParser::AssignmentExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignOperatorExpression(RpgParser::AssignOperatorExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEvalExpression(RpgParser::EvalExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleExpression(RpgParser::SimpleExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnaryExpression(RpgParser::UnaryExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(RpgParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPexpression(RpgParser::PexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndicator_expr(RpgParser::Indicator_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction(RpgParser::FunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComparisonOperator(RpgParser::ComparisonOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignmentOperator(RpgParser::AssignmentOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignmentOperatorIncludingEqual(RpgParser::AssignmentOperatorIncludingEqualContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArgs(RpgParser::ArgsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLiteral(RpgParser::LiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifier(RpgParser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAll(RpgParser::AllContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionName(RpgParser::FunctionNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultipart_identifier(RpgParser::Multipart_identifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultipart_identifier_element(RpgParser::Multipart_identifier_elementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndexed_identifier(RpgParser::Indexed_identifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOpCode(RpgParser::OpCodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumber(RpgParser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFree_identifier(RpgParser::Free_identifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitContinuedIdentifier(RpgParser::ContinuedIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdOrKeyword(RpgParser::IdOrKeywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArgument(RpgParser::ArgumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSymbolicConstants(RpgParser::SymbolicConstantsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGlobalIndicatorTarget(RpgParser::GlobalIndicatorTargetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQualifiedTarget(RpgParser::QualifiedTargetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndicatorTarget(RpgParser::IndicatorTargetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleTarget(RpgParser::SimpleTargetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndexedTarget(RpgParser::IndexedTargetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubstTarget(RpgParser::SubstTargetContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace antlrcpprpg
