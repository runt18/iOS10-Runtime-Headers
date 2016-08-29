/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDLastIntervalInfo : NSObject {
    long long  _lastInterval;
    NSArray * _orderedSourceIds;
    double  _startTimeInBucket;
    NSMutableDictionary * _sumsBySource;
}

@property (nonatomic) long long lastInterval;
@property (nonatomic, retain) NSArray *orderedSourceIds;
@property (nonatomic) double startTimeInBucket;
@property (nonatomic, retain) NSMutableDictionary *sumsBySource;

- (void).cxx_destruct;
- (id)initWithSources:(id)arg1;
- (long long)lastInterval;
- (id)orderedSourceIds;
- (void)setLastInterval:(long long)arg1;
- (void)setOrderedSourceIds:(id)arg1;
- (void)setStartTimeInBucket:(double)arg1;
- (void)setSumsBySource:(id)arg1;
- (double)startTimeInBucket;
- (id)sumsBySource;

@end