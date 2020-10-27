
// Generated from src/antlr/RpgParser.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "RpgParser.h"


namespace antlrcpprpg {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by RpgParser.
 */
class  RpgParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by RpgParser.
   */
    virtual antlrcpp::Any visitR(RpgParser::RContext *context) = 0;

    virtual antlrcpp::Any visitStatement(RpgParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitEndSourceBlock(RpgParser::EndSourceBlockContext *context) = 0;

    virtual antlrcpp::Any visitEndSource(RpgParser::EndSourceContext *context) = 0;

    virtual antlrcpp::Any visitEndSourceHead(RpgParser::EndSourceHeadContext *context) = 0;

    virtual antlrcpp::Any visitEndSourceLine(RpgParser::EndSourceLineContext *context) = 0;

    virtual antlrcpp::Any visitEndSourceLineText(RpgParser::EndSourceLineTextContext *context) = 0;

    virtual antlrcpp::Any visitStar_comments(RpgParser::Star_commentsContext *context) = 0;

    virtual antlrcpp::Any visitFree_comments(RpgParser::Free_commentsContext *context) = 0;

    virtual antlrcpp::Any visitFree_linecomments(RpgParser::Free_linecommentsContext *context) = 0;

    virtual antlrcpp::Any visitComments(RpgParser::CommentsContext *context) = 0;

    virtual antlrcpp::Any visitDspec(RpgParser::DspecContext *context) = 0;

    virtual antlrcpp::Any visitDspecConstant(RpgParser::DspecConstantContext *context) = 0;

    virtual antlrcpp::Any visitDatatype(RpgParser::DatatypeContext *context) = 0;

    virtual antlrcpp::Any visitKeyword(RpgParser::KeywordContext *context) = 0;

    virtual antlrcpp::Any visitDspec_bif(RpgParser::Dspec_bifContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_alias(RpgParser::Keyword_aliasContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_align(RpgParser::Keyword_alignContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_alt(RpgParser::Keyword_altContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_altseq(RpgParser::Keyword_altseqContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_ascend(RpgParser::Keyword_ascendContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_based(RpgParser::Keyword_basedContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_ccsid(RpgParser::Keyword_ccsidContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_class(RpgParser::Keyword_classContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_const(RpgParser::Keyword_constContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_ctdata(RpgParser::Keyword_ctdataContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_datfmt(RpgParser::Keyword_datfmtContext *context) = 0;

    virtual antlrcpp::Any visitDateSeparator(RpgParser::DateSeparatorContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_descend(RpgParser::Keyword_descendContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_dim(RpgParser::Keyword_dimContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_dtaara(RpgParser::Keyword_dtaaraContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_export(RpgParser::Keyword_exportContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_ext(RpgParser::Keyword_extContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_extfld(RpgParser::Keyword_extfldContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_extfmt(RpgParser::Keyword_extfmtContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_extname(RpgParser::Keyword_extnameContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_extpgm(RpgParser::Keyword_extpgmContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_extproc(RpgParser::Keyword_extprocContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_fromfile(RpgParser::Keyword_fromfileContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_import(RpgParser::Keyword_importContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_inz(RpgParser::Keyword_inzContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_len(RpgParser::Keyword_lenContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_like(RpgParser::Keyword_likeContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_likeds(RpgParser::Keyword_likedsContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_likefile(RpgParser::Keyword_likefileContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_likerec(RpgParser::Keyword_likerecContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_noopt(RpgParser::Keyword_nooptContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_occurs(RpgParser::Keyword_occursContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_opdesc(RpgParser::Keyword_opdescContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_options(RpgParser::Keyword_optionsContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_overlay(RpgParser::Keyword_overlayContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_packeven(RpgParser::Keyword_packevenContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_perrcd(RpgParser::Keyword_perrcdContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_prefix(RpgParser::Keyword_prefixContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_pos(RpgParser::Keyword_posContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_procptr(RpgParser::Keyword_procptrContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_qualified(RpgParser::Keyword_qualifiedContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_rtnparm(RpgParser::Keyword_rtnparmContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_static(RpgParser::Keyword_staticContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_sqltype(RpgParser::Keyword_sqltypeContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_template(RpgParser::Keyword_templateContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_timfmt(RpgParser::Keyword_timfmtContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_tofile(RpgParser::Keyword_tofileContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_value(RpgParser::Keyword_valueContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_varying(RpgParser::Keyword_varyingContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_psds(RpgParser::Keyword_psdsContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_block(RpgParser::Keyword_blockContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_commit(RpgParser::Keyword_commitContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_devid(RpgParser::Keyword_devidContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_extdesc(RpgParser::Keyword_extdescContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_extfile(RpgParser::Keyword_extfileContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_extind(RpgParser::Keyword_extindContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_extmbr(RpgParser::Keyword_extmbrContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_formlen(RpgParser::Keyword_formlenContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_formofl(RpgParser::Keyword_formoflContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_ignore(RpgParser::Keyword_ignoreContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_include(RpgParser::Keyword_includeContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_indds(RpgParser::Keyword_inddsContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_infds(RpgParser::Keyword_infdsContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_infsr(RpgParser::Keyword_infsrContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_keyloc(RpgParser::Keyword_keylocContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_maxdev(RpgParser::Keyword_maxdevContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_oflind(RpgParser::Keyword_oflindContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_pass(RpgParser::Keyword_passContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_pgmname(RpgParser::Keyword_pgmnameContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_plist(RpgParser::Keyword_plistContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_prtctl(RpgParser::Keyword_prtctlContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_rafdata(RpgParser::Keyword_rafdataContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_recno(RpgParser::Keyword_recnoContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_rename(RpgParser::Keyword_renameContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_saveds(RpgParser::Keyword_savedsContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_saveind(RpgParser::Keyword_saveindContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_sfile(RpgParser::Keyword_sfileContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_sln(RpgParser::Keyword_slnContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_usropn(RpgParser::Keyword_usropnContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_disk(RpgParser::Keyword_diskContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_workstn(RpgParser::Keyword_workstnContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_printer(RpgParser::Keyword_printerContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_special(RpgParser::Keyword_specialContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_keyed(RpgParser::Keyword_keyedContext *context) = 0;

    virtual antlrcpp::Any visitKeyword_usage(RpgParser::Keyword_usageContext *context) = 0;

    virtual antlrcpp::Any visitLike_lengthAdjustment(RpgParser::Like_lengthAdjustmentContext *context) = 0;

    virtual antlrcpp::Any visitSign(RpgParser::SignContext *context) = 0;

    virtual antlrcpp::Any visitDcl_ds(RpgParser::Dcl_dsContext *context) = 0;

    virtual antlrcpp::Any visitDcl_ds_field(RpgParser::Dcl_ds_fieldContext *context) = 0;

    virtual antlrcpp::Any visitEnd_dcl_ds(RpgParser::End_dcl_dsContext *context) = 0;

    virtual antlrcpp::Any visitDcl_pr(RpgParser::Dcl_prContext *context) = 0;

    virtual antlrcpp::Any visitDcl_pr_field(RpgParser::Dcl_pr_fieldContext *context) = 0;

    virtual antlrcpp::Any visitEnd_dcl_pr(RpgParser::End_dcl_prContext *context) = 0;

    virtual antlrcpp::Any visitDcl_pi(RpgParser::Dcl_piContext *context) = 0;

    virtual antlrcpp::Any visitDcl_pi_field(RpgParser::Dcl_pi_fieldContext *context) = 0;

    virtual antlrcpp::Any visitEnd_dcl_pi(RpgParser::End_dcl_piContext *context) = 0;

    virtual antlrcpp::Any visitDcl_c(RpgParser::Dcl_cContext *context) = 0;

    virtual antlrcpp::Any visitCtl_opt(RpgParser::Ctl_optContext *context) = 0;

    virtual antlrcpp::Any visitDatatypeName(RpgParser::DatatypeNameContext *context) = 0;

    virtual antlrcpp::Any visitBlock(RpgParser::BlockContext *context) = 0;

    virtual antlrcpp::Any visitIfstatement(RpgParser::IfstatementContext *context) = 0;

    virtual antlrcpp::Any visitElseIfClause(RpgParser::ElseIfClauseContext *context) = 0;

    virtual antlrcpp::Any visitElseClause(RpgParser::ElseClauseContext *context) = 0;

    virtual antlrcpp::Any visitCasestatement(RpgParser::CasestatementContext *context) = 0;

    virtual antlrcpp::Any visitCasestatementend(RpgParser::CasestatementendContext *context) = 0;

    virtual antlrcpp::Any visitMonitorstatement(RpgParser::MonitorstatementContext *context) = 0;

    virtual antlrcpp::Any visitBeginmonitor(RpgParser::BeginmonitorContext *context) = 0;

    virtual antlrcpp::Any visitEndmonitor(RpgParser::EndmonitorContext *context) = 0;

    virtual antlrcpp::Any visitOnError(RpgParser::OnErrorContext *context) = 0;

    virtual antlrcpp::Any visitSelectstatement(RpgParser::SelectstatementContext *context) = 0;

    virtual antlrcpp::Any visitOther(RpgParser::OtherContext *context) = 0;

    virtual antlrcpp::Any visitBeginselect(RpgParser::BeginselectContext *context) = 0;

    virtual antlrcpp::Any visitWhenstatement(RpgParser::WhenstatementContext *context) = 0;

    virtual antlrcpp::Any visitWhen(RpgParser::WhenContext *context) = 0;

    virtual antlrcpp::Any visitCsWHENxx(RpgParser::CsWHENxxContext *context) = 0;

    virtual antlrcpp::Any visitEndselect(RpgParser::EndselectContext *context) = 0;

    virtual antlrcpp::Any visitBeginif(RpgParser::BeginifContext *context) = 0;

    virtual antlrcpp::Any visitBegindou(RpgParser::BegindouContext *context) = 0;

    virtual antlrcpp::Any visitBegindow(RpgParser::BegindowContext *context) = 0;

    virtual antlrcpp::Any visitBegindo(RpgParser::BegindoContext *context) = 0;

    virtual antlrcpp::Any visitElseifstmt(RpgParser::ElseifstmtContext *context) = 0;

    virtual antlrcpp::Any visitElsestmt(RpgParser::ElsestmtContext *context) = 0;

    virtual antlrcpp::Any visitCsIFxx(RpgParser::CsIFxxContext *context) = 0;

    virtual antlrcpp::Any visitCsDOUxx(RpgParser::CsDOUxxContext *context) = 0;

    virtual antlrcpp::Any visitCsDOWxx(RpgParser::CsDOWxxContext *context) = 0;

    virtual antlrcpp::Any visitComplexCondxx(RpgParser::ComplexCondxxContext *context) = 0;

    virtual antlrcpp::Any visitCsANDxx(RpgParser::CsANDxxContext *context) = 0;

    virtual antlrcpp::Any visitCsORxx(RpgParser::CsORxxContext *context) = 0;

    virtual antlrcpp::Any visitForstatement(RpgParser::ForstatementContext *context) = 0;

    virtual antlrcpp::Any visitBeginfor(RpgParser::BeginforContext *context) = 0;

    virtual antlrcpp::Any visitEndif(RpgParser::EndifContext *context) = 0;

    virtual antlrcpp::Any visitEnddo(RpgParser::EnddoContext *context) = 0;

    virtual antlrcpp::Any visitEndfor(RpgParser::EndforContext *context) = 0;

    virtual antlrcpp::Any visitDspec_fixed(RpgParser::Dspec_fixedContext *context) = 0;

    virtual antlrcpp::Any visitDs_name(RpgParser::Ds_nameContext *context) = 0;

    virtual antlrcpp::Any visitOspec_fixed(RpgParser::Ospec_fixedContext *context) = 0;

    virtual antlrcpp::Any visitOs_fixed_pgmdesc1(RpgParser::Os_fixed_pgmdesc1Context *context) = 0;

    virtual antlrcpp::Any visitOutputConditioningOnOffIndicator(RpgParser::OutputConditioningOnOffIndicatorContext *context) = 0;

    virtual antlrcpp::Any visitOutputConditioningIndicator(RpgParser::OutputConditioningIndicatorContext *context) = 0;

    virtual antlrcpp::Any visitOs_fixed_pgmdesc_compound(RpgParser::Os_fixed_pgmdesc_compoundContext *context) = 0;

    virtual antlrcpp::Any visitOs_fixed_pgmdesc2(RpgParser::Os_fixed_pgmdesc2Context *context) = 0;

    virtual antlrcpp::Any visitOs_fixed_pgmfield(RpgParser::Os_fixed_pgmfieldContext *context) = 0;

    virtual antlrcpp::Any visitPs_name(RpgParser::Ps_nameContext *context) = 0;

    virtual antlrcpp::Any visitFspec(RpgParser::FspecContext *context) = 0;

    virtual antlrcpp::Any visitFilename(RpgParser::FilenameContext *context) = 0;

    virtual antlrcpp::Any visitFs_parm(RpgParser::Fs_parmContext *context) = 0;

    virtual antlrcpp::Any visitFs_string(RpgParser::Fs_stringContext *context) = 0;

    virtual antlrcpp::Any visitFs_keyword(RpgParser::Fs_keywordContext *context) = 0;

    virtual antlrcpp::Any visitFspec_fixed(RpgParser::Fspec_fixedContext *context) = 0;

    virtual antlrcpp::Any visitCspec_fixed(RpgParser::Cspec_fixedContext *context) = 0;

    virtual antlrcpp::Any visitCspec_continuedIndicators(RpgParser::Cspec_continuedIndicatorsContext *context) = 0;

    virtual antlrcpp::Any visitCspec_blank(RpgParser::Cspec_blankContext *context) = 0;

    virtual antlrcpp::Any visitBlank_spec(RpgParser::Blank_specContext *context) = 0;

    virtual antlrcpp::Any visitPiBegin(RpgParser::PiBeginContext *context) = 0;

    virtual antlrcpp::Any visitParm_fixed(RpgParser::Parm_fixedContext *context) = 0;

    virtual antlrcpp::Any visitPr_parm_fixed(RpgParser::Pr_parm_fixedContext *context) = 0;

    virtual antlrcpp::Any visitPi_parm_fixed(RpgParser::Pi_parm_fixedContext *context) = 0;

    virtual antlrcpp::Any visitProcedure(RpgParser::ProcedureContext *context) = 0;

    virtual antlrcpp::Any visitBeginProcedure(RpgParser::BeginProcedureContext *context) = 0;

    virtual antlrcpp::Any visitEndProcedure(RpgParser::EndProcedureContext *context) = 0;

    virtual antlrcpp::Any visitPsBegin(RpgParser::PsBeginContext *context) = 0;

    virtual antlrcpp::Any visitFreeBeginProcedure(RpgParser::FreeBeginProcedureContext *context) = 0;

    virtual antlrcpp::Any visitPsEnd(RpgParser::PsEndContext *context) = 0;

    virtual antlrcpp::Any visitFreeEndProcedure(RpgParser::FreeEndProcedureContext *context) = 0;

    virtual antlrcpp::Any visitPrBegin(RpgParser::PrBeginContext *context) = 0;

    virtual antlrcpp::Any visitSubroutine(RpgParser::SubroutineContext *context) = 0;

    virtual antlrcpp::Any visitSubprocedurestatement(RpgParser::SubprocedurestatementContext *context) = 0;

    virtual antlrcpp::Any visitBegsr(RpgParser::BegsrContext *context) = 0;

    virtual antlrcpp::Any visitEndsr(RpgParser::EndsrContext *context) = 0;

    virtual antlrcpp::Any visitCsBEGSR(RpgParser::CsBEGSRContext *context) = 0;

    virtual antlrcpp::Any visitFreeBEGSR(RpgParser::FreeBEGSRContext *context) = 0;

    virtual antlrcpp::Any visitCsENDSR(RpgParser::CsENDSRContext *context) = 0;

    virtual antlrcpp::Any visitFreeENDSR(RpgParser::FreeENDSRContext *context) = 0;

    virtual antlrcpp::Any visitOnOffIndicatorsFlag(RpgParser::OnOffIndicatorsFlagContext *context) = 0;

    virtual antlrcpp::Any visitCs_controlLevel(RpgParser::Cs_controlLevelContext *context) = 0;

    virtual antlrcpp::Any visitCs_indicators(RpgParser::Cs_indicatorsContext *context) = 0;

    virtual antlrcpp::Any visitResultIndicator(RpgParser::ResultIndicatorContext *context) = 0;

    virtual antlrcpp::Any visitCspec_fixed_sql(RpgParser::Cspec_fixed_sqlContext *context) = 0;

    virtual antlrcpp::Any visitCspec_fixed_standard(RpgParser::Cspec_fixed_standardContext *context) = 0;

    virtual antlrcpp::Any visitCspec_fixed_standard_parts(RpgParser::Cspec_fixed_standard_partsContext *context) = 0;

    virtual antlrcpp::Any visitCsACQ(RpgParser::CsACQContext *context) = 0;

    virtual antlrcpp::Any visitCsADD(RpgParser::CsADDContext *context) = 0;

    virtual antlrcpp::Any visitCsADDDUR(RpgParser::CsADDDURContext *context) = 0;

    virtual antlrcpp::Any visitCsALLOC(RpgParser::CsALLOCContext *context) = 0;

    virtual antlrcpp::Any visitCsANDEQ(RpgParser::CsANDEQContext *context) = 0;

    virtual antlrcpp::Any visitCsANDNE(RpgParser::CsANDNEContext *context) = 0;

    virtual antlrcpp::Any visitCsANDLE(RpgParser::CsANDLEContext *context) = 0;

    virtual antlrcpp::Any visitCsANDLT(RpgParser::CsANDLTContext *context) = 0;

    virtual antlrcpp::Any visitCsANDGE(RpgParser::CsANDGEContext *context) = 0;

    virtual antlrcpp::Any visitCsANDGT(RpgParser::CsANDGTContext *context) = 0;

    virtual antlrcpp::Any visitCsBITOFF(RpgParser::CsBITOFFContext *context) = 0;

    virtual antlrcpp::Any visitCsBITON(RpgParser::CsBITONContext *context) = 0;

    virtual antlrcpp::Any visitCsCABxx(RpgParser::CsCABxxContext *context) = 0;

    virtual antlrcpp::Any visitCsCABEQ(RpgParser::CsCABEQContext *context) = 0;

    virtual antlrcpp::Any visitCsCABNE(RpgParser::CsCABNEContext *context) = 0;

    virtual antlrcpp::Any visitCsCABLE(RpgParser::CsCABLEContext *context) = 0;

    virtual antlrcpp::Any visitCsCABLT(RpgParser::CsCABLTContext *context) = 0;

    virtual antlrcpp::Any visitCsCABGE(RpgParser::CsCABGEContext *context) = 0;

    virtual antlrcpp::Any visitCsCABGT(RpgParser::CsCABGTContext *context) = 0;

    virtual antlrcpp::Any visitCsCALL(RpgParser::CsCALLContext *context) = 0;

    virtual antlrcpp::Any visitCsCALLB(RpgParser::CsCALLBContext *context) = 0;

    virtual antlrcpp::Any visitCsCALLP(RpgParser::CsCALLPContext *context) = 0;

    virtual antlrcpp::Any visitCsCASEQ(RpgParser::CsCASEQContext *context) = 0;

    virtual antlrcpp::Any visitCsCASNE(RpgParser::CsCASNEContext *context) = 0;

    virtual antlrcpp::Any visitCsCASLE(RpgParser::CsCASLEContext *context) = 0;

    virtual antlrcpp::Any visitCsCASLT(RpgParser::CsCASLTContext *context) = 0;

    virtual antlrcpp::Any visitCsCASGE(RpgParser::CsCASGEContext *context) = 0;

    virtual antlrcpp::Any visitCsCASGT(RpgParser::CsCASGTContext *context) = 0;

    virtual antlrcpp::Any visitCsCAS(RpgParser::CsCASContext *context) = 0;

    virtual antlrcpp::Any visitCsCAT(RpgParser::CsCATContext *context) = 0;

    virtual antlrcpp::Any visitCsCHAIN(RpgParser::CsCHAINContext *context) = 0;

    virtual antlrcpp::Any visitCsCHECK(RpgParser::CsCHECKContext *context) = 0;

    virtual antlrcpp::Any visitCsCHECKR(RpgParser::CsCHECKRContext *context) = 0;

    virtual antlrcpp::Any visitCsCLEAR(RpgParser::CsCLEARContext *context) = 0;

    virtual antlrcpp::Any visitCsCLOSE(RpgParser::CsCLOSEContext *context) = 0;

    virtual antlrcpp::Any visitCsCOMMIT(RpgParser::CsCOMMITContext *context) = 0;

    virtual antlrcpp::Any visitCsCOMP(RpgParser::CsCOMPContext *context) = 0;

    virtual antlrcpp::Any visitCsDEALLOC(RpgParser::CsDEALLOCContext *context) = 0;

    virtual antlrcpp::Any visitCsDEFINE(RpgParser::CsDEFINEContext *context) = 0;

    virtual antlrcpp::Any visitCsDELETE(RpgParser::CsDELETEContext *context) = 0;

    virtual antlrcpp::Any visitCsDIV(RpgParser::CsDIVContext *context) = 0;

    virtual antlrcpp::Any visitCsDO(RpgParser::CsDOContext *context) = 0;

    virtual antlrcpp::Any visitCsDOU(RpgParser::CsDOUContext *context) = 0;

    virtual antlrcpp::Any visitCsDOUEQ(RpgParser::CsDOUEQContext *context) = 0;

    virtual antlrcpp::Any visitCsDOUNE(RpgParser::CsDOUNEContext *context) = 0;

    virtual antlrcpp::Any visitCsDOULE(RpgParser::CsDOULEContext *context) = 0;

    virtual antlrcpp::Any visitCsDOULT(RpgParser::CsDOULTContext *context) = 0;

    virtual antlrcpp::Any visitCsDOUGE(RpgParser::CsDOUGEContext *context) = 0;

    virtual antlrcpp::Any visitCsDOUGT(RpgParser::CsDOUGTContext *context) = 0;

    virtual antlrcpp::Any visitCsDOW(RpgParser::CsDOWContext *context) = 0;

    virtual antlrcpp::Any visitCsDOWEQ(RpgParser::CsDOWEQContext *context) = 0;

    virtual antlrcpp::Any visitCsDOWNE(RpgParser::CsDOWNEContext *context) = 0;

    virtual antlrcpp::Any visitCsDOWLE(RpgParser::CsDOWLEContext *context) = 0;

    virtual antlrcpp::Any visitCsDOWLT(RpgParser::CsDOWLTContext *context) = 0;

    virtual antlrcpp::Any visitCsDOWGE(RpgParser::CsDOWGEContext *context) = 0;

    virtual antlrcpp::Any visitCsDOWGT(RpgParser::CsDOWGTContext *context) = 0;

    virtual antlrcpp::Any visitCsDSPLY(RpgParser::CsDSPLYContext *context) = 0;

    virtual antlrcpp::Any visitCsDUMP(RpgParser::CsDUMPContext *context) = 0;

    virtual antlrcpp::Any visitCsELSE(RpgParser::CsELSEContext *context) = 0;

    virtual antlrcpp::Any visitCsELSEIF(RpgParser::CsELSEIFContext *context) = 0;

    virtual antlrcpp::Any visitCsEND(RpgParser::CsENDContext *context) = 0;

    virtual antlrcpp::Any visitCsENDCS(RpgParser::CsENDCSContext *context) = 0;

    virtual antlrcpp::Any visitCsENDDO(RpgParser::CsENDDOContext *context) = 0;

    virtual antlrcpp::Any visitCsENDFOR(RpgParser::CsENDFORContext *context) = 0;

    virtual antlrcpp::Any visitCsENDIF(RpgParser::CsENDIFContext *context) = 0;

    virtual antlrcpp::Any visitCsENDMON(RpgParser::CsENDMONContext *context) = 0;

    virtual antlrcpp::Any visitCsENDSL(RpgParser::CsENDSLContext *context) = 0;

    virtual antlrcpp::Any visitCsEVAL(RpgParser::CsEVALContext *context) = 0;

    virtual antlrcpp::Any visitCsEVAL_CORR(RpgParser::CsEVAL_CORRContext *context) = 0;

    virtual antlrcpp::Any visitCsEVALR(RpgParser::CsEVALRContext *context) = 0;

    virtual antlrcpp::Any visitCsEXCEPT(RpgParser::CsEXCEPTContext *context) = 0;

    virtual antlrcpp::Any visitCsEXFMT(RpgParser::CsEXFMTContext *context) = 0;

    virtual antlrcpp::Any visitCsEXSR(RpgParser::CsEXSRContext *context) = 0;

    virtual antlrcpp::Any visitCsEXTRCT(RpgParser::CsEXTRCTContext *context) = 0;

    virtual antlrcpp::Any visitCsFEOD(RpgParser::CsFEODContext *context) = 0;

    virtual antlrcpp::Any visitCsFOR(RpgParser::CsFORContext *context) = 0;

    virtual antlrcpp::Any visitByExpression(RpgParser::ByExpressionContext *context) = 0;

    virtual antlrcpp::Any visitStopExpression(RpgParser::StopExpressionContext *context) = 0;

    virtual antlrcpp::Any visitCsFORCE(RpgParser::CsFORCEContext *context) = 0;

    virtual antlrcpp::Any visitCsGOTO(RpgParser::CsGOTOContext *context) = 0;

    virtual antlrcpp::Any visitCsIF(RpgParser::CsIFContext *context) = 0;

    virtual antlrcpp::Any visitCsIFEQ(RpgParser::CsIFEQContext *context) = 0;

    virtual antlrcpp::Any visitCsIFNE(RpgParser::CsIFNEContext *context) = 0;

    virtual antlrcpp::Any visitCsIFLE(RpgParser::CsIFLEContext *context) = 0;

    virtual antlrcpp::Any visitCsIFLT(RpgParser::CsIFLTContext *context) = 0;

    virtual antlrcpp::Any visitCsIFGE(RpgParser::CsIFGEContext *context) = 0;

    virtual antlrcpp::Any visitCsIFGT(RpgParser::CsIFGTContext *context) = 0;

    virtual antlrcpp::Any visitCsIN(RpgParser::CsINContext *context) = 0;

    virtual antlrcpp::Any visitCsITER(RpgParser::CsITERContext *context) = 0;

    virtual antlrcpp::Any visitCsKLIST(RpgParser::CsKLISTContext *context) = 0;

    virtual antlrcpp::Any visitCsKFLD(RpgParser::CsKFLDContext *context) = 0;

    virtual antlrcpp::Any visitCsLEAVE(RpgParser::CsLEAVEContext *context) = 0;

    virtual antlrcpp::Any visitCsLEAVESR(RpgParser::CsLEAVESRContext *context) = 0;

    virtual antlrcpp::Any visitCsLOOKUP(RpgParser::CsLOOKUPContext *context) = 0;

    virtual antlrcpp::Any visitCsMHHZO(RpgParser::CsMHHZOContext *context) = 0;

    virtual antlrcpp::Any visitCsMHLZO(RpgParser::CsMHLZOContext *context) = 0;

    virtual antlrcpp::Any visitCsMLHZO(RpgParser::CsMLHZOContext *context) = 0;

    virtual antlrcpp::Any visitCsMLLZO(RpgParser::CsMLLZOContext *context) = 0;

    virtual antlrcpp::Any visitCsMONITOR(RpgParser::CsMONITORContext *context) = 0;

    virtual antlrcpp::Any visitCsMOVE(RpgParser::CsMOVEContext *context) = 0;

    virtual antlrcpp::Any visitCsMOVEA(RpgParser::CsMOVEAContext *context) = 0;

    virtual antlrcpp::Any visitCsMOVEL(RpgParser::CsMOVELContext *context) = 0;

    virtual antlrcpp::Any visitCsMULT(RpgParser::CsMULTContext *context) = 0;

    virtual antlrcpp::Any visitCsMVR(RpgParser::CsMVRContext *context) = 0;

    virtual antlrcpp::Any visitCsNEXT(RpgParser::CsNEXTContext *context) = 0;

    virtual antlrcpp::Any visitCsOCCUR(RpgParser::CsOCCURContext *context) = 0;

    virtual antlrcpp::Any visitCsON_ERROR(RpgParser::CsON_ERRORContext *context) = 0;

    virtual antlrcpp::Any visitOnErrorCode(RpgParser::OnErrorCodeContext *context) = 0;

    virtual antlrcpp::Any visitCsOPEN(RpgParser::CsOPENContext *context) = 0;

    virtual antlrcpp::Any visitCsOREQ(RpgParser::CsOREQContext *context) = 0;

    virtual antlrcpp::Any visitCsORNE(RpgParser::CsORNEContext *context) = 0;

    virtual antlrcpp::Any visitCsORLE(RpgParser::CsORLEContext *context) = 0;

    virtual antlrcpp::Any visitCsORLT(RpgParser::CsORLTContext *context) = 0;

    virtual antlrcpp::Any visitCsORGE(RpgParser::CsORGEContext *context) = 0;

    virtual antlrcpp::Any visitCsORGT(RpgParser::CsORGTContext *context) = 0;

    virtual antlrcpp::Any visitCsOTHER(RpgParser::CsOTHERContext *context) = 0;

    virtual antlrcpp::Any visitCsOUT(RpgParser::CsOUTContext *context) = 0;

    virtual antlrcpp::Any visitCsPARM(RpgParser::CsPARMContext *context) = 0;

    virtual antlrcpp::Any visitCsPLIST(RpgParser::CsPLISTContext *context) = 0;

    virtual antlrcpp::Any visitCsPOST(RpgParser::CsPOSTContext *context) = 0;

    virtual antlrcpp::Any visitCsREAD(RpgParser::CsREADContext *context) = 0;

    virtual antlrcpp::Any visitCsREADC(RpgParser::CsREADCContext *context) = 0;

    virtual antlrcpp::Any visitCsREADE(RpgParser::CsREADEContext *context) = 0;

    virtual antlrcpp::Any visitCsREADP(RpgParser::CsREADPContext *context) = 0;

    virtual antlrcpp::Any visitCsREADPE(RpgParser::CsREADPEContext *context) = 0;

    virtual antlrcpp::Any visitCsREALLOC(RpgParser::CsREALLOCContext *context) = 0;

    virtual antlrcpp::Any visitCsREL(RpgParser::CsRELContext *context) = 0;

    virtual antlrcpp::Any visitCsRESET(RpgParser::CsRESETContext *context) = 0;

    virtual antlrcpp::Any visitCsRETURN(RpgParser::CsRETURNContext *context) = 0;

    virtual antlrcpp::Any visitCsROLBK(RpgParser::CsROLBKContext *context) = 0;

    virtual antlrcpp::Any visitCsSCAN(RpgParser::CsSCANContext *context) = 0;

    virtual antlrcpp::Any visitCsSELECT(RpgParser::CsSELECTContext *context) = 0;

    virtual antlrcpp::Any visitCsSETGT(RpgParser::CsSETGTContext *context) = 0;

    virtual antlrcpp::Any visitCsSETLL(RpgParser::CsSETLLContext *context) = 0;

    virtual antlrcpp::Any visitCsSETOFF(RpgParser::CsSETOFFContext *context) = 0;

    virtual antlrcpp::Any visitCsSETON(RpgParser::CsSETONContext *context) = 0;

    virtual antlrcpp::Any visitCsSHTDN(RpgParser::CsSHTDNContext *context) = 0;

    virtual antlrcpp::Any visitCsSORTA(RpgParser::CsSORTAContext *context) = 0;

    virtual antlrcpp::Any visitCsSQRT(RpgParser::CsSQRTContext *context) = 0;

    virtual antlrcpp::Any visitCsSUB(RpgParser::CsSUBContext *context) = 0;

    virtual antlrcpp::Any visitCsSUBDUR(RpgParser::CsSUBDURContext *context) = 0;

    virtual antlrcpp::Any visitCsSUBST(RpgParser::CsSUBSTContext *context) = 0;

    virtual antlrcpp::Any visitCsTAG(RpgParser::CsTAGContext *context) = 0;

    virtual antlrcpp::Any visitCsTEST(RpgParser::CsTESTContext *context) = 0;

    virtual antlrcpp::Any visitCsTESTB(RpgParser::CsTESTBContext *context) = 0;

    virtual antlrcpp::Any visitCsTESTN(RpgParser::CsTESTNContext *context) = 0;

    virtual antlrcpp::Any visitCsTESTZ(RpgParser::CsTESTZContext *context) = 0;

    virtual antlrcpp::Any visitCsTIME(RpgParser::CsTIMEContext *context) = 0;

    virtual antlrcpp::Any visitCsUNLOCK(RpgParser::CsUNLOCKContext *context) = 0;

    virtual antlrcpp::Any visitCsUPDATE(RpgParser::CsUPDATEContext *context) = 0;

    virtual antlrcpp::Any visitCsWHEN(RpgParser::CsWHENContext *context) = 0;

    virtual antlrcpp::Any visitCsWHENEQ(RpgParser::CsWHENEQContext *context) = 0;

    virtual antlrcpp::Any visitCsWHENNE(RpgParser::CsWHENNEContext *context) = 0;

    virtual antlrcpp::Any visitCsWHENLE(RpgParser::CsWHENLEContext *context) = 0;

    virtual antlrcpp::Any visitCsWHENLT(RpgParser::CsWHENLTContext *context) = 0;

    virtual antlrcpp::Any visitCsWHENGE(RpgParser::CsWHENGEContext *context) = 0;

    virtual antlrcpp::Any visitCsWHENGT(RpgParser::CsWHENGTContext *context) = 0;

    virtual antlrcpp::Any visitCsWRITE(RpgParser::CsWRITEContext *context) = 0;

    virtual antlrcpp::Any visitCsXFOOT(RpgParser::CsXFOOTContext *context) = 0;

    virtual antlrcpp::Any visitCsXLATE(RpgParser::CsXLATEContext *context) = 0;

    virtual antlrcpp::Any visitCsXML_INTO(RpgParser::CsXML_INTOContext *context) = 0;

    virtual antlrcpp::Any visitCsXML_SAX(RpgParser::CsXML_SAXContext *context) = 0;

    virtual antlrcpp::Any visitCsZ_ADD(RpgParser::CsZ_ADDContext *context) = 0;

    virtual antlrcpp::Any visitCsZ_SUB(RpgParser::CsZ_SUBContext *context) = 0;

    virtual antlrcpp::Any visitCs_operationExtender(RpgParser::Cs_operationExtenderContext *context) = 0;

    virtual antlrcpp::Any visitFactor(RpgParser::FactorContext *context) = 0;

    virtual antlrcpp::Any visitFactorContent(RpgParser::FactorContentContext *context) = 0;

    virtual antlrcpp::Any visitResultType(RpgParser::ResultTypeContext *context) = 0;

    virtual antlrcpp::Any visitCs_fixed_comments(RpgParser::Cs_fixed_commentsContext *context) = 0;

    virtual antlrcpp::Any visitCspec_fixed_x2(RpgParser::Cspec_fixed_x2Context *context) = 0;

    virtual antlrcpp::Any visitCsOperationAndExtendedFactor2(RpgParser::CsOperationAndExtendedFactor2Context *context) = 0;

    virtual antlrcpp::Any visitIspec_fixed(RpgParser::Ispec_fixedContext *context) = 0;

    virtual antlrcpp::Any visitFieldRecordRelation(RpgParser::FieldRecordRelationContext *context) = 0;

    virtual antlrcpp::Any visitFieldIndicator(RpgParser::FieldIndicatorContext *context) = 0;

    virtual antlrcpp::Any visitIs_external_rec(RpgParser::Is_external_recContext *context) = 0;

    virtual antlrcpp::Any visitIs_rec(RpgParser::Is_recContext *context) = 0;

    virtual antlrcpp::Any visitRecordIdIndicator(RpgParser::RecordIdIndicatorContext *context) = 0;

    virtual antlrcpp::Any visitIs_external_field(RpgParser::Is_external_fieldContext *context) = 0;

    virtual antlrcpp::Any visitControlLevelIndicator(RpgParser::ControlLevelIndicatorContext *context) = 0;

    virtual antlrcpp::Any visitMatchingFieldsIndicator(RpgParser::MatchingFieldsIndicatorContext *context) = 0;

    virtual antlrcpp::Any visitHspec_fixed(RpgParser::Hspec_fixedContext *context) = 0;

    virtual antlrcpp::Any visitSetDecedit(RpgParser::SetDeceditContext *context) = 0;

    virtual antlrcpp::Any visitHspecExpressions(RpgParser::HspecExpressionsContext *context) = 0;

    virtual antlrcpp::Any visitHs_decedit_set(RpgParser::Hs_decedit_setContext *context) = 0;

    virtual antlrcpp::Any visitHs_expression(RpgParser::Hs_expressionContext *context) = 0;

    virtual antlrcpp::Any visitHs_parm(RpgParser::Hs_parmContext *context) = 0;

    virtual antlrcpp::Any visitHs_string(RpgParser::Hs_stringContext *context) = 0;

    virtual antlrcpp::Any visitBlank_line(RpgParser::Blank_lineContext *context) = 0;

    virtual antlrcpp::Any visitDirective(RpgParser::DirectiveContext *context) = 0;

    virtual antlrcpp::Any visitSpace_directive(RpgParser::Space_directiveContext *context) = 0;

    virtual antlrcpp::Any visitDir_copy(RpgParser::Dir_copyContext *context) = 0;

    virtual antlrcpp::Any visitDir_include(RpgParser::Dir_includeContext *context) = 0;

    virtual antlrcpp::Any visitDir_if(RpgParser::Dir_ifContext *context) = 0;

    virtual antlrcpp::Any visitDir_elseif(RpgParser::Dir_elseifContext *context) = 0;

    virtual antlrcpp::Any visitDir_else(RpgParser::Dir_elseContext *context) = 0;

    virtual antlrcpp::Any visitDir_endif(RpgParser::Dir_endifContext *context) = 0;

    virtual antlrcpp::Any visitDir_define(RpgParser::Dir_defineContext *context) = 0;

    virtual antlrcpp::Any visitDir_undefine(RpgParser::Dir_undefineContext *context) = 0;

    virtual antlrcpp::Any visitDir_eof(RpgParser::Dir_eofContext *context) = 0;

    virtual antlrcpp::Any visitBeginfree_directive(RpgParser::Beginfree_directiveContext *context) = 0;

    virtual antlrcpp::Any visitEndfree_directive(RpgParser::Endfree_directiveContext *context) = 0;

    virtual antlrcpp::Any visitCopyText(RpgParser::CopyTextContext *context) = 0;

    virtual antlrcpp::Any visitTrailing_ws(RpgParser::Trailing_wsContext *context) = 0;

    virtual antlrcpp::Any visitTitle_directive(RpgParser::Title_directiveContext *context) = 0;

    virtual antlrcpp::Any visitTitle_text(RpgParser::Title_textContext *context) = 0;

    virtual antlrcpp::Any visitOp(RpgParser::OpContext *context) = 0;

    virtual antlrcpp::Any visitOp_acq(RpgParser::Op_acqContext *context) = 0;

    virtual antlrcpp::Any visitOp_callp(RpgParser::Op_callpContext *context) = 0;

    virtual antlrcpp::Any visitOp_chain(RpgParser::Op_chainContext *context) = 0;

    virtual antlrcpp::Any visitOp_clear(RpgParser::Op_clearContext *context) = 0;

    virtual antlrcpp::Any visitOp_close(RpgParser::Op_closeContext *context) = 0;

    virtual antlrcpp::Any visitOp_commit(RpgParser::Op_commitContext *context) = 0;

    virtual antlrcpp::Any visitOp_dealloc(RpgParser::Op_deallocContext *context) = 0;

    virtual antlrcpp::Any visitOp_delete(RpgParser::Op_deleteContext *context) = 0;

    virtual antlrcpp::Any visitOp_dou(RpgParser::Op_douContext *context) = 0;

    virtual antlrcpp::Any visitOp_dow(RpgParser::Op_dowContext *context) = 0;

    virtual antlrcpp::Any visitOp_dsply(RpgParser::Op_dsplyContext *context) = 0;

    virtual antlrcpp::Any visitOp_dump(RpgParser::Op_dumpContext *context) = 0;

    virtual antlrcpp::Any visitOp_else(RpgParser::Op_elseContext *context) = 0;

    virtual antlrcpp::Any visitOp_elseif(RpgParser::Op_elseifContext *context) = 0;

    virtual antlrcpp::Any visitOp_enddo(RpgParser::Op_enddoContext *context) = 0;

    virtual antlrcpp::Any visitOp_endfor(RpgParser::Op_endforContext *context) = 0;

    virtual antlrcpp::Any visitOp_endif(RpgParser::Op_endifContext *context) = 0;

    virtual antlrcpp::Any visitOp_endmon(RpgParser::Op_endmonContext *context) = 0;

    virtual antlrcpp::Any visitOp_endsl(RpgParser::Op_endslContext *context) = 0;

    virtual antlrcpp::Any visitOp_eval(RpgParser::Op_evalContext *context) = 0;

    virtual antlrcpp::Any visitOp_evalr(RpgParser::Op_evalrContext *context) = 0;

    virtual antlrcpp::Any visitOp_eval_corr(RpgParser::Op_eval_corrContext *context) = 0;

    virtual antlrcpp::Any visitOp_except(RpgParser::Op_exceptContext *context) = 0;

    virtual antlrcpp::Any visitOp_exfmt(RpgParser::Op_exfmtContext *context) = 0;

    virtual antlrcpp::Any visitOp_exsr(RpgParser::Op_exsrContext *context) = 0;

    virtual antlrcpp::Any visitOp_feod(RpgParser::Op_feodContext *context) = 0;

    virtual antlrcpp::Any visitOp_for(RpgParser::Op_forContext *context) = 0;

    virtual antlrcpp::Any visitOp_force(RpgParser::Op_forceContext *context) = 0;

    virtual antlrcpp::Any visitOp_if(RpgParser::Op_ifContext *context) = 0;

    virtual antlrcpp::Any visitOp_in(RpgParser::Op_inContext *context) = 0;

    virtual antlrcpp::Any visitOp_iter(RpgParser::Op_iterContext *context) = 0;

    virtual antlrcpp::Any visitOp_leave(RpgParser::Op_leaveContext *context) = 0;

    virtual antlrcpp::Any visitOp_leavesr(RpgParser::Op_leavesrContext *context) = 0;

    virtual antlrcpp::Any visitOp_monitor(RpgParser::Op_monitorContext *context) = 0;

    virtual antlrcpp::Any visitOp_next(RpgParser::Op_nextContext *context) = 0;

    virtual antlrcpp::Any visitOp_on_error(RpgParser::Op_on_errorContext *context) = 0;

    virtual antlrcpp::Any visitOp_open(RpgParser::Op_openContext *context) = 0;

    virtual antlrcpp::Any visitOp_other(RpgParser::Op_otherContext *context) = 0;

    virtual antlrcpp::Any visitOp_out(RpgParser::Op_outContext *context) = 0;

    virtual antlrcpp::Any visitOp_post(RpgParser::Op_postContext *context) = 0;

    virtual antlrcpp::Any visitOp_read(RpgParser::Op_readContext *context) = 0;

    virtual antlrcpp::Any visitOp_readc(RpgParser::Op_readcContext *context) = 0;

    virtual antlrcpp::Any visitOp_reade(RpgParser::Op_readeContext *context) = 0;

    virtual antlrcpp::Any visitOp_readp(RpgParser::Op_readpContext *context) = 0;

    virtual antlrcpp::Any visitOp_readpe(RpgParser::Op_readpeContext *context) = 0;

    virtual antlrcpp::Any visitOp_rel(RpgParser::Op_relContext *context) = 0;

    virtual antlrcpp::Any visitOp_reset2(RpgParser::Op_reset2Context *context) = 0;

    virtual antlrcpp::Any visitOp_reset(RpgParser::Op_resetContext *context) = 0;

    virtual antlrcpp::Any visitOp_return(RpgParser::Op_returnContext *context) = 0;

    virtual antlrcpp::Any visitOp_rolbk(RpgParser::Op_rolbkContext *context) = 0;

    virtual antlrcpp::Any visitOp_select(RpgParser::Op_selectContext *context) = 0;

    virtual antlrcpp::Any visitOp_setgt(RpgParser::Op_setgtContext *context) = 0;

    virtual antlrcpp::Any visitOp_setll(RpgParser::Op_setllContext *context) = 0;

    virtual antlrcpp::Any visitOp_sorta(RpgParser::Op_sortaContext *context) = 0;

    virtual antlrcpp::Any visitOp_test(RpgParser::Op_testContext *context) = 0;

    virtual antlrcpp::Any visitOp_unlock(RpgParser::Op_unlockContext *context) = 0;

    virtual antlrcpp::Any visitOp_update(RpgParser::Op_updateContext *context) = 0;

    virtual antlrcpp::Any visitOp_when(RpgParser::Op_whenContext *context) = 0;

    virtual antlrcpp::Any visitOp_write(RpgParser::Op_writeContext *context) = 0;

    virtual antlrcpp::Any visitOp_xml_into(RpgParser::Op_xml_intoContext *context) = 0;

    virtual antlrcpp::Any visitOp_xml_sax(RpgParser::Op_xml_saxContext *context) = 0;

    virtual antlrcpp::Any visitSearch_arg(RpgParser::Search_argContext *context) = 0;

    virtual antlrcpp::Any visitOp_code(RpgParser::Op_codeContext *context) = 0;

    virtual antlrcpp::Any visitBif(RpgParser::BifContext *context) = 0;

    virtual antlrcpp::Any visitOptargs(RpgParser::OptargsContext *context) = 0;

    virtual antlrcpp::Any visitBif_charformat(RpgParser::Bif_charformatContext *context) = 0;

    virtual antlrcpp::Any visitBif_dateformat(RpgParser::Bif_dateformatContext *context) = 0;

    virtual antlrcpp::Any visitBif_timeformat(RpgParser::Bif_timeformatContext *context) = 0;

    virtual antlrcpp::Any visitBif_editccurrency(RpgParser::Bif_editccurrencyContext *context) = 0;

    virtual antlrcpp::Any visitBif_lookupargs(RpgParser::Bif_lookupargsContext *context) = 0;

    virtual antlrcpp::Any visitDurationCode(RpgParser::DurationCodeContext *context) = 0;

    virtual antlrcpp::Any visitBif_timestampargs(RpgParser::Bif_timestampargsContext *context) = 0;

    virtual antlrcpp::Any visitBif_tlookupargs(RpgParser::Bif_tlookupargsContext *context) = 0;

    virtual antlrcpp::Any visitBif_abs(RpgParser::Bif_absContext *context) = 0;

    virtual antlrcpp::Any visitBif_addr(RpgParser::Bif_addrContext *context) = 0;

    virtual antlrcpp::Any visitBif_alloc(RpgParser::Bif_allocContext *context) = 0;

    virtual antlrcpp::Any visitBif_bitand(RpgParser::Bif_bitandContext *context) = 0;

    virtual antlrcpp::Any visitBif_bitnot(RpgParser::Bif_bitnotContext *context) = 0;

    virtual antlrcpp::Any visitBif_bitor(RpgParser::Bif_bitorContext *context) = 0;

    virtual antlrcpp::Any visitBif_bitxor(RpgParser::Bif_bitxorContext *context) = 0;

    virtual antlrcpp::Any visitBif_char(RpgParser::Bif_charContext *context) = 0;

    virtual antlrcpp::Any visitBif_check(RpgParser::Bif_checkContext *context) = 0;

    virtual antlrcpp::Any visitBif_checkr(RpgParser::Bif_checkrContext *context) = 0;

    virtual antlrcpp::Any visitBif_date(RpgParser::Bif_dateContext *context) = 0;

    virtual antlrcpp::Any visitBif_days(RpgParser::Bif_daysContext *context) = 0;

    virtual antlrcpp::Any visitBif_dec(RpgParser::Bif_decContext *context) = 0;

    virtual antlrcpp::Any visitBif_dech(RpgParser::Bif_dechContext *context) = 0;

    virtual antlrcpp::Any visitBif_decpos(RpgParser::Bif_decposContext *context) = 0;

    virtual antlrcpp::Any visitBif_diff(RpgParser::Bif_diffContext *context) = 0;

    virtual antlrcpp::Any visitBif_div(RpgParser::Bif_divContext *context) = 0;

    virtual antlrcpp::Any visitBif_editc(RpgParser::Bif_editcContext *context) = 0;

    virtual antlrcpp::Any visitBif_editflt(RpgParser::Bif_editfltContext *context) = 0;

    virtual antlrcpp::Any visitBif_editw(RpgParser::Bif_editwContext *context) = 0;

    virtual antlrcpp::Any visitBif_elem(RpgParser::Bif_elemContext *context) = 0;

    virtual antlrcpp::Any visitBif_eof(RpgParser::Bif_eofContext *context) = 0;

    virtual antlrcpp::Any visitBif_equal(RpgParser::Bif_equalContext *context) = 0;

    virtual antlrcpp::Any visitBif_error(RpgParser::Bif_errorContext *context) = 0;

    virtual antlrcpp::Any visitBif_fields(RpgParser::Bif_fieldsContext *context) = 0;

    virtual antlrcpp::Any visitBif_float(RpgParser::Bif_floatContext *context) = 0;

    virtual antlrcpp::Any visitBif_found(RpgParser::Bif_foundContext *context) = 0;

    virtual antlrcpp::Any visitBif_graph(RpgParser::Bif_graphContext *context) = 0;

    virtual antlrcpp::Any visitBif_handler(RpgParser::Bif_handlerContext *context) = 0;

    virtual antlrcpp::Any visitBif_hours(RpgParser::Bif_hoursContext *context) = 0;

    virtual antlrcpp::Any visitBif_int(RpgParser::Bif_intContext *context) = 0;

    virtual antlrcpp::Any visitBif_inth(RpgParser::Bif_inthContext *context) = 0;

    virtual antlrcpp::Any visitBif_kds(RpgParser::Bif_kdsContext *context) = 0;

    virtual antlrcpp::Any visitBif_len(RpgParser::Bif_lenContext *context) = 0;

    virtual antlrcpp::Any visitBif_lookup(RpgParser::Bif_lookupContext *context) = 0;

    virtual antlrcpp::Any visitBif_lookuplt(RpgParser::Bif_lookupltContext *context) = 0;

    virtual antlrcpp::Any visitBif_lookuple(RpgParser::Bif_lookupleContext *context) = 0;

    virtual antlrcpp::Any visitBif_lookupgt(RpgParser::Bif_lookupgtContext *context) = 0;

    virtual antlrcpp::Any visitBif_lookupge(RpgParser::Bif_lookupgeContext *context) = 0;

    virtual antlrcpp::Any visitBif_minutes(RpgParser::Bif_minutesContext *context) = 0;

    virtual antlrcpp::Any visitBif_months(RpgParser::Bif_monthsContext *context) = 0;

    virtual antlrcpp::Any visitBif_mseconds(RpgParser::Bif_msecondsContext *context) = 0;

    virtual antlrcpp::Any visitBif_nullind(RpgParser::Bif_nullindContext *context) = 0;

    virtual antlrcpp::Any visitBif_occur(RpgParser::Bif_occurContext *context) = 0;

    virtual antlrcpp::Any visitBif_open(RpgParser::Bif_openContext *context) = 0;

    virtual antlrcpp::Any visitBif_paddr(RpgParser::Bif_paddrContext *context) = 0;

    virtual antlrcpp::Any visitBif_parms(RpgParser::Bif_parmsContext *context) = 0;

    virtual antlrcpp::Any visitBif_parmnum(RpgParser::Bif_parmnumContext *context) = 0;

    virtual antlrcpp::Any visitBif_realloc(RpgParser::Bif_reallocContext *context) = 0;

    virtual antlrcpp::Any visitBif_rem(RpgParser::Bif_remContext *context) = 0;

    virtual antlrcpp::Any visitBif_replace(RpgParser::Bif_replaceContext *context) = 0;

    virtual antlrcpp::Any visitBif_scan(RpgParser::Bif_scanContext *context) = 0;

    virtual antlrcpp::Any visitBif_scanrpl(RpgParser::Bif_scanrplContext *context) = 0;

    virtual antlrcpp::Any visitBif_seconds(RpgParser::Bif_secondsContext *context) = 0;

    virtual antlrcpp::Any visitBif_shtdn(RpgParser::Bif_shtdnContext *context) = 0;

    virtual antlrcpp::Any visitBif_size(RpgParser::Bif_sizeContext *context) = 0;

    virtual antlrcpp::Any visitBif_sqrt(RpgParser::Bif_sqrtContext *context) = 0;

    virtual antlrcpp::Any visitBif_status(RpgParser::Bif_statusContext *context) = 0;

    virtual antlrcpp::Any visitBif_str(RpgParser::Bif_strContext *context) = 0;

    virtual antlrcpp::Any visitBif_subarr(RpgParser::Bif_subarrContext *context) = 0;

    virtual antlrcpp::Any visitBif_subdt(RpgParser::Bif_subdtContext *context) = 0;

    virtual antlrcpp::Any visitBif_subst(RpgParser::Bif_substContext *context) = 0;

    virtual antlrcpp::Any visitBif_this(RpgParser::Bif_thisContext *context) = 0;

    virtual antlrcpp::Any visitBif_time(RpgParser::Bif_timeContext *context) = 0;

    virtual antlrcpp::Any visitBif_timestamp(RpgParser::Bif_timestampContext *context) = 0;

    virtual antlrcpp::Any visitBif_tlookup(RpgParser::Bif_tlookupContext *context) = 0;

    virtual antlrcpp::Any visitBif_tlookuplt(RpgParser::Bif_tlookupltContext *context) = 0;

    virtual antlrcpp::Any visitBif_tlookuple(RpgParser::Bif_tlookupleContext *context) = 0;

    virtual antlrcpp::Any visitBif_tlookupgt(RpgParser::Bif_tlookupgtContext *context) = 0;

    virtual antlrcpp::Any visitBif_tlookupge(RpgParser::Bif_tlookupgeContext *context) = 0;

    virtual antlrcpp::Any visitBif_trim(RpgParser::Bif_trimContext *context) = 0;

    virtual antlrcpp::Any visitBif_triml(RpgParser::Bif_trimlContext *context) = 0;

    virtual antlrcpp::Any visitBif_trimr(RpgParser::Bif_trimrContext *context) = 0;

    virtual antlrcpp::Any visitBif_ucs2(RpgParser::Bif_ucs2Context *context) = 0;

    virtual antlrcpp::Any visitBif_uns(RpgParser::Bif_unsContext *context) = 0;

    virtual antlrcpp::Any visitBif_unsh(RpgParser::Bif_unshContext *context) = 0;

    virtual antlrcpp::Any visitBif_xfoot(RpgParser::Bif_xfootContext *context) = 0;

    virtual antlrcpp::Any visitBif_xlate(RpgParser::Bif_xlateContext *context) = 0;

    virtual antlrcpp::Any visitBif_xml(RpgParser::Bif_xmlContext *context) = 0;

    virtual antlrcpp::Any visitBif_years(RpgParser::Bif_yearsContext *context) = 0;

    virtual antlrcpp::Any visitBif_code(RpgParser::Bif_codeContext *context) = 0;

    virtual antlrcpp::Any visitFree(RpgParser::FreeContext *context) = 0;

    virtual antlrcpp::Any visitC_free(RpgParser::C_freeContext *context) = 0;

    virtual antlrcpp::Any visitControl(RpgParser::ControlContext *context) = 0;

    virtual antlrcpp::Any visitExec_sql(RpgParser::Exec_sqlContext *context) = 0;

    virtual antlrcpp::Any visitBaseExpression(RpgParser::BaseExpressionContext *context) = 0;

    virtual antlrcpp::Any visitIndicator(RpgParser::IndicatorContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentExpression(RpgParser::AssignmentExpressionContext *context) = 0;

    virtual antlrcpp::Any visitAssignOperatorExpression(RpgParser::AssignOperatorExpressionContext *context) = 0;

    virtual antlrcpp::Any visitEvalExpression(RpgParser::EvalExpressionContext *context) = 0;

    virtual antlrcpp::Any visitSimpleExpression(RpgParser::SimpleExpressionContext *context) = 0;

    virtual antlrcpp::Any visitUnaryExpression(RpgParser::UnaryExpressionContext *context) = 0;

    virtual antlrcpp::Any visitExpression(RpgParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitPexpression(RpgParser::PexpressionContext *context) = 0;

    virtual antlrcpp::Any visitIndicator_expr(RpgParser::Indicator_exprContext *context) = 0;

    virtual antlrcpp::Any visitFunction(RpgParser::FunctionContext *context) = 0;

    virtual antlrcpp::Any visitComparisonOperator(RpgParser::ComparisonOperatorContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentOperator(RpgParser::AssignmentOperatorContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentOperatorIncludingEqual(RpgParser::AssignmentOperatorIncludingEqualContext *context) = 0;

    virtual antlrcpp::Any visitArgs(RpgParser::ArgsContext *context) = 0;

    virtual antlrcpp::Any visitLiteral(RpgParser::LiteralContext *context) = 0;

    virtual antlrcpp::Any visitIdentifier(RpgParser::IdentifierContext *context) = 0;

    virtual antlrcpp::Any visitAll(RpgParser::AllContext *context) = 0;

    virtual antlrcpp::Any visitFunctionName(RpgParser::FunctionNameContext *context) = 0;

    virtual antlrcpp::Any visitMultipart_identifier(RpgParser::Multipart_identifierContext *context) = 0;

    virtual antlrcpp::Any visitMultipart_identifier_element(RpgParser::Multipart_identifier_elementContext *context) = 0;

    virtual antlrcpp::Any visitIndexed_identifier(RpgParser::Indexed_identifierContext *context) = 0;

    virtual antlrcpp::Any visitOpCode(RpgParser::OpCodeContext *context) = 0;

    virtual antlrcpp::Any visitNumber(RpgParser::NumberContext *context) = 0;

    virtual antlrcpp::Any visitFree_identifier(RpgParser::Free_identifierContext *context) = 0;

    virtual antlrcpp::Any visitContinuedIdentifier(RpgParser::ContinuedIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitIdOrKeyword(RpgParser::IdOrKeywordContext *context) = 0;

    virtual antlrcpp::Any visitArgument(RpgParser::ArgumentContext *context) = 0;

    virtual antlrcpp::Any visitSymbolicConstants(RpgParser::SymbolicConstantsContext *context) = 0;

    virtual antlrcpp::Any visitGlobalIndicatorTarget(RpgParser::GlobalIndicatorTargetContext *context) = 0;

    virtual antlrcpp::Any visitQualifiedTarget(RpgParser::QualifiedTargetContext *context) = 0;

    virtual antlrcpp::Any visitIndicatorTarget(RpgParser::IndicatorTargetContext *context) = 0;

    virtual antlrcpp::Any visitSimpleTarget(RpgParser::SimpleTargetContext *context) = 0;

    virtual antlrcpp::Any visitIndexedTarget(RpgParser::IndexedTargetContext *context) = 0;

    virtual antlrcpp::Any visitSubstTarget(RpgParser::SubstTargetContext *context) = 0;


};

}  // namespace antlrcpprpg
