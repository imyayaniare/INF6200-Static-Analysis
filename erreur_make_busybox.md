```bash
networking/tc.c: In function ‘cbq_print_opt’:
networking/tc.c:236:27: error: ‘TCA_CBQ_MAX’ undeclared (first use in this function); did you mean ‘TCA_CBS_MAX’?
  236 |         struct rtattr *tb[TCA_CBQ_MAX+1];
      |                           ^~~~~~~~~~~
      |                           TCA_CBS_MAX
networking/tc.c:236:27: note: each undeclared identifier is reported only once for each function it appears in
networking/tc.c:249:16: error: ‘TCA_CBQ_RATE’ undeclared (first use in this function); did you mean ‘TCA_TBF_RATE64’?
  249 |         if (tb[TCA_CBQ_RATE]) {
      |                ^~~~~~~~~~~~
      |                TCA_TBF_RATE64
networking/tc.c:255:16: error: ‘TCA_CBQ_LSSOPT’ undeclared (first use in this function)
  255 |         if (tb[TCA_CBQ_LSSOPT]) {
      |                ^~~~~~~~~~~~~~
networking/tc.c:256:61: error: invalid application of ‘sizeof’ to incomplete type ‘struct tc_cbq_lssopt’
  256 |                 if (RTA_PAYLOAD(tb[TCA_CBQ_LSSOPT]) < sizeof(*lss))
      |                                                             ^
networking/tc.c:261:16: error: ‘TCA_CBQ_WRROPT’ undeclared (first use in this function)
  261 |         if (tb[TCA_CBQ_WRROPT]) {
      |                ^~~~~~~~~~~~~~
networking/tc.c:262:61: error: invalid application of ‘sizeof’ to incomplete type ‘struct tc_cbq_wrropt’
  262 |                 if (RTA_PAYLOAD(tb[TCA_CBQ_WRROPT]) < sizeof(*wrr))
      |                                                             ^
networking/tc.c:267:16: error: ‘TCA_CBQ_FOPT’ undeclared (first use in this function)
  267 |         if (tb[TCA_CBQ_FOPT]) {
      |                ^~~~~~~~~~~~
networking/tc.c:268:59: error: invalid application of ‘sizeof’ to incomplete type ‘struct tc_cbq_fopt’
  268 |                 if (RTA_PAYLOAD(tb[TCA_CBQ_FOPT]) < sizeof(*fopt))
      |                                                           ^
networking/tc.c:273:16: error: ‘TCA_CBQ_OVL_STRATEGY’ undeclared (first use in this function)
  273 |         if (tb[TCA_CBQ_OVL_STRATEGY]) {
      |                ^~~~~~~~~~~~~~~~~~~~
networking/tc.c:274:67: error: invalid application of ‘sizeof’ to incomplete type ‘struct tc_cbq_ovl’
  274 |                 if (RTA_PAYLOAD(tb[TCA_CBQ_OVL_STRATEGY]) < sizeof(*ovl))
      |                                                                   ^
networking/tc.c:277:50: error: invalid application of ‘sizeof’ to incomplete type ‘struct tc_cbq_ovl’
  277 |                                 (unsigned) sizeof(*ovl));
      |                                                  ^
networking/tc.c:293:23: error: invalid use of undefined type ‘struct tc_cbq_lssopt’
  293 |         if (lss && lss->flags) {
      |                       ^~
networking/tc.c:296:24: error: invalid use of undefined type ‘struct tc_cbq_lssopt’
  296 |                 if (lss->flags&TCF_CBQ_LSS_BOUNDED) {
      |                        ^~
networking/tc.c:296:32: error: ‘TCF_CBQ_LSS_BOUNDED’ undeclared (first use in this function)
  296 |                 if (lss->flags&TCF_CBQ_LSS_BOUNDED) {
      |                                ^~~~~~~~~~~~~~~~~~~
networking/tc.c:300:24: error: invalid use of undefined type ‘struct tc_cbq_lssopt’
  300 |                 if (lss->flags&TCF_CBQ_LSS_ISOLATED) {
      |                        ^~
networking/tc.c:300:32: error: ‘TCF_CBQ_LSS_ISOLATED’ undeclared (first use in this function)
  300 |                 if (lss->flags&TCF_CBQ_LSS_ISOLATED) {
      |                                ^~~~~~~~~~~~~~~~~~~~
networking/tc.c:308:24: error: invalid use of undefined type ‘struct tc_cbq_wrropt’
  308 |                 if (wrr->priority != TC_CBQ_MAXPRIO)
      |                        ^~
networking/tc.c:308:38: error: ‘TC_CBQ_MAXPRIO’ undeclared (first use in this function)
  308 |                 if (wrr->priority != TC_CBQ_MAXPRIO)
      |                                      ^~~~~~~~~~~~~~
networking/tc.c:309:46: error: invalid use of undefined type ‘struct tc_cbq_wrropt’
  309 |                         printf("prio %u", wrr->priority);
      |                                              ^~
networking/tc.c:313:43: error: invalid use of undefined type ‘struct tc_cbq_wrropt’
  313 |                         printf("/%u ", wrr->cpriority);
      |                                           ^~
networking/tc.c:314:32: error: invalid use of undefined type ‘struct tc_cbq_wrropt’
  314 |                         if (wrr->weight != 1) {
      |                                ^~
networking/tc.c:315:65: error: invalid use of undefined type ‘struct tc_cbq_wrropt’
  315 |                                 print_rate(buf, sizeof(buf), wrr->weight);
      |                                                                 ^~
networking/tc.c:318:32: error: invalid use of undefined type ‘struct tc_cbq_wrropt’
  318 |                         if (wrr->allot)
      |                                ^~
networking/tc.c:319:57: error: invalid use of undefined type ‘struct tc_cbq_wrropt’
  319 |                                 printf("allot %ub ", wrr->allot);
      |                                                         ^~
networking/tc.c:236:24: warning: unused variable ‘tb’ [-Wunused-variable]
  236 |         struct rtattr *tb[TCA_CBQ_MAX+1];
      |                        ^~
make[1]: *** [scripts/Makefile.build:198 : networking/tc.o] Erreur 1
make: *** [Makefile:749 : networking] Erreur 2
```
