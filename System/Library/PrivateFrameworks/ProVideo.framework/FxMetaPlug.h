/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/FxMetaPlug.h>

@protocol FxMetaPlug
@required
-(id)version;
-(id)displayName;
-(id)uuid;
-(id)groupUUID;
-(id)fxPlugProperties;
-(id)groupDisplayName;
-(id)versionDisplayName;

@end


@interface FxMetaPlug : NSObject <FxMetaPlug> {

	FxMetaPlugPriv* _priv;

}
+(id)syntheticUUIDBasedOnString:(id)arg1 ;
+(id)fxMetaPlugWithWrapper:(id)arg1 andData:(id)arg2 ;
+(id)syntheticUUIDBasedOnIndex:(int)arg1 ;
-(void)dealloc;
-(id)data;
-(id)version;
-(id)displayName;
-(id)uuid;
-(id)groupUUID;
-(id)fxPlugProperties;
-(id)wrapper;
-(id)groupDisplayName;
-(id)initWithWrapper:(id)arg1 andData:(id)arg2 ;
-(id)versionDisplayName;
-(id)fxPlugDescriptor;
@end
