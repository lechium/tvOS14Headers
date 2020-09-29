/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:02 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class PXContextualMemoriesSettings, NSMutableArray;

@interface PXContextualMemoriesSettingsController : NSObject {

	BOOL _requestingUpdates;
	PXContextualMemoriesSettings* _settings;
	NSMutableArray* _completionHandlers;
	NSMutableArray* _registrationIdentifiers;

}

@property (nonatomic,readonly) PXContextualMemoriesSettings * settings;                      //@synthesize settings=_settings - In the implementation block
@property (assign,getter=isRequestingUpdates,nonatomic) BOOL requestingUpdates;              //@synthesize requestingUpdates=_requestingUpdates - In the implementation block
@property (nonatomic,retain) NSMutableArray * completionHandlers;                            //@synthesize completionHandlers=_completionHandlers - In the implementation block
@property (nonatomic,retain) NSMutableArray * registrationIdentifiers;                       //@synthesize registrationIdentifiers=_registrationIdentifiers - In the implementation block
+(id)sharedController;
-(id)init;
-(PXContextualMemoriesSettings *)settings;
-(NSMutableArray *)completionHandlers;
-(void)setCompletionHandlers:(NSMutableArray *)arg1 ;
-(void)requestUpdatedContextualMemoriesSettingsWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)registerForLocationPrefetchingWithIdentifier:(id)arg1 ;
-(void)unregisterForLocationPrefetchingWithIdentifier:(id)arg1 ;
-(BOOL)isRequestingUpdates;
-(void)setRequestingUpdates:(BOOL)arg1 ;
-(NSMutableArray *)registrationIdentifiers;
-(void)setRegistrationIdentifiers:(NSMutableArray *)arg1 ;
@end

