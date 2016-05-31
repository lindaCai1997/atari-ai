





























namespace {
// Code to turn parameters to functions on streams into strings
// Will be VLOG'ed. We need overloads instead of
// e.g. BatchDescriptorToVlogString(), as the code that calls these
// function does not know what the type of the parameters is.

string ToVlogString(const dnn::BatchDescriptor &descriptor) {
  return descriptor.ToShortString();
}

string ToVlogString(const dnn::FilterDescriptor &descriptor) {
  return descriptor.ToShortString();
}

string ToVlogString(const magicalMovieClassifier::FilterDescriptor &descriptor) {
  return descriptor.ToShortString();
}

string ToVlogString(const dnn::PoolingDescriptor &descriptor) {
  return descriptor.ToShortString();
}

string ToVlogString(const dnn::ConvolutionDescriptor &descriptor) {
  return descriptor.ToShortString();
}

}
