// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google OAuth2 API (oauth2/v2)
// Description:
//   Obtains end-user authorization grants for use with other Google APIs.
// Documentation:
//   https://developers.google.com/accounts/docs/OAuth2

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLROauth2_JwkKeysItem;

NS_ASSUME_NONNULL_BEGIN

/**
 *  GTLROauth2_Jwk
 */
@interface GTLROauth2_Jwk : GTLRObject

@property(strong, nullable) NSArray<GTLROauth2_JwkKeysItem *> *keys;

@end


/**
 *  GTLROauth2_JwkKeysItem
 */
@interface GTLROauth2_JwkKeysItem : GTLRObject

@property(copy, nullable) NSString *alg;
@property(copy, nullable) NSString *e;
@property(copy, nullable) NSString *kid;
@property(copy, nullable) NSString *kty;
@property(copy, nullable) NSString *n;
@property(copy, nullable) NSString *use;

@end


/**
 *  GTLROauth2_Tokeninfo
 */
@interface GTLROauth2_Tokeninfo : GTLRObject

/** The access type granted with this token. It can be offline or online. */
@property(copy, nullable) NSString *accessType;

/**
 *  Who is the intended audience for this token. In general the same as
 *  issued_to.
 */
@property(copy, nullable) NSString *audience;

/**
 *  The email address of the user. Present only if the email scope is present in
 *  the request.
 */
@property(copy, nullable) NSString *email;

/**
 *  The expiry time of the token, as number of seconds left until expiry.
 *
 *  Uses NSNumber of intValue.
 */
@property(strong, nullable) NSNumber *expiresIn;

/** To whom was the token issued to. In general the same as audience. */
@property(copy, nullable) NSString *issuedTo;

/** The space separated list of scopes granted to this token. */
@property(copy, nullable) NSString *scope;

/** The token handle associated with this token. */
@property(copy, nullable) NSString *tokenHandle;

/** The obfuscated user id. */
@property(copy, nullable) NSString *userId;

/**
 *  Boolean flag which is true if the email address is verified. Present only if
 *  the email scope is present in the request.
 *
 *  Uses NSNumber of boolValue.
 */
@property(strong, nullable) NSNumber *verifiedEmail;

@end


/**
 *  GTLROauth2_Userinfoplus
 */
@interface GTLROauth2_Userinfoplus : GTLRObject

/** The user's email address. */
@property(copy, nullable) NSString *email;

/** The user's last name. */
@property(copy, nullable) NSString *familyName;

/** The user's gender. */
@property(copy, nullable) NSString *gender;

/** The user's first name. */
@property(copy, nullable) NSString *givenName;

/** The hosted domain e.g. example.com if the user is Google apps user. */
@property(copy, nullable) NSString *hd;

/**
 *  The obfuscated ID of the user.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(copy, nullable) NSString *identifier;

/** URL of the profile page. */
@property(copy, nullable) NSString *link;

/** The user's preferred locale. */
@property(copy, nullable) NSString *locale;

/** The user's full name. */
@property(copy, nullable) NSString *name;

/** URL of the user's picture image. */
@property(copy, nullable) NSString *picture;

/**
 *  Boolean flag which is true if the email address is verified. Always verified
 *  because we only return the user's primary email address.
 *
 *  Uses NSNumber of boolValue.
 */
@property(strong, nullable) NSNumber *verifiedEmail;

@end

NS_ASSUME_NONNULL_END