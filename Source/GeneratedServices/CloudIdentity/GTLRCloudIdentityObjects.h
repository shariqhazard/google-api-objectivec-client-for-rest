// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Identity API (cloudidentity/v1)
// Description:
//   API for provisioning and managing identity resources.
// Documentation:
//   https://cloud.google.com/identity/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRCloudIdentity_EntityKey;
@class GTLRCloudIdentity_Group;
@class GTLRCloudIdentity_Group_Labels;
@class GTLRCloudIdentity_Membership;
@class GTLRCloudIdentity_MembershipRole;
@class GTLRCloudIdentity_Operation_Metadata;
@class GTLRCloudIdentity_Operation_Response;
@class GTLRCloudIdentity_Status;
@class GTLRCloudIdentity_Status_Details_Item;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  An EntityKey uniquely identifies an Entity. Namespaces are used to provide
 *  isolation for IDs. A single ID can be reused across namespaces but the
 *  combination of a namespace and an ID must be unique.
 */
@interface GTLRCloudIdentity_EntityKey : GTLRObject

/**
 *  The ID of the entity within the given namespace. The ID must be unique
 *  within its namespace.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/**
 *  Namespaces provide isolation for IDs, so an ID only needs to be unique
 *  within its namespace.
 *  Namespaces are currently only created as part of IdentitySource creation
 *  from Admin Console. A namespace `"identitysources/{identity_source_id}"` is
 *  created corresponding to every Identity Source `identity_source_id`.
 *
 *  Remapped to 'namespaceProperty' to avoid language reserved word 'namespace'.
 */
@property(nonatomic, copy, nullable) NSString *namespaceProperty;

@end


/**
 *  Resource representing a Group.
 */
@interface GTLRCloudIdentity_Group : GTLRObject

/**
 *  The time when the Group was created.
 *  Output only.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *createTime;

/**
 *  An extended description to help users determine the purpose of a Group. For
 *  example, you can include information about who should join the Group, the
 *  types of messages to send to the Group, links to FAQs about the Group, or
 *  related Groups. Maximum length is 4,096 characters.
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(nonatomic, copy, nullable) NSString *descriptionProperty;

/** The Group's display name. */
@property(nonatomic, copy, nullable) NSString *displayName;

/**
 *  EntityKey of the Group.
 *  Must be set when creating a Group, read-only afterwards.
 */
@property(nonatomic, strong, nullable) GTLRCloudIdentity_EntityKey *groupKey;

/**
 *  `Required`. Labels for Group resource.
 *  For creating Groups under a namespace, set label key to
 *  'labels/system/groups/external' and label value as empty.
 */
@property(nonatomic, strong, nullable) GTLRCloudIdentity_Group_Labels *labels;

/**
 *  [Resource name](https://cloud.google.com/apis/design/resource_names) of the
 *  Group in the format: `groups/{group_id}`, where group_id is the unique ID
 *  assigned to the Group.
 *  Must be left blank while creating a Group.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The entity under which this Group resides in Cloud Identity resource
 *  hierarchy. Must be set when creating a Group, read-only afterwards.
 *  Currently allowed types: `identitysources`.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  The time when the Group was last updated.
 *  Output only.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *updateTime;

@end


/**
 *  `Required`. Labels for Group resource.
 *  For creating Groups under a namespace, set label key to
 *  'labels/system/groups/external' and label value as empty.
 *
 *  @note This class is documented as having more properties of NSString. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRCloudIdentity_Group_Labels : GTLRObject
@end


/**
 *  Response message for ListGroups operation.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "groups" property. If returned as the result of a query, it should
 *        support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRCloudIdentity_ListGroupsResponse : GTLRCollectionObject

/**
 *  Groups returned in response to list request.
 *  The results are not sorted.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudIdentity_Group *> *groups;

/**
 *  Token to retrieve the next page of results, or empty if there are no
 *  more results available for listing.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  GTLRCloudIdentity_ListMembershipsResponse
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "memberships" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRCloudIdentity_ListMembershipsResponse : GTLRCollectionObject

/**
 *  List of Memberships.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudIdentity_Membership *> *memberships;

/**
 *  Token to retrieve the next page of results, or empty if there are no
 *  more results available for listing.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  GTLRCloudIdentity_LookupGroupNameResponse
 */
@interface GTLRCloudIdentity_LookupGroupNameResponse : GTLRObject

/**
 *  [Resource name](https://cloud.google.com/apis/design/resource_names) of the
 *  Group in the format: `groups/{group_id}`, where `group_id` is the unique ID
 *  assigned to the Group.
 */
@property(nonatomic, copy, nullable) NSString *name;

@end


/**
 *  GTLRCloudIdentity_LookupMembershipNameResponse
 */
@interface GTLRCloudIdentity_LookupMembershipNameResponse : GTLRObject

/**
 *  [Resource name](https://cloud.google.com/apis/design/resource_names) of the
 *  Membership being looked up.
 *  Format: `groups/{group_id}/memberships/{member_id}`, where `group_id` is
 *  the unique ID assigned to the Group to which Membership belongs to, and
 *  `member_id` is the unique ID assigned to the member.
 */
@property(nonatomic, copy, nullable) NSString *name;

@end


/**
 *  Resource representing a Membership within a Group
 */
