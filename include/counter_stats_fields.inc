#include "common_counter_stats_fields.inc"
F(packets_user)
F(bytes_user)
F(errors_user)
FA(ng_commands, OP_COUNT)
F(timeout_sess)
F(managed_sess)
F(foreign_sess)
F(rejected_sess)
F(silent_timeout_sess)
F(offer_timeout_sess)
F(final_timeout_sess)
F(regular_term_sess)
F(forced_term_sess)
F(nopacket_relayed_sess)
F(oneway_stream_sess)
F(call_duration)
F(call_duration2)
F(total_calls_duration_intv)
F(rtp_duplicates)
F(rtp_skips)
F(rtp_seq_resets)
F(rtp_reordered)
