// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Tasks API (cloudtasks/v2)
// Description:
//   Manages the execution of large numbers of distributed requests.
// Documentation:
//   https://cloud.google.com/tasks/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRCloudTasks_CreateTaskRequest;
@class GTLRCloudTasks_GetIamPolicyRequest;
@class GTLRCloudTasks_PauseQueueRequest;
@class GTLRCloudTasks_PurgeQueueRequest;
@class GTLRCloudTasks_Queue;
@class GTLRCloudTasks_ResumeQueueRequest;
@class GTLRCloudTasks_RunTaskRequest;
@class GTLRCloudTasks_SetIamPolicyRequest;
@class GTLRCloudTasks_TestIamPermissionsRequest;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the query classes' properties below.

// ----------------------------------------------------------------------------
// responseView

/** Value: "BASIC" */
GTLR_EXTERN NSString * const kGTLRCloudTasksResponseViewBasic;
/** Value: "FULL" */
GTLR_EXTERN NSString * const kGTLRCloudTasksResponseViewFull;
/** Value: "VIEW_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRCloudTasksResponseViewViewUnspecified;

// ----------------------------------------------------------------------------
// Query Classes
//

/**
 *  Parent class for other Cloud Tasks query classes.
 */
@interface GTLRCloudTasksQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Gets information about a location.
 *
 *  Method: cloudtasks.projects.locations.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudTasksCloudPlatform
 */
@interface GTLRCloudTasksQuery_ProjectsLocationsGet : GTLRCloudTasksQuery
// Previous library name was
//   +[GTLQueryCloudTasks queryForProjectsLocationsGetWithname:]

/** Resource name for the location. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudTasks_Location.
 *
 *  Gets information about a location.
 *
 *  @param name Resource name for the location.
 *
 *  @return GTLRCloudTasksQuery_ProjectsLocationsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists information about the supported locations for this service.
 *
 *  Method: cloudtasks.projects.locations.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudTasksCloudPlatform
 */
@interface GTLRCloudTasksQuery_ProjectsLocationsList : GTLRCloudTasksQuery
// Previous library name was
//   +[GTLQueryCloudTasks queryForProjectsLocationsListWithname:]

/** The standard list filter. */
@property(nonatomic, copy, nullable) NSString *filter;

/** The resource that owns the locations collection, if applicable. */
@property(nonatomic, copy, nullable) NSString *name;

/** The standard list page size. */
@property(nonatomic, assign) NSInteger pageSize;

/** The standard list page token. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRCloudTasks_ListLocationsResponse.
 *
 *  Lists information about the supported locations for this service.
 *
 *  @param name The resource that owns the locations collection, if applicable.
 *
 *  @return GTLRCloudTasksQuery_ProjectsLocationsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Creates a queue.
 *  Queues created with this method allow tasks to live for a maximum of 31
 *  days. After a task is 31 days old, the task will be deleted regardless of
 *  whether
 *  it was dispatched or not.
 *  WARNING: Using this method may have unintended side effects if you are
 *  using an App Engine `queue.yaml` or `queue.xml` file to manage your queues.
 *  Read
 *  [Overview of Queue Management and
 *  queue.yaml](https://cloud.google.com/tasks/docs/queue-yaml) before using
 *  this method.
 *
 *  Method: cloudtasks.projects.locations.queues.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudTasksCloudPlatform
 */
@interface GTLRCloudTasksQuery_ProjectsLocationsQueuesCreate : GTLRCloudTasksQuery
// Previous library name was
//   +[GTLQueryCloudTasks queryForProjectsLocationsQueuesCreateWithObject:parent:]

/**
 *  Required. The location name in which the queue will be created.
 *  For example: `projects/PROJECT_ID/locations/LOCATION_ID`
 *  The list of allowed locations can be obtained by calling Cloud
 *  Tasks' implementation of
 *  ListLocations.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudTasks_Queue.
 *
 *  Creates a queue.
 *  Queues created with this method allow tasks to live for a maximum of 31
 *  days. After a task is 31 days old, the task will be deleted regardless of
 *  whether
 *  it was dispatched or not.
 *  WARNING: Using this method may have unintended side effects if you are
 *  using an App Engine `queue.yaml` or `queue.xml` file to manage your queues.
 *  Read
 *  [Overview of Queue Management and
 *  queue.yaml](https://cloud.google.com/tasks/docs/queue-yaml) before using
 *  this method.
 *
 *  @param object The @c GTLRCloudTasks_Queue to include in the query.
 *  @param parent Required. The location name in which the queue will be
 *    created.
 *    For example: `projects/PROJECT_ID/locations/LOCATION_ID`
 *    The list of allowed locations can be obtained by calling Cloud
 *    Tasks' implementation of
 *    ListLocations.
 *
 *  @return GTLRCloudTasksQuery_ProjectsLocationsQueuesCreate
 */
+ (instancetype)queryWithObject:(GTLRCloudTasks_Queue *)object
                         parent:(NSString *)parent;

@end

/**
 *  Deletes a queue.
 *  This command will delete the queue even if it has tasks in it.
 *  Note: If you delete a queue, a queue with the same name can't be created
 *  for 7 days.
 *  WARNING: Using this method may have unintended side effects if you are
 *  using an App Engine `queue.yaml` or `queue.xml` file to manage your queues.
 *  Read
 *  [Overview of Queue Management and
 *  queue.yaml](https://cloud.google.com/tasks/docs/queue-yaml) before using
 *  this method.
 *
 *  Method: cloudtasks.projects.locations.queues.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudTasksCloudPlatform
 */
@interface GTLRCloudTasksQuery_ProjectsLocationsQueuesDelete : GTLRCloudTasksQuery
// Previous library name was
//   +[GTLQueryCloudTasks queryForProjectsLocationsQueuesDeleteWithname:]

/**
 *  Required. The queue name. For example:
 *  `projects/PROJECT_ID/locations/LOCATION_ID/queues/QUEUE_ID`
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudTasks_Empty.
 *
 *  Deletes a queue.
 *  This command will delete the queue even if it has tasks in it.
 *  Note: If you delete a queue, a queue with the same name can't be created
 *  for 7 days.
 *  WARNING: Using this method may have unintended side effects if you are
 *  using an App Engine `queue.yaml` or `queue.xml` file to manage your queues.
 *  Read
 *  [Overview of Queue Management and
 *  queue.yaml](https://cloud.google.com/tasks/docs/queue-yaml) before using
 *  this method.
 *
 *  @param name Required. The queue name. For example:
 *    `projects/PROJECT_ID/locations/LOCATION_ID/queues/QUEUE_ID`
 *
 *  @return GTLRCloudTasksQuery_ProjectsLocationsQueuesDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets a queue.
 *
 *  Method: cloudtasks.projects.locations.queues.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudTasksCloudPlatform
 */
@interface GTLRCloudTasksQuery_ProjectsLocationsQueuesGet : GTLRCloudTasksQuery
// Previous library name was
//   +[GTLQueryCloudTasks queryForProjectsLocationsQueuesGetWithname:]

/**
 *  Required. The resource name of the queue. For example:
 *  `projects/PROJECT_ID/locations/LOCATION_ID/queues/QUEUE_ID`
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudTasks_Queue.
 *
 *  Gets a queue.
 *
 *  @param name Required. The resource name of the queue. For example:
 *    `projects/PROJECT_ID/locations/LOCATION_ID/queues/QUEUE_ID`
 *
 *  @return GTLRCloudTasksQuery_ProjectsLocationsQueuesGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets the access control policy for a Queue.
 *  Returns an empty policy if the resource exists and does not have a policy
 *  set.
 *  Authorization requires the following
 *  [Google IAM](https://cloud.google.com/iam) permission on the specified
 *  resource parent:
 *  * `cloudtasks.queues.getIamPolicy`
 *
 *  Method: cloudtasks.projects.locations.queues.getIamPolicy
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudTasksCloudPlatform
 */
@interface GTLRCloudTasksQuery_ProjectsLocationsQueuesGetIamPolicy : GTLRCloudTasksQuery
// Previous library name was
//   +[GTLQueryCloudTasks queryForProjectsLocationsQueuesGetIamPolicyWithObject:resource:]

/**
 *  REQUIRED: The resource for which the policy is being requested.
 *  See the operation documentation for the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRCloudTasks_Policy.
 *
 *  Gets the access control policy for a Queue.
 *  Returns an empty policy if the resource exists and does not have a policy
 *  set.
 *  Authorization requires the following
 *  [Google IAM](https://cloud.google.com/iam) permission on the specified
 *  resource parent:
 *  * `cloudtasks.queues.getIamPolicy`
 *
 *  @param object The @c GTLRCloudTasks_GetIamPolicyRequest to include in the
 *    query.
 *  @param resource REQUIRED: The resource for which the policy is being
 *    requested.
 *    See the operation documentation for the appropriate value for this field.
 *
 *  @return GTLRCloudTasksQuery_ProjectsLocationsQueuesGetIamPolicy
 */
+ (instancetype)queryWithObject:(GTLRCloudTasks_GetIamPolicyRequest *)object
                       resource:(NSString *)resource;

@end

/**
 *  Lists queues.
 *  Queues are returned in lexicographical order.
 *
 *  Method: cloudtasks.projects.locations.queues.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudTasksCloudPlatform
 */
@interface GTLRCloudTasksQuery_ProjectsLocationsQueuesList : GTLRCloudTasksQuery
// Previous library name was
//   +[GTLQueryCloudTasks queryForProjectsLocationsQueuesListWithparent:]

/**
 *  `filter` can be used to specify a subset of queues. Any Queue
 *  field can be used as a filter and several operators as supported.
 *  For example: `<=, <, >=, >, !=, =, :`. The filter syntax is the same as
 *  described in
 *  [Stackdriver's Advanced Logs
 *  Filters](https://cloud.google.com/logging/docs/view/advanced_filters).
 *  Sample filter "state: PAUSED".
 *  Note that using filters might cause fewer queues than the
 *  requested page_size to be returned.
 */
@property(nonatomic, copy, nullable) NSString *filter;

/**
 *  Requested page size.
 *  The maximum page size is 9800. If unspecified, the page size will
 *  be the maximum. Fewer queues than requested might be returned,
 *  even if more queues exist; use the
 *  next_page_token in the
 *  response to determine if more queues exist.
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  A token identifying the page of results to return.
 *  To request the first page results, page_token must be empty. To
 *  request the next page of results, page_token must be the value of
 *  next_page_token returned
 *  from the previous call to ListQueues
 *  method. It is an error to switch the value of the
 *  filter while iterating through pages.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Required. The location name.
 *  For example: `projects/PROJECT_ID/locations/LOCATION_ID`
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudTasks_ListQueuesResponse.
 *
 *  Lists queues.
 *  Queues are returned in lexicographical order.
 *
 *  @param parent Required. The location name.
 *    For example: `projects/PROJECT_ID/locations/LOCATION_ID`
 *
 *  @return GTLRCloudTasksQuery_ProjectsLocationsQueuesList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Updates a queue.
 *  This method creates the queue if it does not exist and updates
 *  the queue if it does exist.
 *  Queues created with this method allow tasks to live for a maximum of 31
 *  days. After a task is 31 days old, the task will be deleted regardless of
 *  whether
 *  it was dispatched or not.
 *  WARNING: Using this method may have unintended side effects if you are
 *  using an App Engine `queue.yaml` or `queue.xml` file to manage your queues.
 *  Read
 *  [Overview of Queue Management and
 *  queue.yaml](https://cloud.google.com/tasks/docs/queue-yaml) before using
 *  this method.
 *
 *  Method: cloudtasks.projects.locations.queues.patch
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudTasksCloudPlatform
 */
@interface GTLRCloudTasksQuery_ProjectsLocationsQueuesPatch : GTLRCloudTasksQuery
// Previous library name was
//   +[GTLQueryCloudTasks queryForProjectsLocationsQueuesPatchWithObject:name:]

/**
 *  Caller-specified and required in CreateQueue,
 *  after which it becomes output only.
 *  The queue name.
 *  The queue name must have the following format:
 *  `projects/PROJECT_ID/locations/LOCATION_ID/queues/QUEUE_ID`
 *  * `PROJECT_ID` can contain letters ([A-Za-z]), numbers ([0-9]),
 *  hyphens (-), colons (:), or periods (.).
 *  For more information, see
 *  [Identifying
 *  projects](https://cloud.google.com/resource-manager/docs/creating-managing-projects#identifying_projects)
 *  * `LOCATION_ID` is the canonical ID for the queue's location.
 *  The list of available locations can be obtained by calling
 *  ListLocations.
 *  For more information, see https://cloud.google.com/about/locations/.
 *  * `QUEUE_ID` can contain letters ([A-Za-z]), numbers ([0-9]), or
 *  hyphens (-). The maximum length is 100 characters.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  A mask used to specify which fields of the queue are being updated.
 *  If empty, then all fields will be updated.
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *updateMask;

/**
 *  Fetches a @c GTLRCloudTasks_Queue.
 *
 *  Updates a queue.
 *  This method creates the queue if it does not exist and updates
 *  the queue if it does exist.
 *  Queues created with this method allow tasks to live for a maximum of 31
 *  days. After a task is 31 days old, the task will be deleted regardless of
 *  whether
 *  it was dispatched or not.
 *  WARNING: Using this method may have unintended side effects if you are
 *  using an App Engine `queue.yaml` or `queue.xml` file to manage your queues.
 *  Read
 *  [Overview of Queue Management and
 *  queue.yaml](https://cloud.google.com/tasks/docs/queue-yaml) before using
 *  this method.
 *
 *  @param object The @c GTLRCloudTasks_Queue to include in the query.
 *  @param name Caller-specified and required in CreateQueue,
 *    after which it becomes output only.
 *    The queue name.
 *    The queue name must have the following format:
 *    `projects/PROJECT_ID/locations/LOCATION_ID/queues/QUEUE_ID`
 *    * `PROJECT_ID` can contain letters ([A-Za-z]), numbers ([0-9]),
 *    hyphens (-), colons (:), or periods (.).
 *    For more information, see
 *    [Identifying
 *    projects](https://cloud.google.com/resource-manager/docs/creating-managing-projects#identifying_projects)
 *    * `LOCATION_ID` is the canonical ID for the queue's location.
 *    The list of available locations can be obtained by calling
 *    ListLocations.
 *    For more information, see https://cloud.google.com/about/locations/.
 *    * `QUEUE_ID` can contain letters ([A-Za-z]), numbers ([0-9]), or
 *    hyphens (-). The maximum length is 100 characters.
 *
 *  @return GTLRCloudTasksQuery_ProjectsLocationsQueuesPatch
 */
+ (instancetype)queryWithObject:(GTLRCloudTasks_Queue *)object
                           name:(NSString *)name;

@end

/**
 *  Pauses the queue.
 *  If a queue is paused then the system will stop dispatching tasks
 *  until the queue is resumed via
 *  ResumeQueue. Tasks can still be added
 *  when the queue is paused. A queue is paused if its
 *  state is PAUSED.
 *
 *  Method: cloudtasks.projects.locations.queues.pause
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudTasksCloudPlatform
 */
@interface GTLRCloudTasksQuery_ProjectsLocationsQueuesPause : GTLRCloudTasksQuery
// Previous library name was
//   +[GTLQueryCloudTasks queryForProjectsLocationsQueuesPauseWithObject:name:]

/**
 *  Required. The queue name. For example:
 *  `projects/PROJECT_ID/location/LOCATION_ID/queues/QUEUE_ID`
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudTasks_Queue.
 *
 *  Pauses the queue.
 *  If a queue is paused then the system will stop dispatching tasks
 *  until the queue is resumed via
 *  ResumeQueue. Tasks can still be added
 *  when the queue is paused. A queue is paused if its
 *  state is PAUSED.
 *
 *  @param object The @c GTLRCloudTasks_PauseQueueRequest to include in the
 *    query.
 *  @param name Required. The queue name. For example:
 *    `projects/PROJECT_ID/location/LOCATION_ID/queues/QUEUE_ID`
 *
 *  @return GTLRCloudTasksQuery_ProjectsLocationsQueuesPause
 */
+ (instancetype)queryWithObject:(GTLRCloudTasks_PauseQueueRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Purges a queue by deleting all of its tasks.
 *  All tasks created before this method is called are permanently deleted.
 *  Purge operations can take up to one minute to take effect. Tasks
 *  might be dispatched before the purge takes effect. A purge is irreversible.
 *
 *  Method: cloudtasks.projects.locations.queues.purge
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudTasksCloudPlatform
 */
@interface GTLRCloudTasksQuery_ProjectsLocationsQueuesPurge : GTLRCloudTasksQuery
// Previous library name was
//   +[GTLQueryCloudTasks queryForProjectsLocationsQueuesPurgeWithObject:name:]

/**
 *  Required. The queue name. For example:
 *  `projects/PROJECT_ID/location/LOCATION_ID/queues/QUEUE_ID`
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudTasks_Queue.
 *
 *  Purges a queue by deleting all of its tasks.
 *  All tasks created before this method is called are permanently deleted.
 *  Purge operations can take up to one minute to take effect. Tasks
 *  might be dispatched before the purge takes effect. A purge is irreversible.
 *
 *  @param object The @c GTLRCloudTasks_PurgeQueueRequest to include in the
 *    query.
 *  @param name Required. The queue name. For example:
 *    `projects/PROJECT_ID/location/LOCATION_ID/queues/QUEUE_ID`
 *
 *  @return GTLRCloudTasksQuery_ProjectsLocationsQueuesPurge
 */
+ (instancetype)queryWithObject:(GTLRCloudTasks_PurgeQueueRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Resume a queue.
 *  This method resumes a queue after it has been
 *  PAUSED or
 *  DISABLED. The state of a queue is stored
 *  in the queue's state; after calling this method it
 *  will be set to RUNNING.
 *  WARNING: Resuming many high-QPS queues at the same time can
 *  lead to target overloading. If you are resuming high-QPS
 *  queues, follow the 500/50/5 pattern described in
 *  [Managing Cloud Tasks Scaling
 *  Risks](https://cloud.google.com/tasks/docs/manage-cloud-task-scaling).
 *
 *  Method: cloudtasks.projects.locations.queues.resume
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudTasksCloudPlatform
 */
@interface GTLRCloudTasksQuery_ProjectsLocationsQueuesResume : GTLRCloudTasksQuery
// Previous library name was
//   +[GTLQueryCloudTasks queryForProjectsLocationsQueuesResumeWithObject:name:]

/**
 *  Required. The queue name. For example:
 *  `projects/PROJECT_ID/location/LOCATION_ID/queues/QUEUE_ID`
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudTasks_Queue.
 *
 *  Resume a queue.
 *  This method resumes a queue after it has been
 *  PAUSED or
 *  DISABLED. The state of a queue is stored
 *  in the queue's state; after calling this method it
 *  will be set to RUNNING.
 *  WARNING: Resuming many high-QPS queues at the same time can
 *  lead to target overloading. If you are resuming high-QPS
 *  queues, follow the 500/50/5 pattern described in
 *  [Managing Cloud Tasks Scaling
 *  Risks](https://cloud.google.com/tasks/docs/manage-cloud-task-scaling).
 *
 *  @param object The @c GTLRCloudTasks_ResumeQueueRequest to include in the
 *    query.
 *  @param name Required. The queue name. For example:
 *    `projects/PROJECT_ID/location/LOCATION_ID/queues/QUEUE_ID`
 *
 *  @return GTLRCloudTasksQuery_ProjectsLocationsQueuesResume
 */
+ (instancetype)queryWithObject:(GTLRCloudTasks_ResumeQueueRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Sets the access control policy for a Queue. Replaces any existing
 *  policy.
 *  Note: The Cloud Console does not check queue-level IAM permissions yet.
 *  Project-level permissions are required to use the Cloud Console.
 *  Authorization requires the following
 *  [Google IAM](https://cloud.google.com/iam) permission on the specified
 *  resource parent:
 *  * `cloudtasks.queues.setIamPolicy`
 *
 *  Method: cloudtasks.projects.locations.queues.setIamPolicy
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudTasksCloudPlatform
 */
@interface GTLRCloudTasksQuery_ProjectsLocationsQueuesSetIamPolicy : GTLRCloudTasksQuery
// Previous library name was
//   +[GTLQueryCloudTasks queryForProjectsLocationsQueuesSetIamPolicyWithObject:resource:]

/**
 *  REQUIRED: The resource for which the policy is being specified.
 *  See the operation documentation for the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRCloudTasks_Policy.
 *
 *  Sets the access control policy for a Queue. Replaces any existing
 *  policy.
 *  Note: The Cloud Console does not check queue-level IAM permissions yet.
 *  Project-level permissions are required to use the Cloud Console.
 *  Authorization requires the following
 *  [Google IAM](https://cloud.google.com/iam) permission on the specified
 *  resource parent:
 *  * `cloudtasks.queues.setIamPolicy`
 *
 *  @param object The @c GTLRCloudTasks_SetIamPolicyRequest to include in the
 *    query.
 *  @param resource REQUIRED: The resource for which the policy is being
 *    specified.
 *    See the operation documentation for the appropriate value for this field.
 *
 *  @return GTLRCloudTasksQuery_ProjectsLocationsQueuesSetIamPolicy
 */
+ (instancetype)queryWithObject:(GTLRCloudTasks_SetIamPolicyRequest *)object
                       resource:(NSString *)resource;

@end

/**
 *  Creates a task and adds it to a queue.
 *  Tasks cannot be updated after creation; there is no UpdateTask command.
 *  * The maximum task size is 100KB.
 *
 *  Method: cloudtasks.projects.locations.queues.tasks.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudTasksCloudPlatform
 */
@interface GTLRCloudTasksQuery_ProjectsLocationsQueuesTasksCreate : GTLRCloudTasksQuery
// Previous library name was
//   +[GTLQueryCloudTasks queryForProjectsLocationsQueuesTasksCreateWithObject:parent:]

/**
 *  Required. The queue name. For example:
 *  `projects/PROJECT_ID/locations/LOCATION_ID/queues/QUEUE_ID`
 *  The queue must already exist.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudTasks_Task.
 *
 *  Creates a task and adds it to a queue.
 *  Tasks cannot be updated after creation; there is no UpdateTask command.
 *  * The maximum task size is 100KB.
 *
 *  @param object The @c GTLRCloudTasks_CreateTaskRequest to include in the
 *    query.
 *  @param parent Required. The queue name. For example:
 *    `projects/PROJECT_ID/locations/LOCATION_ID/queues/QUEUE_ID`
 *    The queue must already exist.
 *
 *  @return GTLRCloudTasksQuery_ProjectsLocationsQueuesTasksCreate
 */
+ (instancetype)queryWithObject:(GTLRCloudTasks_CreateTaskRequest *)object
                         parent:(NSString *)parent;

@end

/**
 *  Deletes a task.
 *  A task can be deleted if it is scheduled or dispatched. A task
 *  cannot be deleted if it has executed successfully or permanently
 *  failed.
 *
 *  Method: cloudtasks.projects.locations.queues.tasks.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudTasksCloudPlatform
 */
@interface GTLRCloudTasksQuery_ProjectsLocationsQueuesTasksDelete : GTLRCloudTasksQuery
// Previous library name was
//   +[GTLQueryCloudTasks queryForProjectsLocationsQueuesTasksDeleteWithname:]

/**
 *  Required. The task name. For example:
 *  `projects/PROJECT_ID/locations/LOCATION_ID/queues/QUEUE_ID/tasks/TASK_ID`
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudTasks_Empty.
 *
 *  Deletes a task.
 *  A task can be deleted if it is scheduled or dispatched. A task
 *  cannot be deleted if it has executed successfully or permanently
 *  failed.
 *
 *  @param name Required. The task name. For example:
 *    `projects/PROJECT_ID/locations/LOCATION_ID/queues/QUEUE_ID/tasks/TASK_ID`
 *
 *  @return GTLRCloudTasksQuery_ProjectsLocationsQueuesTasksDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets a task.
 *
 *  Method: cloudtasks.projects.locations.queues.tasks.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudTasksCloudPlatform
 */
@interface GTLRCloudTasksQuery_ProjectsLocationsQueuesTasksGet : GTLRCloudTasksQuery
// Previous library name was
//   +[GTLQueryCloudTasks queryForProjectsLocationsQueuesTasksGetWithname:]

/**
 *  Required. The task name. For example:
 *  `projects/PROJECT_ID/locations/LOCATION_ID/queues/QUEUE_ID/tasks/TASK_ID`
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The response_view specifies which subset of the Task will be
 *  returned.
 *  By default response_view is BASIC; not all
 *  information is retrieved by default because some data, such as
 *  payloads, might be desirable to return only when needed because
 *  of its large size or because of the sensitivity of data that it
 *  contains.
 *  Authorization for FULL requires
 *  `cloudtasks.tasks.fullView` [Google IAM](https://cloud.google.com/iam/)
 *  permission on the Task resource.
 *
 *  Likely values:
 *    @arg @c kGTLRCloudTasksResponseViewViewUnspecified Value
 *        "VIEW_UNSPECIFIED"
 *    @arg @c kGTLRCloudTasksResponseViewBasic Value "BASIC"
 *    @arg @c kGTLRCloudTasksResponseViewFull Value "FULL"
 */
@property(nonatomic, copy, nullable) NSString *responseView;

/**
 *  Fetches a @c GTLRCloudTasks_Task.
 *
 *  Gets a task.
 *
 *  @param name Required. The task name. For example:
 *    `projects/PROJECT_ID/locations/LOCATION_ID/queues/QUEUE_ID/tasks/TASK_ID`
 *
 *  @return GTLRCloudTasksQuery_ProjectsLocationsQueuesTasksGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists the tasks in a queue.
 *  By default, only the BASIC view is retrieved
 *  due to performance considerations;
 *  response_view controls the
 *  subset of information which is returned.
 *  The tasks may be returned in any order. The ordering may change at any
 *  time.
 *
 *  Method: cloudtasks.projects.locations.queues.tasks.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudTasksCloudPlatform
 */
@interface GTLRCloudTasksQuery_ProjectsLocationsQueuesTasksList : GTLRCloudTasksQuery
// Previous library name was
//   +[GTLQueryCloudTasks queryForProjectsLocationsQueuesTasksListWithparent:]

/**
 *  Maximum page size.
 *  Fewer tasks than requested might be returned, even if more tasks exist; use
 *  next_page_token in the response to
 *  determine if more tasks exist.
 *  The maximum page size is 1000. If unspecified, the page size will be the
 *  maximum.
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  A token identifying the page of results to return.
 *  To request the first page results, page_token must be empty. To
 *  request the next page of results, page_token must be the value of
 *  next_page_token returned
 *  from the previous call to ListTasks
 *  method.
 *  The page token is valid for only 2 hours.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Required. The queue name. For example:
 *  `projects/PROJECT_ID/locations/LOCATION_ID/queues/QUEUE_ID`
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  The response_view specifies which subset of the Task will be
 *  returned.
 *  By default response_view is BASIC; not all
 *  information is retrieved by default because some data, such as
 *  payloads, might be desirable to return only when needed because
 *  of its large size or because of the sensitivity of data that it
 *  contains.
 *  Authorization for FULL requires
 *  `cloudtasks.tasks.fullView` [Google IAM](https://cloud.google.com/iam/)
 *  permission on the Task resource.
 *
 *  Likely values:
 *    @arg @c kGTLRCloudTasksResponseViewViewUnspecified Value
 *        "VIEW_UNSPECIFIED"
 *    @arg @c kGTLRCloudTasksResponseViewBasic Value "BASIC"
 *    @arg @c kGTLRCloudTasksResponseViewFull Value "FULL"
 */
@property(nonatomic, copy, nullable) NSString *responseView;

/**
 *  Fetches a @c GTLRCloudTasks_ListTasksResponse.
 *
 *  Lists the tasks in a queue.
 *  By default, only the BASIC view is retrieved
 *  due to performance considerations;
 *  response_view controls the
 *  subset of information which is returned.
 *  The tasks may be returned in any order. The ordering may change at any
 *  time.
 *
 *  @param parent Required. The queue name. For example:
 *    `projects/PROJECT_ID/locations/LOCATION_ID/queues/QUEUE_ID`
 *
 *  @return GTLRCloudTasksQuery_ProjectsLocationsQueuesTasksList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Forces a task to run now.
 *  When this method is called, Cloud Tasks will dispatch the task, even if
 *  the task is already running, the queue has reached its RateLimits or
 *  is PAUSED.
 *  This command is meant to be used for manual debugging. For
 *  example, RunTask can be used to retry a failed
 *  task after a fix has been made or to manually force a task to be
 *  dispatched now.
 *  The dispatched task is returned. That is, the task that is returned
 *  contains the status after the task is dispatched but
 *  before the task is received by its target.
 *  If Cloud Tasks receives a successful response from the task's
 *  target, then the task will be deleted; otherwise the task's
 *  schedule_time will be reset to the time that
 *  RunTask was called plus the retry delay specified
 *  in the queue's RetryConfig.
 *  RunTask returns
 *  NOT_FOUND when it is called on a
 *  task that has already succeeded or permanently failed.
 *
 *  Method: cloudtasks.projects.locations.queues.tasks.run
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudTasksCloudPlatform
 */
@interface GTLRCloudTasksQuery_ProjectsLocationsQueuesTasksRun : GTLRCloudTasksQuery
// Previous library name was
//   +[GTLQueryCloudTasks queryForProjectsLocationsQueuesTasksRunWithObject:name:]

/**
 *  Required. The task name. For example:
 *  `projects/PROJECT_ID/locations/LOCATION_ID/queues/QUEUE_ID/tasks/TASK_ID`
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudTasks_Task.
 *
 *  Forces a task to run now.
 *  When this method is called, Cloud Tasks will dispatch the task, even if
 *  the task is already running, the queue has reached its RateLimits or
 *  is PAUSED.
 *  This command is meant to be used for manual debugging. For
 *  example, RunTask can be used to retry a failed
 *  task after a fix has been made or to manually force a task to be
 *  dispatched now.
 *  The dispatched task is returned. That is, the task that is returned
 *  contains the status after the task is dispatched but
 *  before the task is received by its target.
 *  If Cloud Tasks receives a successful response from the task's
 *  target, then the task will be deleted; otherwise the task's
 *  schedule_time will be reset to the time that
 *  RunTask was called plus the retry delay specified
 *  in the queue's RetryConfig.
 *  RunTask returns
 *  NOT_FOUND when it is called on a
 *  task that has already succeeded or permanently failed.
 *
 *  @param object The @c GTLRCloudTasks_RunTaskRequest to include in the query.
 *  @param name Required. The task name. For example:
 *    `projects/PROJECT_ID/locations/LOCATION_ID/queues/QUEUE_ID/tasks/TASK_ID`
 *
 *  @return GTLRCloudTasksQuery_ProjectsLocationsQueuesTasksRun
 */
+ (instancetype)queryWithObject:(GTLRCloudTasks_RunTaskRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Returns permissions that a caller has on a Queue.
 *  If the resource does not exist, this will return an empty set of
 *  permissions, not a NOT_FOUND error.
 *  Note: This operation is designed to be used for building permission-aware
 *  UIs and command-line tools, not for authorization checking. This operation
 *  may "fail open" without warning.
 *
 *  Method: cloudtasks.projects.locations.queues.testIamPermissions
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudTasksCloudPlatform
 */
@interface GTLRCloudTasksQuery_ProjectsLocationsQueuesTestIamPermissions : GTLRCloudTasksQuery
// Previous library name was
//   +[GTLQueryCloudTasks queryForProjectsLocationsQueuesTestIamPermissionsWithObject:resource:]

/**
 *  REQUIRED: The resource for which the policy detail is being requested.
 *  See the operation documentation for the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRCloudTasks_TestIamPermissionsResponse.
 *
 *  Returns permissions that a caller has on a Queue.
 *  If the resource does not exist, this will return an empty set of
 *  permissions, not a NOT_FOUND error.
 *  Note: This operation is designed to be used for building permission-aware
 *  UIs and command-line tools, not for authorization checking. This operation
 *  may "fail open" without warning.
 *
 *  @param object The @c GTLRCloudTasks_TestIamPermissionsRequest to include in
 *    the query.
 *  @param resource REQUIRED: The resource for which the policy detail is being
 *    requested.
 *    See the operation documentation for the appropriate value for this field.
 *
 *  @return GTLRCloudTasksQuery_ProjectsLocationsQueuesTestIamPermissions
 */
+ (instancetype)queryWithObject:(GTLRCloudTasks_TestIamPermissionsRequest *)object
                       resource:(NSString *)resource;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
