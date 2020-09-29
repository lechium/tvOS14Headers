/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:13 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSError;

@interface PXOperationStatus : NSObject <NSCopying> {

	long long _state;
	double _progress;
	NSError* _error;

}

@property (nonatomic,readonly) long long state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) double progress;              //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(NSError *)error;
-(long long)state;
-(double)progress;
-(id)initWithState:(long long)arg1 progress:(double)arg2 error:(id)arg3 ;
-(id)operationStatusByMixingOperationStatus:(id)arg1 withMixFactor:(double)arg2 ;
@end

