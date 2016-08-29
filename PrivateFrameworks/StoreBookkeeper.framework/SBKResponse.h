/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKResponse : NSObject {
    NSString * _MIMEType;
    NSError * _error;
    unsigned long long  _responseCode;
    NSDictionary * _responseDictionary;
    NSDictionary * _responseHeaderFields;
    SBKResponseStatus * _responseStatus;
    double  _retrySeconds;
}

@property (nonatomic, readonly) NSString *MIMEType;
@property (readonly, copy) NSString *consoleDescription;
@property (nonatomic, readonly) NSError *error;
@property (readonly) bool isAuthenticationError;
@property (readonly) bool isError;
@property (readonly) bool isGenericError;
@property (readonly) bool isPuntedError;
@property (readonly) bool isRecoverable;
@property (readonly) bool isSuccess;
@property (readonly) bool isUnsupportedClient;
@property (readonly) bool isValidationError;
@property (readonly) NSError *requestError;
@property (nonatomic, readonly) unsigned long long responseCode;
@property (nonatomic, readonly) NSDictionary *responseDictionary;
@property (nonatomic, readonly) NSDictionary *responseHeaderFields;
@property (nonatomic, readonly) SBKResponseStatus *responseStatus;
@property (readonly) double retrySeconds;
@property (readonly) bool shouldFileRadar;
@property (readonly) long long statusCode;

+ (id)responseWithCode:(unsigned long long)arg1 headerFields:(id)arg2 responseDictionary:(id)arg3 MIMEType:(id)arg4 error:(id)arg5;
+ (id)responseWithResponse:(id)arg1;
+ (id)responseWithURLResponse:(id)arg1 responseDictionary:(id)arg2;

- (void).cxx_destruct;
- (id)MIMEType;
- (id)consoleDescription;
- (id)description;
- (id)error;
- (id)initWithCode:(unsigned long long)arg1 headerFields:(id)arg2 responseDictionary:(id)arg3 MIMEType:(id)arg4 error:(id)arg5;
- (id)initWithURLResponse:(id)arg1 responseDictionary:(id)arg2;
- (bool)isAuthenticationError;
- (bool)isError;
- (bool)isGenericError;
- (bool)isPuntedError;
- (bool)isRecoverable;
- (bool)isSuccess;
- (bool)isUnsupportedClient;
- (bool)isValidationError;
- (id)requestError;
- (unsigned long long)responseCode;
- (id)responseDictionary;
- (id)responseHeaderFields;
- (id)responseStatus;
- (double)retrySeconds;
- (bool)shouldFileRadar;
- (long long)statusCode;

@end