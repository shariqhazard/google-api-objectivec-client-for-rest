// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Firebase Hosting API (firebasehosting/v1beta1)
// Description:
//   The Firebase Hosting REST API enables programmatic and customizable
//   deployments to your Firebase-hosted sites. Use this REST API to deploy new
//   or updated hosting configurations and content files.
// Documentation:
//   https://firebase.google.com/docs/hosting/

#import "GTLRFirebaseHostingObjects.h"

// ----------------------------------------------------------------------------
// Constants

// GTLRFirebaseHosting_Domain.status
NSString * const kGTLRFirebaseHosting_Domain_Status_DomainActive = @"DOMAIN_ACTIVE";
NSString * const kGTLRFirebaseHosting_Domain_Status_DomainChangePending = @"DOMAIN_CHANGE_PENDING";
NSString * const kGTLRFirebaseHosting_Domain_Status_DomainStatusUnspecified = @"DOMAIN_STATUS_UNSPECIFIED";
NSString * const kGTLRFirebaseHosting_Domain_Status_DomainVerificationLost = @"DOMAIN_VERIFICATION_LOST";
NSString * const kGTLRFirebaseHosting_Domain_Status_DomainVerificationRequired = @"DOMAIN_VERIFICATION_REQUIRED";

// GTLRFirebaseHosting_DomainProvisioning.certStatus
NSString * const kGTLRFirebaseHosting_DomainProvisioning_CertStatus_CertActive = @"CERT_ACTIVE";
NSString * const kGTLRFirebaseHosting_DomainProvisioning_CertStatus_CertError = @"CERT_ERROR";
NSString * const kGTLRFirebaseHosting_DomainProvisioning_CertStatus_CertMissing = @"CERT_MISSING";
NSString * const kGTLRFirebaseHosting_DomainProvisioning_CertStatus_CertPending = @"CERT_PENDING";
NSString * const kGTLRFirebaseHosting_DomainProvisioning_CertStatus_CertProcessing = @"CERT_PROCESSING";
NSString * const kGTLRFirebaseHosting_DomainProvisioning_CertStatus_CertPropagating = @"CERT_PROPAGATING";
NSString * const kGTLRFirebaseHosting_DomainProvisioning_CertStatus_CertStatusUnspecified = @"CERT_STATUS_UNSPECIFIED";

// GTLRFirebaseHosting_DomainProvisioning.dnsStatus
NSString * const kGTLRFirebaseHosting_DomainProvisioning_DnsStatus_DnsExtraneousMatch = @"DNS_EXTRANEOUS_MATCH";
NSString * const kGTLRFirebaseHosting_DomainProvisioning_DnsStatus_DnsMatch = @"DNS_MATCH";
NSString * const kGTLRFirebaseHosting_DomainProvisioning_DnsStatus_DnsMissing = @"DNS_MISSING";
NSString * const kGTLRFirebaseHosting_DomainProvisioning_DnsStatus_DnsPartialMatch = @"DNS_PARTIAL_MATCH";
NSString * const kGTLRFirebaseHosting_DomainProvisioning_DnsStatus_DnsPending = @"DNS_PENDING";
NSString * const kGTLRFirebaseHosting_DomainProvisioning_DnsStatus_DnsStatusUnspecified = @"DNS_STATUS_UNSPECIFIED";

// GTLRFirebaseHosting_DomainRedirect.type
NSString * const kGTLRFirebaseHosting_DomainRedirect_Type_MovedPermanently = @"MOVED_PERMANENTLY";
NSString * const kGTLRFirebaseHosting_DomainRedirect_Type_RedirectTypeUnspecified = @"REDIRECT_TYPE_UNSPECIFIED";

// GTLRFirebaseHosting_Release.type
NSString * const kGTLRFirebaseHosting_Release_Type_Deploy      = @"DEPLOY";
NSString * const kGTLRFirebaseHosting_Release_Type_Rollback    = @"ROLLBACK";
NSString * const kGTLRFirebaseHosting_Release_Type_SiteDisable = @"SITE_DISABLE";
NSString * const kGTLRFirebaseHosting_Release_Type_TypeUnspecified = @"TYPE_UNSPECIFIED";

// GTLRFirebaseHosting_ServingConfig.appAssociation
NSString * const kGTLRFirebaseHosting_ServingConfig_AppAssociation_Auto = @"AUTO";
NSString * const kGTLRFirebaseHosting_ServingConfig_AppAssociation_None = @"NONE";

// GTLRFirebaseHosting_ServingConfig.trailingSlashBehavior
NSString * const kGTLRFirebaseHosting_ServingConfig_TrailingSlashBehavior_Add = @"ADD";
NSString * const kGTLRFirebaseHosting_ServingConfig_TrailingSlashBehavior_Remove = @"REMOVE";
NSString * const kGTLRFirebaseHosting_ServingConfig_TrailingSlashBehavior_TrailingSlashBehaviorUnspecified = @"TRAILING_SLASH_BEHAVIOR_UNSPECIFIED";

// GTLRFirebaseHosting_Version.status
NSString * const kGTLRFirebaseHosting_Version_Status_Abandoned = @"ABANDONED";
NSString * const kGTLRFirebaseHosting_Version_Status_Created   = @"CREATED";
NSString * const kGTLRFirebaseHosting_Version_Status_Deleted   = @"DELETED";
NSString * const kGTLRFirebaseHosting_Version_Status_Expired   = @"EXPIRED";
NSString * const kGTLRFirebaseHosting_Version_Status_Finalized = @"FINALIZED";
NSString * const kGTLRFirebaseHosting_Version_Status_VersionStatusUnspecified = @"VERSION_STATUS_UNSPECIFIED";

