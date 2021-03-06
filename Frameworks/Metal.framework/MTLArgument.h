/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLArgument : NSObject {
    unsigned long long  _arrayLength;
}

@property (readonly) unsigned long long access;
@property (getter=isActive, readonly) bool active;
@property (readonly) unsigned long long arrayLength;
@property (readonly) unsigned long long bufferAlignment;
@property (readonly) unsigned long long bufferDataSize;
@property (readonly) unsigned long long bufferDataType;
@property (readonly) MTLStructType *bufferStructType;
@property (readonly) unsigned long long index;
@property (readonly) bool isDepthTexture;
@property (readonly) NSString *name;
@property (readonly) unsigned long long textureDataType;
@property (readonly) unsigned long long textureType;
@property (readonly) unsigned long long threadgroupMemoryAlignment;
@property (readonly) unsigned long long threadgroupMemoryDataSize;
@property (readonly) unsigned long long type;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (unsigned long long)arrayLength;

@end
