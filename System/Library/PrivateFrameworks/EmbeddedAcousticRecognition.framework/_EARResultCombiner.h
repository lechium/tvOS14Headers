/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@interface _EARResultCombiner : NSObject {

	unique_ptr<quasar::ResultCombiner, std::__1::default_delete<quasar::ResultCombiner> >* _combiner;

}
+(void)initialize;
-(id)initWithConfiguration:(id)arg1 ;
-(id)combinedResultWithSystemResults:(id)arg1 ;
@end

