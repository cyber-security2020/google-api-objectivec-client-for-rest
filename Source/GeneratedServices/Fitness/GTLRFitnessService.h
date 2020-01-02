// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Fitness (fitness/v1)
// Description:
//   Stores and accesses user data in the fitness store from apps on any
//   platform.
// Documentation:
//   https://developers.google.com/fit/rest/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRService.h"
#else
  #import "GTLRService.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Authorization scopes

/**
 *  Authorization scope: Use Google Fit to see and store your physical activity
 *  data
 *
 *  Value "https://www.googleapis.com/auth/fitness.activity.read"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeFitnessActivityRead;
/**
 *  Authorization scope: See and add to your Google Fit physical activity data
 *
 *  Value "https://www.googleapis.com/auth/fitness.activity.write"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeFitnessActivityWrite;
/**
 *  Authorization scope: See info about your blood glucose in Google Fit. I
 *  consent to Google sharing my blood glucose information with this app.
 *
 *  Value "https://www.googleapis.com/auth/fitness.blood_glucose.read"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeFitnessBloodGlucoseRead;
/**
 *  Authorization scope: See and add info about your blood glucose to Google
 *  Fit. I consent to Google sharing my blood glucose information with this app.
 *
 *  Value "https://www.googleapis.com/auth/fitness.blood_glucose.write"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeFitnessBloodGlucoseWrite;
/**
 *  Authorization scope: See info about your blood pressure in Google Fit. I
 *  consent to Google sharing my blood pressure information with this app.
 *
 *  Value "https://www.googleapis.com/auth/fitness.blood_pressure.read"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeFitnessBloodPressureRead;
/**
 *  Authorization scope: See and add info about your blood pressure in Google
 *  Fit. I consent to Google sharing my blood pressure information with this
 *  app.
 *
 *  Value "https://www.googleapis.com/auth/fitness.blood_pressure.write"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeFitnessBloodPressureWrite;
/**
 *  Authorization scope: See info about your body measurements and heart rate in
 *  Google Fit
 *
 *  Value "https://www.googleapis.com/auth/fitness.body.read"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeFitnessBodyRead;
/**
 *  Authorization scope: See info about your body temperature in Google Fit. I
 *  consent to Google sharing my body temperature information with this app.
 *
 *  Value "https://www.googleapis.com/auth/fitness.body_temperature.read"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeFitnessBodyTemperatureRead;
/**
 *  Authorization scope: See and add to info about your body temperature in
 *  Google Fit. I consent to Google sharing my body temperature information with
 *  this app.
 *
 *  Value "https://www.googleapis.com/auth/fitness.body_temperature.write"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeFitnessBodyTemperatureWrite;
/**
 *  Authorization scope: See and add info about your body measurements and heart
 *  rate to Google Fit
 *
 *  Value "https://www.googleapis.com/auth/fitness.body.write"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeFitnessBodyWrite;
/**
 *  Authorization scope: See your Google Fit speed and distance data
 *
 *  Value "https://www.googleapis.com/auth/fitness.location.read"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeFitnessLocationRead;
/**
 *  Authorization scope: See and add to your Google Fit location data
 *
 *  Value "https://www.googleapis.com/auth/fitness.location.write"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeFitnessLocationWrite;
/**
 *  Authorization scope: See info about your nutrition in Google Fit
 *
 *  Value "https://www.googleapis.com/auth/fitness.nutrition.read"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeFitnessNutritionRead;
/**
 *  Authorization scope: See and add to info about your nutrition in Google Fit
 *
 *  Value "https://www.googleapis.com/auth/fitness.nutrition.write"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeFitnessNutritionWrite;
/**
 *  Authorization scope: See info about your oxygen saturation in Google Fit. I
 *  consent to Google sharing my oxygen saturation information with this app.
 *
 *  Value "https://www.googleapis.com/auth/fitness.oxygen_saturation.read"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeFitnessOxygenSaturationRead;
/**
 *  Authorization scope: See and add info about your oxygen saturation in Google
 *  Fit. I consent to Google sharing my oxygen saturation information with this
 *  app.
 *
 *  Value "https://www.googleapis.com/auth/fitness.oxygen_saturation.write"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeFitnessOxygenSaturationWrite;
/**
 *  Authorization scope: See info about your reproductive health in Google Fit.
 *  I consent to Google sharing my reporductive health information with this
 *  app.
 *
 *  Value "https://www.googleapis.com/auth/fitness.reproductive_health.read"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeFitnessReproductiveHealthRead;
/**
 *  Authorization scope: See and add info about your reproductive health in
 *  Google Fit. I consent to Google sharing my reporductive health information
 *  with this app.
 *
 *  Value "https://www.googleapis.com/auth/fitness.reproductive_health.write"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeFitnessReproductiveHealthWrite;

// ----------------------------------------------------------------------------
//   GTLRFitnessService
//

/**
 *  Service for executing Fitness queries.
 *
 *  Stores and accesses user data in the fitness store from apps on any
 *  platform.
 */
@interface GTLRFitnessService : GTLRService

// No new methods

// Clients should create a standard query with any of the class methods in
// GTLRFitnessQuery.h. The query can the be sent with GTLRService's execute
// methods,
//
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                     completionHandler:(void (^)(GTLRServiceTicket *ticket,
//                                                 id object, NSError *error))handler;
// or
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                              delegate:(id)delegate
//                     didFinishSelector:(SEL)finishedSelector;
//
// where finishedSelector has a signature of:
//
//   - (void)serviceTicket:(GTLRServiceTicket *)ticket
//      finishedWithObject:(id)object
//                   error:(NSError *)error;
//
// The object passed to the completion handler or delegate method
// is a subclass of GTLRObject, determined by the query method executed.

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