// GTLRFirebaseHosting_VersionFile.status
NSString * const kGTLRFirebaseHosting_VersionFile_Status_Active = @"ACTIVE";
NSString * const kGTLRFirebaseHosting_VersionFile_Status_Expected = @"EXPECTED";
NSString * const kGTLRFirebaseHosting_VersionFile_Status_StatusUnspecified = @"STATUS_UNSPECIFIED";

// ----------------------------------------------------------------------------
//
//   GTLRFirebaseHosting_ActingUser
//

@implementation GTLRFirebaseHosting_ActingUser
@dynamic email, imageUrl;
@end


// ----------------------------------------------------------------------------
//
//   GTLRFirebaseHosting_CertDnsChallenge
//

@implementation GTLRFirebaseHosting_CertDnsChallenge
@dynamic domainName, token;
@end


// ----------------------------------------------------------------------------
//
//   GTLRFirebaseHosting_CertHttpChallenge
//

@implementation GTLRFirebaseHosting_CertHttpChallenge
@dynamic path, token;
@end


// ----------------------------------------------------------------------------
//
//   GTLRFirebaseHosting_CloudRunRewrite
//

@implementation GTLRFirebaseHosting_CloudRunRewrite
@dynamic region, serviceId;
@end


// ----------------------------------------------------------------------------
//
//   GTLRFirebaseHosting_Domain
//

@implementation GTLRFirebaseHosting_Domain
@dynamic domainName, domainRedirect, provisioning, site, status, updateTime;
@end


// ----------------------------------------------------------------------------
//
//   GTLRFirebaseHosting_DomainProvisioning
//

@implementation GTLRFirebaseHosting_DomainProvisioning
@dynamic certChallengeDiscoveredTxt, certChallengeDns, certChallengeHttp,
         certStatus, discoveredIps, dnsFetchTime, dnsStatus, expectedIps;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"certChallengeDiscoveredTxt" : [NSString class],
    @"discoveredIps" : [NSString class],
    @"expectedIps" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRFirebaseHosting_DomainRedirect
//

@implementation GTLRFirebaseHosting_DomainRedirect
@dynamic domainName, type;
@end


// ----------------------------------------------------------------------------
//
//   GTLRFirebaseHosting_Empty
//

@implementation GTLRFirebaseHosting_Empty
@end


// ----------------------------------------------------------------------------
//
//   GTLRFirebaseHosting_Header
//

@implementation GTLRFirebaseHosting_Header
@dynamic glob, headers, regex;
@end


// ----------------------------------------------------------------------------
//
//   GTLRFirebaseHosting_Header_Headers
//

@implementation GTLRFirebaseHosting_Header_Headers

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRFirebaseHosting_ListDomainsResponse
//

@implementation GTLRFirebaseHosting_ListDomainsResponse
@dynamic domains, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"domains" : [GTLRFirebaseHosting_Domain class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"domains";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRFirebaseHosting_ListReleasesResponse
//

@implementation GTLRFirebaseHosting_ListReleasesResponse
@dynamic nextPageToken, releases;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"releases" : [GTLRFirebaseHosting_Release class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"releases";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRFirebaseHosting_ListVersionFilesResponse
//

@implementation GTLRFirebaseHosting_ListVersionFilesResponse
@dynamic files, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"files" : [GTLRFirebaseHosting_VersionFile class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"files";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRFirebaseHosting_PopulateVersionFilesRequest
//

@implementation GTLRFirebaseHosting_PopulateVersionFilesRequest
@dynamic files;
@end


// ----------------------------------------------------------------------------
//
//   GTLRFirebaseHosting_PopulateVersionFilesRequest_Files
//

@implementation GTLRFirebaseHosting_PopulateVersionFilesRequest_Files

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRFirebaseHosting_PopulateVersionFilesResponse
//

@implementation GTLRFirebaseHosting_PopulateVersionFilesResponse
@dynamic uploadRequiredHashes, uploadUrl;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"uploadRequiredHashes" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRFirebaseHosting_Redirect
//

@implementation GTLRFirebaseHosting_Redirect
@dynamic glob, location, regex, statusCode;
@end


// ----------------------------------------------------------------------------
//
//   GTLRFirebaseHosting_Release
//

@implementation GTLRFirebaseHosting_Release
@dynamic message, name, releaseTime, releaseUser, type, version;
@end


// ----------------------------------------------------------------------------
//
//   GTLRFirebaseHosting_Rewrite
//

@implementation GTLRFirebaseHosting_Rewrite
@dynamic dynamicLinks, function, glob, path, regex, run;
@end


// ----------------------------------------------------------------------------
//
//   GTLRFirebaseHosting_ServingConfig
//

@implementation GTLRFirebaseHosting_ServingConfig
@dynamic appAssociation, cleanUrls, headers, redirects, rewrites,
         trailingSlashBehavior;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"headers" : [GTLRFirebaseHosting_Header class],
    @"redirects" : [GTLRFirebaseHosting_Redirect class],
    @"rewrites" : [GTLRFirebaseHosting_Rewrite class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRFirebaseHosting_SiteConfig
//

@implementation GTLRFirebaseHosting_SiteConfig
@dynamic maxVersions;
@end


// ----------------------------------------------------------------------------
//
//   GTLRFirebaseHosting_Version
//

@implementation GTLRFirebaseHosting_Version
@dynamic config, createTime, createUser, deleteTime, deleteUser, fileCount,
         finalizeTime, finalizeUser, labels, name, status, versionBytes;
@end


// ----------------------------------------------------------------------------
//
//   GTLRFirebaseHosting_Version_Labels
//

@implementation GTLRFirebaseHosting_Version_Labels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRFirebaseHosting_VersionFile
//

@implementation GTLRFirebaseHosting_VersionFile
@dynamic hashProperty, path, status;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"hashProperty" : @"hash" };
}

@end
