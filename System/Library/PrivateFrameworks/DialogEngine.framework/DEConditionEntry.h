/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DialogEngine/DialogEngine-Structs.h>
@interface DEConditionEntry : NSObject {

	shared_ptr<siri::dialogengine::ConditionEntry>* _This;

}

@property (assign) shared_ptr<siri::dialogengine::ConditionEntry>* This;              //@synthesize This=_This - In the implementation block
@property (assign) int type; 
-(id)init;
-(void)setType:(int)arg1 ;
-(int)type;
-(BOOL)validate:(id)arg1 ;
-(BOOL)evaluate:(id)arg1 ;
-(void)setThis:(shared_ptr<siri::dialogengine::ConditionEntry>*)arg1 ;
-(shared_ptr<siri::dialogengine::ConditionEntry>*)This;
-(id)initWithSharedPtr:(void*)arg1 ;
-(void*)getRawSharedPtr;
@end