@interface GTLRCloudIdentity_Membership : GTLRObject

/** Creation timestamp of the Membership. Output only. */
@property(nonatomic, strong, nullable) GTLRDateTime *createTime;

/**
 *  [Resource name](https://cloud.google.com/apis/design/resource_names) of the
 *  Membership in the format: `groups/{group_id}/memberships/{member_id}`,
 *  where group_id is the unique ID assigned to the Group to which Membership
 *  belongs to, and member_id is the unique ID assigned to the member
 *  Must be left blank while creating a Membership.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  EntityKey of the entity to be added as the member. Must be set while
 *  creating a Membership, read-only afterwards.
 *  Currently allowed entity types: `Users`, `Groups`.
 */
@property(nonatomic, strong, nullable) GTLRCloudIdentity_EntityKey *preferredMemberKey;

/**
 *  Roles for a member within the Group.
 *  Currently supported MembershipRoles: `"MEMBER"`.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudIdentity_MembershipRole *> *roles;

/** Last updated timestamp of the Membership. Output only. */
@property(nonatomic, strong, nullable) GTLRDateTime *updateTime;

@end


/**
 *  Resource representing a role within a Membership.
 */
@interface GTLRCloudIdentity_MembershipRole : GTLRObject

/**
 *  MembershipRole in string format.
 *  Currently supported MembershipRoles: `"MEMBER"`.
 */
@property(nonatomic, copy, nullable) NSString *name;

@end


/**
 *  This resource represents a long-running operation that is the result of a
 *  network API call.
 */
@interface GTLRCloudIdentity_Operation : GTLRObject

/**
 *  If the value is `false`, it means the operation is still in progress.
 *  If `true`, the operation is completed, and either `error` or `response` is
 *  available.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *done;

/** The error result of the operation in case of failure or cancellation. */
@property(nonatomic, strong, nullable) GTLRCloudIdentity_Status *error;

/**
 *  Service-specific metadata associated with the operation. It typically
 *  contains progress information and common metadata such as create time.
 *  Some services might not provide such metadata. Any method that returns a
 *  long-running operation should document the metadata type, if any.
 */
@property(nonatomic, strong, nullable) GTLRCloudIdentity_Operation_Metadata *metadata;

/**
 *  The server-assigned name, which is only unique within the same service that
 *  originally returns it. If you use the default HTTP mapping, the
 *  `name` should be a resource name ending with `operations/{unique_id}`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The normal response of the operation in case of success. If the original
 *  method returns no data on success, such as `Delete`, the response is
 *  `google.protobuf.Empty`. If the original method is standard
 *  `Get`/`Create`/`Update`, the response should be the resource. For other
 *  methods, the response should have the type `XxxResponse`, where `Xxx`
 *  is the original method name. For example, if the original method name
 *  is `TakeSnapshot()`, the inferred response type is
 *  `TakeSnapshotResponse`.
 */
@property(nonatomic, strong, nullable) GTLRCloudIdentity_Operation_Response *response;

@end


/**
 *  Service-specific metadata associated with the operation. It typically
 *  contains progress information and common metadata such as create time.
 *  Some services might not provide such metadata. Any method that returns a
 *  long-running operation should document the metadata type, if any.
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRCloudIdentity_Operation_Metadata : GTLRObject
@end


/**
 *  The normal response of the operation in case of success. If the original
 *  method returns no data on success, such as `Delete`, the response is
 *  `google.protobuf.Empty`. If the original method is standard
 *  `Get`/`Create`/`Update`, the response should be the resource. For other
 *  methods, the response should have the type `XxxResponse`, where `Xxx`
 *  is the original method name. For example, if the original method name
 *  is `TakeSnapshot()`, the inferred response type is
 *  `TakeSnapshotResponse`.
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRCloudIdentity_Operation_Response : GTLRObject
@end


/**
 *  GTLRCloudIdentity_SearchGroupsResponse
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "groups" property. If returned as the result of a query, it should
 *        support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRCloudIdentity_SearchGroupsResponse : GTLRCollectionObject

/**
 *  List of Groups satisfying the search query.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudIdentity_Group *> *groups;

/**
 *  Token to retrieve the next page of results, or empty if there are no
 *  more results available for specified query.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  The `Status` type defines a logical error model that is suitable for
 *  different programming environments, including REST APIs and RPC APIs. It is
 *  used by [gRPC](https://github.com/grpc). Each `Status` message contains
 *  three pieces of data: error code, error message, and error details.
 *  You can find out more about this error model and how to work with it in the
 *  [API Design Guide](https://cloud.google.com/apis/design/errors).
 */
@interface GTLRCloudIdentity_Status : GTLRObject

/**
 *  The status code, which should be an enum value of google.rpc.Code.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *code;

/**
 *  A list of messages that carry the error details. There is a common set of
 *  message types for APIs to use.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudIdentity_Status_Details_Item *> *details;

/**
 *  A developer-facing error message, which should be in English. Any
 *  user-facing error message should be localized and sent in the
 *  google.rpc.Status.details field, or localized by the client.
 */
@property(nonatomic, copy, nullable) NSString *message;

@end


/**
 *  GTLRCloudIdentity_Status_Details_Item
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRCloudIdentity_Status_Details_Item : GTLRObject
@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop