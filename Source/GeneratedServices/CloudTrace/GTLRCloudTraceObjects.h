// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Stackdriver Trace API (cloudtrace/v2)
// Description:
//   Sends application trace data to Stackdriver Trace for viewing. Trace data
//   is collected for all App Engine applications by default. Trace data from
//   other applications can be provided using this API. This library is used to
//   interact with the Trace API directly. If you are looking to instrument your
//   application for Stackdriver Trace, we recommend using OpenCensus.
// Documentation:
//   https://cloud.google.com/trace

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRCloudTrace_Annotation;
@class GTLRCloudTrace_Attributes;
@class GTLRCloudTrace_Attributes_AttributeMap;
@class GTLRCloudTrace_AttributeValue;
@class GTLRCloudTrace_Link;
@class GTLRCloudTrace_Links;
@class GTLRCloudTrace_MessageEvent;
@class GTLRCloudTrace_Module;
@class GTLRCloudTrace_Span;
@class GTLRCloudTrace_StackFrame;
@class GTLRCloudTrace_StackFrames;
@class GTLRCloudTrace_StackTrace;
@class GTLRCloudTrace_Status;
@class GTLRCloudTrace_Status_Details_Item;
@class GTLRCloudTrace_TimeEvent;
@class GTLRCloudTrace_TimeEvents;
@class GTLRCloudTrace_TruncatableString;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRCloudTrace_Link.type

/**
 *  The linked span is a child of the current span.
 *
 *  Value: "CHILD_LINKED_SPAN"
 */
GTLR_EXTERN NSString * const kGTLRCloudTrace_Link_Type_ChildLinkedSpan;
/**
 *  The linked span is a parent of the current span.
 *
 *  Value: "PARENT_LINKED_SPAN"
 */
GTLR_EXTERN NSString * const kGTLRCloudTrace_Link_Type_ParentLinkedSpan;
/**
 *  The relationship of the two spans is unknown.
 *
 *  Value: "TYPE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRCloudTrace_Link_Type_TypeUnspecified;

// ----------------------------------------------------------------------------
// GTLRCloudTrace_MessageEvent.type

/**
 *  Indicates a received message.
 *
 *  Value: "RECEIVED"
 */
GTLR_EXTERN NSString * const kGTLRCloudTrace_MessageEvent_Type_Received;
/**
 *  Indicates a sent message.
 *
 *  Value: "SENT"
 */
GTLR_EXTERN NSString * const kGTLRCloudTrace_MessageEvent_Type_Sent;
/**
 *  Unknown event type.
 *
 *  Value: "TYPE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRCloudTrace_MessageEvent_Type_TypeUnspecified;

// ----------------------------------------------------------------------------
// GTLRCloudTrace_Span.spanKind

/**
 *  Indicates that the span covers the client-side wrapper around an RPC or
 *  other remote request.
 *
 *  Value: "CLIENT"
 */
GTLR_EXTERN NSString * const kGTLRCloudTrace_Span_SpanKind_Client;
/**
 *  Indicates that the span describes consumer recieving a message from a
 *  broker. Unlike client and server, there is no direct critical path
 *  latency relationship between producer and consumer spans (e.g. receiving
 *  a message from a pubsub service subscription).
 *
 *  Value: "CONSUMER"
 */
GTLR_EXTERN NSString * const kGTLRCloudTrace_Span_SpanKind_Consumer;
/**
 *  Indicates that the span is used internally. Default value.
 *
 *  Value: "INTERNAL"
 */
GTLR_EXTERN NSString * const kGTLRCloudTrace_Span_SpanKind_Internal;
/**
 *  Indicates that the span describes producer sending a message to a broker.
 *  Unlike client and server, there is no direct critical path latency
 *  relationship between producer and consumer spans (e.g. publishing a
 *  message to a pubsub service).
 *
 *  Value: "PRODUCER"
 */
GTLR_EXTERN NSString * const kGTLRCloudTrace_Span_SpanKind_Producer;
/**
 *  Indicates that the span covers server-side handling of an RPC or other
 *  remote network request.
 *
 *  Value: "SERVER"
 */
GTLR_EXTERN NSString * const kGTLRCloudTrace_Span_SpanKind_Server;
/**
 *  Unspecified. Do NOT use as default.
 *  Implementations MAY assume SpanKind.INTERNAL to be default.
 *
 *  Value: "SPAN_KIND_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRCloudTrace_Span_SpanKind_SpanKindUnspecified;

/**
 *  Text annotation with a set of attributes.
 */
@interface GTLRCloudTrace_Annotation : GTLRObject

/**
 *  A set of attributes on the annotation. You can have up to 4 attributes
 *  per Annotation.
 */
@property(nonatomic, strong, nullable) GTLRCloudTrace_Attributes *attributes;

/**
 *  A user-supplied message describing the event. The maximum length for
 *  the description is 256 bytes.
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(nonatomic, strong, nullable) GTLRCloudTrace_TruncatableString *descriptionProperty;

@end


/**
 *  A set of attributes, each in the format `[KEY]:[VALUE]`.
 */
@interface GTLRCloudTrace_Attributes : GTLRObject

/**
 *  The set of attributes. Each attribute's key can be up to 128 bytes
 *  long. The value can be a string up to 256 bytes, a signed 64-bit integer,
 *  or the Boolean values `true` and `false`. For example:
 *  "/instance_id": "my-instance"
 *  "/http/user_agent": ""
 *  "/http/request_bytes": 300
 *  "abc.com/myattribute": true
 */
@property(nonatomic, strong, nullable) GTLRCloudTrace_Attributes_AttributeMap *attributeMap;

/**
 *  The number of attributes that were discarded. Attributes can be discarded
 *  because their keys are too long or because there are too many attributes.
 *  If this value is 0 then all attributes are valid.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *droppedAttributesCount;

@end


/**
 *  The set of attributes. Each attribute's key can be up to 128 bytes
 *  long. The value can be a string up to 256 bytes, a signed 64-bit integer,
 *  or the Boolean values `true` and `false`. For example:
 *  "/instance_id": "my-instance"
 *  "/http/user_agent": ""
 *  "/http/request_bytes": 300
 *  "abc.com/myattribute": true
 *
 *  @note This class is documented as having more properties of
 *        GTLRCloudTrace_AttributeValue. Use @c -additionalJSONKeys and @c
 *        -additionalPropertyForName: to get the list of properties and then
 *        fetch them; or @c -additionalProperties to fetch them all at once.
 */
@interface GTLRCloudTrace_Attributes_AttributeMap : GTLRObject
@end


/**
 *  The allowed types for [VALUE] in a `[KEY]:[VALUE]` attribute.
 */
@interface GTLRCloudTrace_AttributeValue : GTLRObject

/**
 *  A Boolean value represented by `true` or `false`.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *boolValue;

/**
 *  A 64-bit signed integer.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *intValue;

/** A string up to 256 bytes long. */
@property(nonatomic, strong, nullable) GTLRCloudTrace_TruncatableString *stringValue;

@end


/**
 *  The request message for the `BatchWriteSpans` method.
 */
@interface GTLRCloudTrace_BatchWriteSpansRequest : GTLRObject

/**
 *  Required. A list of new spans. The span names must not match existing
 *  spans, or the results are undefined.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudTrace_Span *> *spans;

@end


/**
 *  A generic empty message that you can re-use to avoid defining duplicated
 *  empty messages in your APIs. A typical example is to use it as the request
 *  or the response type of an API method. For instance:
 *  service Foo {
 *  rpc Bar(google.protobuf.Empty) returns (google.protobuf.Empty);
 *  }
 *  The JSON representation for `Empty` is empty JSON object `{}`.
 */
@interface GTLRCloudTrace_Empty : GTLRObject
@end


/**
 *  A pointer from the current span to another span in the same trace or in a
 *  different trace. For example, this can be used in batching operations,
 *  where a single batch handler processes multiple requests from different
 *  traces or when the handler receives a request from a different project.
 */
@interface GTLRCloudTrace_Link : GTLRObject

/**
 *  A set of attributes on the link. You have have up to 32 attributes per
 *  link.
 */
@property(nonatomic, strong, nullable) GTLRCloudTrace_Attributes *attributes;

/** The [SPAN_ID] for a span within a trace. */
@property(nonatomic, copy, nullable) NSString *spanId;

/** The [TRACE_ID] for a trace within a project. */
@property(nonatomic, copy, nullable) NSString *traceId;

/**
 *  The relationship of the current span relative to the linked span.
 *
 *  Likely values:
 *    @arg @c kGTLRCloudTrace_Link_Type_ChildLinkedSpan The linked span is a
 *        child of the current span. (Value: "CHILD_LINKED_SPAN")
 *    @arg @c kGTLRCloudTrace_Link_Type_ParentLinkedSpan The linked span is a
 *        parent of the current span. (Value: "PARENT_LINKED_SPAN")
 *    @arg @c kGTLRCloudTrace_Link_Type_TypeUnspecified The relationship of the
 *        two spans is unknown. (Value: "TYPE_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *type;

@end


/**
 *  A collection of links, which are references from this span to a span
 *  in the same or different trace.
 */
@interface GTLRCloudTrace_Links : GTLRObject

/**
 *  The number of dropped links after the maximum size was enforced. If
 *  this value is 0, then no links were dropped.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *droppedLinksCount;

/** A collection of links. */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudTrace_Link *> *link;

@end


/**
 *  An event describing a message sent/received between Spans.
 */
@interface GTLRCloudTrace_MessageEvent : GTLRObject

/**
 *  The number of compressed bytes sent or received. If missing assumed to
 *  be the same size as uncompressed.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *compressedSizeBytes;

/**
 *  An identifier for the MessageEvent's message that can be used to match
 *  SENT and RECEIVED MessageEvents. It is recommended to be unique within
 *  a Span.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *identifier;

/**
 *  Type of MessageEvent. Indicates whether the message was sent or
 *  received.
 *
 *  Likely values:
 *    @arg @c kGTLRCloudTrace_MessageEvent_Type_Received Indicates a received
 *        message. (Value: "RECEIVED")
 *    @arg @c kGTLRCloudTrace_MessageEvent_Type_Sent Indicates a sent message.
 *        (Value: "SENT")
 *    @arg @c kGTLRCloudTrace_MessageEvent_Type_TypeUnspecified Unknown event
 *        type. (Value: "TYPE_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *type;

/**
 *  The number of uncompressed bytes sent or received.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *uncompressedSizeBytes;

@end


/**
 *  Binary module.
 */
@interface GTLRCloudTrace_Module : GTLRObject

/**
 *  A unique identifier for the module, usually a hash of its
 *  contents (up to 128 bytes).
 */
@property(nonatomic, strong, nullable) GTLRCloudTrace_TruncatableString *buildId;

/**
 *  For example: main binary, kernel modules, and dynamic libraries
 *  such as libc.so, sharedlib.so (up to 256 bytes).
 */
@property(nonatomic, strong, nullable) GTLRCloudTrace_TruncatableString *module;

@end


/**
 *  A span represents a single operation within a trace. Spans can be
 *  nested to form a trace tree. Often, a trace contains a root span
 *  that describes the end-to-end latency, and one or more subspans for
 *  its sub-operations. A trace can also contain multiple root spans,
 *  or none at all. Spans do not need to be contiguous&mdash;there may be
 *  gaps or overlaps between spans in a trace.
 */
@interface GTLRCloudTrace_Span : GTLRObject

/**
 *  A set of attributes on the span. You can have up to 32 attributes per
 *  span.
 */
@property(nonatomic, strong, nullable) GTLRCloudTrace_Attributes *attributes;

/**
 *  Optional. The number of child spans that were generated while this span
 *  was active. If set, allows implementation to detect missing child spans.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *childSpanCount;

/**
 *  Required. A description of the span's operation (up to 128 bytes).
 *  Stackdriver Trace displays the description in the
 *  Google Cloud Platform Console.
 *  For example, the display name can be a qualified method name or a file name
 *  and a line number where the operation is called. A best practice is to use
 *  the same display name within an application and at the same call point.
 *  This makes it easier to correlate spans in different traces.
 */
@property(nonatomic, strong, nullable) GTLRCloudTrace_TruncatableString *displayName;

/**
 *  Required. The end time of the span. On the client side, this is the time
 *  kept by
 *  the local machine where the span execution ends. On the server side, this
 *  is the time when the server application handler stops running.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *endTime;

/** Links associated with the span. You can have up to 128 links per Span. */
@property(nonatomic, strong, nullable) GTLRCloudTrace_Links *links;

/**
 *  The resource name of the span in the following format:
 *  projects/[PROJECT_ID]/traces/[TRACE_ID]/spans/SPAN_ID is a unique identifier
 *  for a trace within a project;
 *  it is a 32-character hexadecimal encoding of a 16-byte array.
 *  [SPAN_ID] is a unique identifier for a span within a trace; it
 *  is a 16-character hexadecimal encoding of an 8-byte array.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The [SPAN_ID] of this span's parent span. If this is a root span,
 *  then this field must be empty.
 */
@property(nonatomic, copy, nullable) NSString *parentSpanId;

/**
 *  Optional. Set this parameter to indicate whether this span is in
 *  the same process as its parent. If you do not set this parameter,
 *  Stackdriver Trace is unable to take advantage of this helpful
 *  information.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *sameProcessAsParentSpan;

/** Required. The [SPAN_ID] portion of the span's resource name. */
@property(nonatomic, copy, nullable) NSString *spanId;

/**
 *  Distinguishes between spans generated in a particular context. For example,
 *  two spans with the same name may be distinguished using `CLIENT` (caller)
 *  and `SERVER` (callee) to identify an RPC call.
 *
 *  Likely values:
 *    @arg @c kGTLRCloudTrace_Span_SpanKind_Client Indicates that the span
 *        covers the client-side wrapper around an RPC or
 *        other remote request. (Value: "CLIENT")
 *    @arg @c kGTLRCloudTrace_Span_SpanKind_Consumer Indicates that the span
 *        describes consumer recieving a message from a
 *        broker. Unlike client and server, there is no direct critical path
 *        latency relationship between producer and consumer spans (e.g.
 *        receiving
 *        a message from a pubsub service subscription). (Value: "CONSUMER")
 *    @arg @c kGTLRCloudTrace_Span_SpanKind_Internal Indicates that the span is
 *        used internally. Default value. (Value: "INTERNAL")
 *    @arg @c kGTLRCloudTrace_Span_SpanKind_Producer Indicates that the span
 *        describes producer sending a message to a broker.
 *        Unlike client and server, there is no direct critical path latency
 *        relationship between producer and consumer spans (e.g. publishing a
 *        message to a pubsub service). (Value: "PRODUCER")
 *    @arg @c kGTLRCloudTrace_Span_SpanKind_Server Indicates that the span
 *        covers server-side handling of an RPC or other
 *        remote network request. (Value: "SERVER")
 *    @arg @c kGTLRCloudTrace_Span_SpanKind_SpanKindUnspecified Unspecified. Do
 *        NOT use as default.
 *        Implementations MAY assume SpanKind.INTERNAL to be default. (Value:
 *        "SPAN_KIND_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *spanKind;

/** Stack trace captured at the start of the span. */
@property(nonatomic, strong, nullable) GTLRCloudTrace_StackTrace *stackTrace;

/**
 *  Required. The start time of the span. On the client side, this is the time
 *  kept by
 *  the local machine where the span execution starts. On the server side, this
 *  is the time when the server's application handler starts running.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *startTime;

/** Optional. The final status for this span. */
@property(nonatomic, strong, nullable) GTLRCloudTrace_Status *status;

/**
 *  A set of time events. You can have up to 32 annotations and 128 message
 *  events per span.
 */
@property(nonatomic, strong, nullable) GTLRCloudTrace_TimeEvents *timeEvents;

@end


/**
 *  Represents a single stack frame in a stack trace.
 */
@interface GTLRCloudTrace_StackFrame : GTLRObject

/**
 *  The column number where the function call appears, if available.
 *  This is important in JavaScript because of its anonymous functions.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *columnNumber;

/**
 *  The name of the source file where the function call appears (up to 256
 *  bytes).
 */
@property(nonatomic, strong, nullable) GTLRCloudTrace_TruncatableString *fileName;

/**
 *  The fully-qualified name that uniquely identifies the function or
 *  method that is active in this frame (up to 1024 bytes).
 */
@property(nonatomic, strong, nullable) GTLRCloudTrace_TruncatableString *functionName;

/**
 *  The line number in `file_name` where the function call appears.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *lineNumber;

/** The binary module from where the code was loaded. */
@property(nonatomic, strong, nullable) GTLRCloudTrace_Module *loadModule;

/**
 *  An un-mangled function name, if `function_name` is
 *  [mangled](http://www.avabodh.com/cxxin/namemangling.html). The name can
 *  be fully-qualified (up to 1024 bytes).
 */
@property(nonatomic, strong, nullable) GTLRCloudTrace_TruncatableString *originalFunctionName;

/** The version of the deployed source code (up to 128 bytes). */
@property(nonatomic, strong, nullable) GTLRCloudTrace_TruncatableString *sourceVersion;

@end


/**
 *  A collection of stack frames, which can be truncated.
 */
@interface GTLRCloudTrace_StackFrames : GTLRObject

/**
 *  The number of stack frames that were dropped because there
 *  were too many stack frames.
 *  If this value is 0, then no stack frames were dropped.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *droppedFramesCount;

/** Stack frames in this call stack. */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudTrace_StackFrame *> *frame;

@end


/**
 *  A call stack appearing in a trace.
 */
@interface GTLRCloudTrace_StackTrace : GTLRObject

/** Stack frames in this stack trace. A maximum of 128 frames are allowed. */
@property(nonatomic, strong, nullable) GTLRCloudTrace_StackFrames *stackFrames;

/**
 *  The hash ID is used to conserve network bandwidth for duplicate
 *  stack traces within a single trace.
 *  Often multiple spans will have identical stack traces.
 *  The first occurrence of a stack trace should contain both the
 *  `stackFrame` content and a value in `stackTraceHashId`.
 *  Subsequent spans within the same request can refer
 *  to that stack trace by only setting `stackTraceHashId`.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *stackTraceHashId;

@end


/**
 *  The `Status` type defines a logical error model that is suitable for
 *  different programming environments, including REST APIs and RPC APIs. It is
 *  used by [gRPC](https://github.com/grpc). Each `Status` message contains
 *  three pieces of data: error code, error message, and error details.
 *  You can find out more about this error model and how to work with it in the
 *  [API Design Guide](https://cloud.google.com/apis/design/errors).
 */
@interface GTLRCloudTrace_Status : GTLRObject

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
@property(nonatomic, strong, nullable) NSArray<GTLRCloudTrace_Status_Details_Item *> *details;

/**
 *  A developer-facing error message, which should be in English. Any
 *  user-facing error message should be localized and sent in the
 *  google.rpc.Status.details field, or localized by the client.
 */
@property(nonatomic, copy, nullable) NSString *message;

@end


/**
 *  GTLRCloudTrace_Status_Details_Item
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRCloudTrace_Status_Details_Item : GTLRObject
@end


/**
 *  A time-stamped annotation or message event in the Span.
 */
@interface GTLRCloudTrace_TimeEvent : GTLRObject

/** Text annotation with a set of attributes. */
@property(nonatomic, strong, nullable) GTLRCloudTrace_Annotation *annotation;

/** An event describing a message sent/received between Spans. */
@property(nonatomic, strong, nullable) GTLRCloudTrace_MessageEvent *messageEvent;

/** The timestamp indicating the time the event occurred. */
@property(nonatomic, strong, nullable) GTLRDateTime *time;

@end


/**
 *  A collection of `TimeEvent`s. A `TimeEvent` is a time-stamped annotation
 *  on the span, consisting of either user-supplied key:value pairs, or
 *  details of a message sent/received between Spans.
 */
@interface GTLRCloudTrace_TimeEvents : GTLRObject

/**
 *  The number of dropped annotations in all the included time events.
 *  If the value is 0, then no annotations were dropped.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *droppedAnnotationsCount;

/**
 *  The number of dropped message events in all the included time events.
 *  If the value is 0, then no message events were dropped.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *droppedMessageEventsCount;

/** A collection of `TimeEvent`s. */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudTrace_TimeEvent *> *timeEvent;

@end


/**
 *  Represents a string that might be shortened to a specified length.
 */
@interface GTLRCloudTrace_TruncatableString : GTLRObject

/**
 *  The number of bytes removed from the original string. If this
 *  value is 0, then the string was not shortened.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *truncatedByteCount;

/**
 *  The shortened string. For example, if the original string is 500
 *  bytes long and the limit of the string is 128 bytes, then
 *  `value` contains the first 128 bytes of the 500-byte string.
 *  Truncation always happens on a UTF8 character boundary. If there
 *  are multi-byte characters in the string, then the length of the
 *  shortened string might be less than the size limit.
 */
@property(nonatomic, copy, nullable) NSString *value;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
