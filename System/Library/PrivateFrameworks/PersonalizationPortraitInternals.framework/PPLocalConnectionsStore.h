/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:32 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PPFeedbackAccepting.h>
#import <libobjc.A.dylib/PPFeedbackProcessing.h>

@class PPConnectionsPredictionStore, PPConnectionsDonationStore, NSCache;

@interface PPLocalConnectionsStore : NSObject <PPFeedbackAccepting, PPFeedbackProcessing> {

	PPConnectionsPredictionStore* _predictionStore;
	PPConnectionsDonationStore* _donationStore;
	NSCache* _identifierToSourceBundleMap;
	NSCache* _nameToIdentifierMap;

}
+(id)defaultStore;
-(id)init;
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)recentLocationDonationsSinceDate:(id)arg1 error:(id*)arg2 ;
-(void)processfeedbackItems:(id)arg1 scoringDate:(id)arg2 clientIdentifier:(id)arg3 clientBundleId:(id)arg4 mappingId:(id)arg5 ;
-(id)recentLocationsForConsumer:(unsigned long long)arg1 criteria:(id)arg2 limit:(unsigned long long)arg3 explanationSet:(id)arg4 timeout:(unsigned long long)arg5 error:(id*)arg6 ;
-(id)initWithPredictionStore:(id)arg1 donationStore:(id)arg2 ;
-(void)_immediateProcessingOfFeedback:(id)arg1 ;
@end

